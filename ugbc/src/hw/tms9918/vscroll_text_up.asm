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
;*                          VERTICAL SCROLL ON MSX1                            *
;*                                                                             *
;*                             by Marco Spedaletti                             *
;*                                                                             *
;* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

; 			        NAME		COLOR		PATTERN
; VDPUPDATE0: 		$0000		
; VDPUPDATE1:		$0000		$0480		$0800
; VDPUPDATE2:		$3800		$2000
; VDPUPDATE3:		$3800		$2000		$0000

VSCROLLTUP:
    LD A, (CURRENTMODE)
    CP 0
    JR Z,VSCROLLTUP0
    CP 1
    JR Z,VSCROLLTUP1
    RET

VSCROLLTUP0:
    LD BC, 40 * 23
    LD A, 40
    LD E, A
    LD D, 0
    LD HL, $0000
    ADD HL, BC
    PUSH HL
    JP VSCROLLTUPCOMMON

VSCROLLTUP1:
    LD BC, 32 * 23
    LD A, 32
    LD E, A
    LD D, 0
    LD HL, $0000
    ADD HL, BC
    PUSH HL
    JP VSCROLLTUPCOMMON

VSCROLLTUPCOMMON:
    LD HL, $0000
    PUSH HL
    ADD HL, DE
    POP DE
    INC B
    
VSCROLLTUPLOOP:

    PUSH DE
    PUSH BC
    LD DE, HL
    LD BC, 1
    CALL VDPINCHAR
    POP BC
    POP DE

    PUSH BC
    LD BC, 1
    CALL VDPOUTCHAR
    POP BC

    INC     DE
    INC     HL

    DEC     C
    JP      NZ, VSCROLLTUPLOOP
    DJNZ    VSCROLLTUPLOOP

    LD A, (CURRENTMODE)
    CP 0
    JR Z,VSCROLLTUPX0
    CP 1
    JR Z,VSCROLLTUPX1
    RET

VSCROLLTUPX0:
    LD A, (EMPTYTILE)
    LD BC, 40
    POP DE
    CALL VDPFILL
    RET

VSCROLLTUPX1:
    LD A, (EMPTYTILE)
    LD BC, 32
    POP DE
    CALL VDPFILL
    RET
