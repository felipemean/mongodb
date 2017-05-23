set serveroutput on;

declare

    type notasArray is varray(4) of number;
    notas notasArray := notasArray(95,60,75,85);

    promedio number(6,2) := 0;

begin
    
    FOR i in 1..4 LOOP
        
        promedio := promedio + notas(i);    
    
    END LOOP;

    promedio := promedio / 4; 

    dbms_output.put_line( promedio );


end;
/