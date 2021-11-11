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

CPUMATHMUL16BITTO32BIT
    LDA   <MATHPTR0
    LDB   <MATHPTR2
    MUL            
    STD   <MATHPTR4

    LDA   <MATHPTR1
    LDB   <MATHPTR3
    MUL
    STD   <MATHPTR6

    LDD   <MATHPTR1
    MUL
    PSHS D
    
    LDA   <MATHPTR0
    LDB   <MATHPTR3
    MUL
    ADDD  ,S++
    ADDD  <MATHPTR5
    STD   <MATHPTR5
    BCC   CPUMATHMUL16BITTO32BIT1
    INC   <MATHPTR4
CPUMATHMUL16BITTO32BIT1
    RTS

CPUMATHMUL16BITTO32BIT_SIGNED
    LDA   <MATHPTR0
    EORA  <MATHPTR2
    STA   <TMPPTR 
    LDD   <MATHPTR0
    BPL   CPUMATHMUL16BITTO32BIT_SIGNED1
    NEGA
    NEGB
    SBCA  #0
    STD   <MATHPTR0
CPUMATHMUL16BITTO32BIT_SIGNED1
    LDD   <MATHPTR2
    BPL   CPUMATHMUL16BITTO32BIT_SIGNED2
    NEGA
    NEGB
    SBCA  #0
    STD   <MATHPTR2
CPUMATHMUL16BITTO32BIT_SIGNED2
    BSR   CPUMATHMUL16BITTO32BIT
    LDA   <TMPPTR
    BPL   CPUMATHMUL16BITTO32BIT_SIGNED3
    NEG   <MATHPTR4
    NEG   <MATHPTR5
    NEG   <MATHPTR6
    NEG   <MATHPTR7
    INC   <MATHPTR7
    BNE   CPUMATHMUL16BITTO32BIT_SIGNED3
    INC   <MATHPTR6
    BNE   CPUMATHMUL16BITTO32BIT_SIGNED3
    INC   <MATHPTR5
    BNE   CPUMATHMUL16BITTO32BIT_SIGNED3
    INC   <MATHPTR4
CPUMATHMUL16BITTO32BIT_SIGNED3
    RTS
