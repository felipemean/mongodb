set serveroutput on;

DECLARE


BEGIN

    update empleados set actualizado = sysdate where id >500;
    
    
    dbms_output.put_line( 'Afectados: ' ||    sql%rowcount );

    IF( sql%found ) THEN
        dbms_output.put_line ( 'Encontro registros' ) ;
    ELSE
        dbms_output.put_line ( 'No encontro registros' ) ;
    END IF;

    
    
    
    commit;
  
END;
/