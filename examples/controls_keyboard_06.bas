    DO
        IF KEY STATE(KEY F1) == TRUE THEN : PRINT "F1!" : ENDIF
        IF KEY STATE(KEY RUNSTOP) == TRUE THEN : PRINT "RUN STOP!" : ENDIF
    LOOP