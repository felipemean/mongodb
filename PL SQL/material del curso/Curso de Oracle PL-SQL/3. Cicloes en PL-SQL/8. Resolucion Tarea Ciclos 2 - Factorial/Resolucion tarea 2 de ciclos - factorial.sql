set serveroutput on;

declare

    numero number := 4; -- 4x3x2x1
    factorial number;

begin
    
    factorial := numero;

    << while_factorial >>
    WHILE numero > 1 LOOP 
        
        numero := numero - 1;
        factorial := factorial * numero;
      
    END LOOP while_factorial;

    dbms_output.put_line( factorial );


end;
/