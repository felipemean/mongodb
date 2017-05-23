set serveroutput on;

DECLARE

BEGIN
  
    << ciclo_tabla_2 >>
    FOR i in 1..20 LOOP
        
        if (  MOD(  i, 2 ) = 0    ) then
          continue;
        end if;
        
        
        --dbms_output.put_line( i || ' * 2 = ' || ( i * 2 )    );  -- 1 * 2 = 2
      dbms_output.put( i );
      dbms_output.put( ' * 2 = ' );
      dbms_output.put_line( i * 2   );
    
    END LOOP ciclo_tabla_2;
  
  
END;
/