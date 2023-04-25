; /*****************************************************************************
;  * ugBASIC - an isomorphic BASIC language compiler for retrocomputers        *
;  *****************************************************************************
;  * Copyright 2021-2023 Marco Spedaletti (asimov@mclink.it)
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
;*                      INTERNAL VARIABLES FOR TED HARDWARE                    *
;*                                                                             *
;*                             by Marco Spedaletti                             *
;*                                                                             *
;* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
PLOTDEST = $28 ; $29
PLOTCDEST= $26 ; $27
PLOTLDEST= $30 ; $31
PLOTC2DEST= $32 ; $33

XGR:    .word 0
YGR:    .word 0
LINE:   .byte $ff, $ff

LASTCOLOR: .byte 0
CURRENTSL:          .byte 0

IMAGEX = $17
IMAGEY = $19
IMAGEW = $21
IMAGEH = $23
IMAGEH2 = $24
IMAGET = $25
IMAGEF = $16

BLITTMPPTR = $FE ; $FF
BLITTMPPTR2 = $FC ; $FD
BLITS0 = $FA ; $FB
BLITS1 = $F8 ; $F9
BLITS2 = $F6 ; $F7
BLITR0 = $F4 ; $F5
BLITR1 = $F2 ; $F3
BLITR2 = $F0 ; $F1
BLITR3 = $EE ; $EF

PLOTVBASELO:
    .byte <($6000+(0*320)),<($6000+(1*320)),<($6000+(2*320)),<($6000+(3*320))
    .byte <($6000+(4*320)),<($6000+(5*320)),<($6000+(6*320)),<($6000+(7*320))
    .byte <($6000+(8*320)),<($6000+(9*320)),<($6000+(10*320)),<($6000+(11*320))
    .byte <($6000+(12*320)),<($6000+(13*320)),<($6000+(14*320)),<($6000+(15*320))
    .byte <($6000+(16*320)),<($6000+(17*320)),<($6000+(18*320)),<($6000+(19*320))
    .byte <($6000+(20*320)),<($6000+(21*320)),<($6000+(22*320)),<($6000+(23*320))
    .byte <($6000+(24*320))

PLOTVBASEHI:
    .byte >($6000+(0*320)),>($6000+(1*320)),>($6000+(2*320)),>($6000+(3*320))
    .byte >($6000+(4*320)),>($6000+(5*320)),>($6000+(6*320)),>($6000+(7*320))
    .byte >($6000+(8*320)),>($6000+(9*320)),>($6000+(10*320)),>($6000+(11*320))
    .byte >($6000+(12*320)),>($6000+(13*320)),>($6000+(14*320)),>($6000+(15*320))
    .byte >($6000+(16*320)),>($6000+(17*320)),>($6000+(18*320)),>($6000+(19*320))
    .byte >($6000+(20*320)),>($6000+(21*320)),>($6000+(22*320)),>($6000+(23*320))
    .byte >($6000+(24*320))

PLOT8LO:
    .byte <(0*8),<(1*8),<(2*8),<(3*8),<(4*8),<(5*8),<(6*8),<(7*8),<(8*8),<(9*8)
    .byte <(10*8),<(11*8),<(12*8),<(13*8),<(14*8),<(15*8),<(16*8),<(17*8),<(18*8),<(19*8)
    .byte <(20*8),<(21*8),<(22*8),<(23*8),<(24*8),<(25*8),<(26*8),<(27*8),<(28*8),<(29*8)
    .byte <(30*8),<(31*8),<(32*8),<(33*8),<(34*8),<(35*8),<(36*8),<(37*8),<(38*8),<(39*8)

PLOT8HI:
    .byte >(0*8),>(1*8),>(2*8),>(3*8),>(4*8),>(5*8),>(6*8),>(7*8),>(8*8),>(9*8)
    .byte >(10*8),>(11*8),>(12*8),>(13*8),>(14*8),>(15*8),>(16*8),>(17*8),>(18*8),>(19*8)
    .byte >(20*8),>(21*8),>(22*8),>(23*8),>(24*8),>(25*8),>(26*8),>(27*8),>(28*8),>(29*8)
    .byte >(30*8),>(31*8),>(32*8),>(33*8),>(34*8),>(35*8),>(36*8),>(37*8),>(38*8),>(39*8)

PLOTCVBASELO:
    .byte <($0C00+(0*40)),<($0C00+(1*40)),<($0C00+(2*40)),<($0C00+(3*40))
    .byte <($0C00+(4*40)),<($0C00+(5*40)),<($0C00+(6*40)),<($0C00+(7*40))
    .byte <($0C00+(8*40)),<($0C00+(9*40)),<($0C00+(10*40)),<($0C00+(11*40))
    .byte <($0C00+(12*40)),<($0C00+(13*40)),<($0C00+(14*40)),<($0C00+(15*40))
    .byte <($0C00+(16*40)),<($0C00+(17*40)),<($0C00+(18*40)),<($0C00+(19*40))
    .byte <($0C00+(20*40)),<($0C00+(21*40)),<($0C00+(22*40)),<($0C00+(23*40))
    .byte <($0C00+(24*40))

PLOTCVBASEHI:
    .byte >($0C00+(0*40)),>($0C00+(1*40)),>($0C00+(2*40)),>($0C00+(3*40))
    .byte >($0C00+(4*40)),>($0C00+(5*40)),>($0C00+(6*40)),>($0C00+(7*40))
    .byte >($0C00+(8*40)),>($0C00+(9*40)),>($0C00+(10*40)),>($0C00+(11*40))
    .byte >($0C00+(12*40)),>($0C00+(13*40)),>($0C00+(14*40)),>($0C00+(15*40))
    .byte >($0C00+(16*40)),>($0C00+(17*40)),>($0C00+(18*40)),>($0C00+(19*40))
    .byte >($0C00+(20*40)),>($0C00+(21*40)),>($0C00+(22*40)),>($0C00+(23*40))
    .byte >($0C00+(24*40))


PLOTC2VBASELO:
    .byte <($0800+(0*40)),<($0800+(1*40)),<($0800+(2*40)),<($0800+(3*40))
    .byte <($0800+(4*40)),<($0800+(5*40)),<($0800+(6*40)),<($0800+(7*40))
    .byte <($0800+(8*40)),<($0800+(9*40)),<($0800+(10*40)),<($0800+(11*40))
    .byte <($0800+(12*40)),<($0800+(13*40)),<($0800+(14*40)),<($0800+(15*40))
    .byte <($0800+(16*40)),<($0800+(17*40)),<($0800+(18*40)),<($0800+(19*40))
    .byte <($0800+(20*40)),<($0800+(21*40)),<($0800+(22*40)),<($0800+(23*40))
    .byte <($0800+(24*40))

PLOTC2VBASEHI:
    .byte >($0800+(0*40)),>($0800+(1*40)),>($0800+(2*40)),>($0800+(3*40))
    .byte >($0800+(4*40)),>($0800+(5*40)),>($0800+(6*40)),>($0800+(7*40))
    .byte >($0800+(8*40)),>($0800+(9*40)),>($0800+(10*40)),>($0800+(11*40))
    .byte >($0800+(12*40)),>($0800+(13*40)),>($0800+(14*40)),>($0800+(15*40))
    .byte >($0800+(16*40)),>($0800+(17*40)),>($0800+(18*40)),>($0800+(19*40))
    .byte >($0800+(20*40)),>($0800+(21*40)),>($0800+(22*40)),>($0800+(23*40))
    .byte >($0800+(24*40))

; ------------------------------------------------------------------------------
; MULTICOLOR MODE (MODE #3)
; ------------------------------------------------------------------------------

PLOT4LO:
    .byte <(0*4),<(1*4),<(2*4),<(3*4),<(4*4),<(5*4),<(6*4),<(7*4),<(8*4),<(9*4)
    .byte <(10*4),<(11*4),<(12*4),<(13*4),<(14*4),<(15*4),<(16*4),<(17*4),<(18*4),<(19*4)
    .byte <(20*4),<(21*4),<(22*4),<(23*4),<(24*4),<(25*4),<(26*4),<(27*4),<(28*4),<(29*4)
    .byte <(30*4),<(31*4),<(32*4),<(33*4),<(34*4),<(35*4),<(36*4),<(37*4),<(38*4),<(39*4)
    .byte <(40*4),<(41*4),<(42*4),<(43*4),<(44*4),<(45*4),<(46*4),<(47*4),<(48*4),<(49*4)
    .byte <(50*4),<(51*4),<(52*4),<(53*4),<(54*4),<(55*4),<(56*4),<(57*4),<(58*4),<(59*4)
    .byte <(60*4),<(61*4),<(62*4),<(63*4),<(64*4),<(65*4),<(66*4),<(67*4),<(68*4),<(69*4)
    .byte <(70*4),<(71*4),<(72*4),<(73*4),<(74*4),<(75*4),<(76*4),<(77*4),<(78*4),<(79*4)

PLOT4HI:
    .byte >(0*4),>(1*4),>(2*4),>(3*4),>(4*4),>(5*4),>(6*4),>(7*4),>(8*4),>(9*4)
    .byte >(10*4),>(11*4),>(12*4),>(13*4),>(14*4),>(15*4),>(16*4),>(17*4),>(18*4),>(19*4)
    .byte >(20*4),>(21*4),>(22*4),>(23*4),>(24*4),>(25*4),>(26*4),>(27*4),>(28*4),>(29*4)
    .byte >(30*4),>(31*4),>(32*4),>(33*4),>(34*4),>(35*4),>(36*4),>(37*4),>(38*4),>(39*4)
    .byte >(40*4),>(41*4),>(42*4),>(43*4),>(44*4),>(45*4),>(46*4),>(47*4),>(48*4),>(49*4)
    .byte >(50*4),>(51*4),>(52*4),>(53*4),>(54*4),>(55*4),>(56*4),>(57*4),>(58*4),>(59*4)
    .byte >(60*4),>(61*4),>(62*4),>(63*4),>(64*4),>(65*4),>(66*4),>(67*4),>(68*4),>(69*4)
    .byte >(70*4),>(71*4),>(72*4),>(73*4),>(74*4),>(75*4),>(76*4),>(77*4),>(78*4),>(79*4)

