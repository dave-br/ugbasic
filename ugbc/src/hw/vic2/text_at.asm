; /*****************************************************************************
;  * ugBASIC - an isomorphic BASIC language compiler for retrocomputers        *
;  *****************************************************************************
;  * Copyright 2021 Marco Spedaletti (asimov@mclink.it)
;  *
;  * Licensed under the Apache License, Version 2.0 (the "License");
;  * you may not use this file except in compliance with the License.
;  * You may obtain a copy of the License at
;  *
;  * http://www.apache.org/licenses/LICENSE-2.0
;  *
;  * Unless required by applicable law or agreed to in writing, software
;  * distributed under the License is distributed on an "AS IS" BASIS,
;  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
;  * See the License for the specific language governing permissions and
;  * limitations under the License.
;  *----------------------------------------------------------------------------
;  * Concesso in licenza secondo i termini della Licenza Apache, versione 2.0
;  * (la "Licenza"); è proibito usare questo file se non in conformità alla
;  * Licenza. Una copia della Licenza è disponibile all'indirizzo:
;  *
;  * http://www.apache.org/licenses/LICENSE-2.0
;  *
;  * Se non richiesto dalla legislazione vigente o concordato per iscritto,
;  * il software distribuito nei termini della Licenza è distribuito
;  * "COSì COM'è", SENZA GARANZIE O CONDIZIONI DI ALCUN TIPO, esplicite o
;  * implicite. Consultare la Licenza per il testo specifico che regola le
;  * autorizzazioni e le limitazioni previste dalla medesima.
;  ****************************************************************************/
;* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
;*                                                                             *
;*                      TEXT AT GIVEN POSITION ON VIC-II                       *
;*                                                                             *
;*                             by Marco Spedaletti                             *
;*                                                                             *
;* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

TEXTPTR = $20
TEXTSIZE = $24
TABSTODRAW = $25
TEXTWW = $2C
TEXTPEN = $2B
TEXTPAPER = $2D
SCREENCODE = $2E

TEXTATDECODE:
    CMP #32
    BCS TEXTATXSP128
    JMP TEXTATSP128
TEXTATXSP128:
    CMP #64
    BCS TEXTATXSP0
    JMP TEXTATDECODE0
TEXTATXSP0:
    CMP #96
    BCS TEXTATXSM64
    JMP TEXTATSM64
TEXTATXSM64:
    CMP #160
    BCS TEXTATXSP64
    JMP TEXTATSP64
TEXTATXSP64:
    CMP #192
    BCS TEXTATX2SM64
    JMP TEXTATSM64
TEXTATX2SM64:
    CMP #224
    BCS TEXTATX2SM128
    JMP TEXTATSM128
TEXTATX2SM128:
    JMP TEXTATDECODE0
TEXTATSP64:
    CLC
    ADC #64
    JMP TEXTATDECODE0
TEXTATSP128:
    ADC #128
    JMP TEXTATDECODE0
TEXTATSM64:
    SBC #63
    JMP TEXTATDECODE0
TEXTATSM128:
    SBC #127
    JMP TEXTATDECODE0
TEXTATDECODE0:
    STA SCREENCODE
    RTS

TEXTAT:
    LDA TEXTSIZE
    BNE TEXTATGO
    RTS

TEXTATGO:
    SEI
    LDA $D011
    AND #%00100000
    BNE TEXTATBITMAPMODE
    JMP TEXTATTILEMODE
    
;-----------------------------------------------------------------------------
; BITMAP MODE
;-----------------------------------------------------------------------------

TEXTATBITMAPMODE:

    LDX $d3
    LDY $d6

    CLC

    LDA PLOTVBASELO,Y          ;table of $A000 row base addresses
    ADC PLOT8LO,X              ;+ (8 * Xcell)
    STA PLOTDEST               ;= cell address

    LDA PLOTVBASEHI,Y          ;do the high byte
    ADC PLOT8HI,X
    STA PLOTDEST+1

    CLC

    TXA
    ADC PLOTCVBASELO,Y          ;table of $8400 row base addresses
    STA PLOTCDEST               ;= cell address

    LDA #0
    ADC PLOTCVBASEHI,Y          ;do the high byte
    STA PLOTCDEST+1

    LDX TEXTSIZE
    LDY #$0
TEXTATBMLOOP2:

    LDA TABSTODRAW
    BEQ TEXTATBMNSKIPTAB
    JMP TEXTATBMSKIPTAB

TEXTATBMNSKIPTAB:
    LDA (TEXTPTR),Y

    CMP #31
    BCS TEXTATBMXCC
    JMP TEXTATBMCC

TEXTATBMXCC:
    JSR TEXTATDECODE
    JMP TEXTATBMSP0

TEXTATBMTAB:
    LDA $d3
TEXTATBMTAB2:
    CMP TABCOUNT
    BCC TEXTATBMTAB3
    DEC TABCOUNT
    JMP TEXTATBMTAB2
TEXTATBMTAB3:
    CLC
    ADC TABCOUNT
    STA TABSTODRAW
    JMP TEXTATBMNEXT

TEXTATBMCC:
    CMP #09
    BEQ TEXTATBMTAB
    CMP #01
    BEQ TEXTATBMPEN
    CMP #02
    BEQ TEXTATBMPAPER
    CMP #03
    BEQ TEXTATBMCMOVEPREPARE
    CMP #04
    BEQ TEXTATBMXAT
    JMP TEXTATBMNEXT

TEXTATBMXAT:
    JMP TEXTATBMAT

TEXTATBMPEN:
    INC TEXTPTR
    DEX
    LDA TEXTWW
    AND #$2
    BEQ TEXTATBMPENDISABLED
    LDA (TEXTPTR), Y
    ASL A
    ASL A
    ASL A
    ASL A
    STA TEXTPEN
TEXTATBMPENDISABLED:
    INC TEXTPTR
    DEY
    JMP TEXTATBMNEXT

TEXTATBMPAPER:
    INC TEXTPTR
    DEX
    LDA TEXTWW
    AND #$1
    BEQ TEXTATBMPAPERDISABLED
    LDA (TEXTPTR), Y
    STA TEXTPAPER
TEXTATBMPAPERDISABLED:
    INC TEXTPTR
    DEY
    JMP TEXTATBMNEXT

TEXTATBMCMOVEPREPARE:
    INC TEXTPTR
    DEX
    LDA (TEXTPTR), Y
    STA CLINEX
    INC TEXTPTR
    DEX
    LDA (TEXTPTR), Y
    STA CLINEY

TEXTATBMCMOVE:
    CLC
    LDA CLINEX
    ADC $d3
    STA $d3
    LDA CLINEY
    ADC $d6
    STA $d6

    JMP TEXTATBMNEXT

TEXTATBMAT:
    INC TEXTPTR
    DEX
    LDA (TEXTPTR), Y
    SEC
    SBC $d3
    STA CLINEX
    INC TEXTPTR
    DEX
    LDA (TEXTPTR), Y
    SEC
    SBC $d6
    STA CLINEY
    JMP TEXTATBMCMOVE

TEXTATBMSP0:

    TYA
    PHA

    TXA
    PHA

    LDX $d3
    LDY $d6

    CLC

    LDA PLOTVBASELO,Y          ;table of $A000 row base addresses
    ADC PLOT8LO,X              ;+ (8 * Xcell)
    STA PLOTDEST               ;= cell address

    LDA PLOTVBASEHI,Y          ;do the high byte
    ADC PLOT8HI,X
    STA PLOTDEST+1

    CLC

    TXA
    ADC PLOTCVBASELO,Y          ;table of $8400 row base addresses
    STA PLOTCDEST               ;= cell address

    LDA #0
    ADC PLOTCVBASEHI,Y          ;do the high byte
    STA PLOTCDEST+1

    PLA
    TAX
    
    PLA
    TAY

    TYA
    PHA
    LDY #0

    LDA SCREENCODE
    STA TMPPTR
    LDA #0
    STA TMPPTR+1

    CLC
    ASL TMPPTR
    ROL TMPPTR+1
    CLC
    ASL TMPPTR
    ROL TMPPTR+1
    CLC
    ASL TMPPTR
    ROL TMPPTR+1

    CLC
    LDA #$0
    ADC TMPPTR
    STA TMPPTR
    LDA #$90
    ADC TMPPTR+1
    STA TMPPTR+1
TEXTATBMSP0L1:
    LDA (TMPPTR),Y
    STA (PLOTDEST),Y
    INY
    CPY #8
    BNE TEXTATBMSP0L1
    SEI
    LDA #$36
    STA $01
    LDA TEXTWW
    AND #$2
    BEQ TEXTATBMCNOPEN
    LDY #0
    LDA (PLOTCDEST),Y
    ORA TEXTPEN
    STA (PLOTCDEST),Y
TEXTATBMCNOPEN:
    LDA TEXTWW
    AND #$1
    BEQ TEXTATBMCNOPAPER
    LDA (PLOTCDEST),Y
    AND #$f0
    ORA TEXTPAPER
    STA (PLOTCDEST),Y
TEXTATBMCNOPAPER:
    LDA #$37
    STA $01
    PLA
    TAY
    JMP TEXTATBMINCX

TEXTATBMSKIPTAB:
    DEC TABSTODRAW
    JMP TEXTATBMINCX

TEXTATBMINCX:
    INC $d3
    LDA $d3
    CMP #40
    BEQ TEXTATBMNEXT2
    JMP TEXTATBMNEXT
TEXTATBMNEXT2:
    LDA #0
    STA $d3
    INC $d6
    LDA $d6
    CMP #25

    BEQ TEXTATBMNEXT3
    JMP TEXTATBMNEXT
TEXTATBMNEXT3:

    ; scrolling ?

TEXTATBMNEXT:
    LDA TABSTODRAW
    BEQ TEXTATBMXLOOP2
    JMP TEXTATBMLOOP2
TEXTATBMXLOOP2:
    INY
    DEX
    BEQ TEXTATBMEND
    JMP TEXTATBMLOOP2
TEXTATBMEND:
    CLI
    RTS

;-----------------------------------------------------------------------------
; TILE MODE
;-----------------------------------------------------------------------------

TEXTATTILEMODE:
    LDA #23
    STA 53272
    
    LDX $d6
    BEQ TEXTATSKIP
TEXTATLOOP1:
    CLC
    LDA #40
    ADC COPYOFTEXTADDRESS
    STA COPYOFTEXTADDRESS
    LDA #0
    ADC COPYOFTEXTADDRESS+1
    STA COPYOFTEXTADDRESS+1
    DEX
    BNE TEXTATLOOP1

    LDX $d6
TEXTATLOOPC1:
    CLC
    LDA #40
    ADC COPYOFCOLORMAPADDRESS
    STA COPYOFCOLORMAPADDRESS
    LDA #0
    ADC COPYOFCOLORMAPADDRESS+1
    STA COPYOFCOLORMAPADDRESS+1
    DEX
    BNE TEXTATLOOPC1

TEXTATSKIP:
    CLC
    LDA $d3
    ADC COPYOFTEXTADDRESS
    STA COPYOFTEXTADDRESS
    LDA #0
    ADC COPYOFTEXTADDRESS+1
    STA COPYOFTEXTADDRESS+1

    CLC
    LDA $d3
    ADC COPYOFCOLORMAPADDRESS
    STA COPYOFCOLORMAPADDRESS
    LDA #0
    ADC COPYOFCOLORMAPADDRESS+1
    STA COPYOFCOLORMAPADDRESS+1

    LDX TEXTSIZE
    LDY #$0
TEXTATLOOP2:

    LDA TABSTODRAW
    BEQ TEXTATNSKIPTAB
    JMP TEXTATSKIPTAB

TEXTATNSKIPTAB:
    LDA (TEXTPTR),Y

    CMP #31
    BCS TEXTATXCC
    JMP TEXTATCC

TEXTATXCC:
    JSR TEXTATDECODE
    JMP TEXTATSP0

TEXTATTAB:
    LDA $d3
TEXTATTAB2:
    CMP TABCOUNT
    BCC TEXTATTAB3
    DEC TABCOUNT
    JMP TEXTATTAB2
TEXTATTAB3:
    CLC
    ADC TABCOUNT
    STA TABSTODRAW
    JMP TEXTATNEXT

TEXTATCC:
    CMP #09
    BEQ TEXTATTAB
    CMP #01
    BEQ TEXTATPEN
    CMP #02
    BEQ TEXTATPAPER
    CMP #03
    BEQ TEXTATCMOVEPREPARE
    CMP #04
    BEQ TEXTATXAT
    JMP TEXTATNEXT

TEXTATXAT:
    JMP TEXTATAT

TEXTATPEN:
    INC TEXTPTR
    DEX
    LDA TEXTWW
    AND #$2
    BEQ TEXTATPENDISABLED
    LDA (TEXTPTR), Y
    STA TEXTPEN
TEXTATPENDISABLED:
    INC TEXTPTR
    DEY
    JMP TEXTATNEXT

TEXTATPAPER:
    INC TEXTPTR
    DEX
    LDA TEXTWW
    AND #$1
    BEQ TEXTATPAPERDISABLED
    LDA (TEXTPTR), Y
    STA $d021
    STA $d020
TEXTATPAPERDISABLED:
    INC TEXTPTR
    DEY
    JMP TEXTATNEXT

TEXTATCMOVEPREPARE:
    INC TEXTPTR
    DEX
    LDA (TEXTPTR), Y
    STA CLINEX
    INC TEXTPTR
    DEX
    LDA (TEXTPTR), Y
    STA CLINEY

TEXTATCMOVE:
    CLC
    LDA CLINEX
    ADC $d3
    CMP #$80
    BCS TEXTATCMOVESKIPX
    CMP #40
    BCS TEXTATCMOVESKIPX
    STA $d3
    LDA CLINEX

    CMP #$80
    BCC TEXTATCMOVEADDPX

TEXTATCMOVESUBPX:
    EOR #$FF
    CLC
    ADC #$1
    STA CLINEX
    SEC
    LDA COPYOFTEXTADDRESS
    SBC CLINEX
    STA COPYOFTEXTADDRESS
    LDA COPYOFTEXTADDRESS+1
    SBC #0
    STA COPYOFTEXTADDRESS+1

    SEC
    LDA COPYOFCOLORMAPADDRESS
    SBC CLINEX
    STA COPYOFCOLORMAPADDRESS
    LDA COPYOFCOLORMAPADDRESS+1
    SBC #0
    STA COPYOFCOLORMAPADDRESS+1

    JMP TEXTATCMOVESKIPX

TEXTATCMOVEADDPX:

    CLC
    ADC COPYOFTEXTADDRESS
    STA COPYOFTEXTADDRESS
    LDA #0
    ADC COPYOFTEXTADDRESS+1
    STA COPYOFTEXTADDRESS+1
    JMP TEXTATCMOVESKIPX

TEXTATCMOVESKIPX:

    CLC
    LDA CLINEY
    ADC $d6
    CMP #$80
    BCS TEXTATCMOVESKIPY
    CMP #26
    BCS TEXTATCMOVESKIPY
    STA $d6

TEXTATCMOVEADDPY:
    TXA
    PHA
    LDA CLINEY
    CMP #$80
    BCC TEXTATCMOVELOOPYP
    JMP TEXTATCMOVELOOPYM

TEXTATCMOVELOOPYP:
    TAX
TEXTATCMOVELOOPY:

    CLC
    LDA #40
    ADC COPYOFTEXTADDRESS
    STA COPYOFTEXTADDRESS
    LDA #0
    ADC COPYOFTEXTADDRESS+1
    STA COPYOFTEXTADDRESS+1

    CLC
    LDA #40
    ADC COPYOFCOLORMAPADDRESS
    STA COPYOFCOLORMAPADDRESS
    LDA #0
    ADC COPYOFCOLORMAPADDRESS+1
    STA COPYOFCOLORMAPADDRESS+1

    DEX
    BNE TEXTATCMOVELOOPY
    PLA
    TAX
    JMP TEXTATCMOVESKIPY

TEXTATCMOVELOOPYM:
    EOR #$FF
    CLC
    ADC #$1
    STA CLINEY
    TAX
TEXTATCMOVELOOPY2:

    SEC
    LDA COPYOFTEXTADDRESS
    SBC #40
    STA COPYOFTEXTADDRESS
    LDA COPYOFTEXTADDRESS+1
    SBC #0
    STA COPYOFTEXTADDRESS+1

    SEC
    LDA COPYOFCOLORMAPADDRESS
    SBC #40
    STA COPYOFCOLORMAPADDRESS
    LDA COPYOFCOLORMAPADDRESS+1
    SBC #0
    STA COPYOFCOLORMAPADDRESS+1

    DEX
    BNE TEXTATCMOVELOOPY2
    PLA
    TAX
    JMP TEXTATCMOVESKIPY

TEXTATCMOVESKIPY:
    INC TEXTPTR
    DEY
    JMP TEXTATNEXT

TEXTATAT:
    INC TEXTPTR
    DEX
    LDA (TEXTPTR), Y
    SEC
    SBC $d3
    STA CLINEX
    INC TEXTPTR
    DEX
    LDA (TEXTPTR), Y
    SEC
    SBC $d6
    STA CLINEY
    JMP TEXTATCMOVE

TEXTATSP0:
    STA (COPYOFTEXTADDRESS),Y
    LDA TEXTWW
    AND #$2
    BEQ TEXTATCNOPEN
    LDA TEXTPEN
    STA (COPYOFCOLORMAPADDRESS),Y
TEXTATCNOPEN:
    JMP TEXTATINCX

TEXTATSKIPTAB:
    DEC TABSTODRAW
    JMP TEXTATINCX

TEXTATINCX:
    INC $d3
    LDA $d3
    CMP #40
    BEQ TEXTATNEXT2
    JMP TEXTATNEXT
TEXTATNEXT2:
    LDA #0
    STA $d3
    INC $d6
    LDA $d6
    CMP #25

    BEQ TEXTATNEXT3
    JMP TEXTATNEXT
TEXTATNEXT3:

    LDA #$FE
    STA DIRECTION
    JSR VSCROLLT

    DEC $d6
    SEC
    LDA COPYOFTEXTADDRESS
    SBC #40
    STA COPYOFTEXTADDRESS
    LDA COPYOFTEXTADDRESS+1
    SBC #0
    STA COPYOFTEXTADDRESS+1

    SEC
    LDA COPYOFCOLORMAPADDRESS
    SBC #40
    STA COPYOFCOLORMAPADDRESS
    LDA COPYOFCOLORMAPADDRESS+1
    SBC #0
    STA COPYOFCOLORMAPADDRESS+1

TEXTATNEXT:
    LDA TABSTODRAW
    BEQ TEXTATXLOOP2
    JMP TEXTATLOOP2
TEXTATXLOOP2:
    INY
    DEX
    BEQ TEXTATEND
    JMP TEXTATLOOP2
TEXTATEND:
    CLI
    RTS
