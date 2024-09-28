REM @english
REM USER-DEFINED PROCEDURES USING GLOBAL VARIABLES
REM
REM This example will show how the global variables works. First of all, we
REM will define 2 global variables (''a'' AND ''b'') by using the ''GLOBAL'' keyword. 
REM Then, we assign a value outside each procedures. Then the two procedures
REM are defined and called. The result is that the original value have been
REM changed by each procedure execution, since those variables are global.
REM
REM @italian
REM USARE LE PROCEDURE CON VARIABILI GLOBALI (1)
REM
REM Questo esempio mostrerà come funzionano le variabili globali. Prima di tutto, 
REM definiremo 2 variabili globali (''a'' e ''b'') utilizzando la parola chiave '
REM 'GLOBAL''. Quindi, assegniamo un valore al di fuori di ciascuna procedura. 
REM Quindi le due procedure vengono definite e chiamate. Il risultato è che 
REM il valore originale è stato modificato ad ogni esecuzione della procedura, 
REM poiché tali variabili sono globali. 
REM
REM @include atari,atarixl,c128,c64,coco,coco3,d32,d64,coleco,sg1000,sc3000,pc128op,to8,cpc

   CLS

   GLOBAL harry, sally
   
   harry = 6
   sally = 9
   
   PROCEDURE testProcedure1
      harry = harry + 1
      sally = sally + 1
   END PROC
   
   PROCEDURE testProcedure2
      harry = harry + sally
      sally = sally + harry
   END PROC

   testProcedure1[]
   testProcedure2[]
   
   PRINT "harry = ";harry; " (should be 17)"
   PRINT "sally = ";sally; " (should be 27)"
