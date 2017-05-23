set serveroutput on;
DECLARE
 numero number := 3 ; --5*4*3*2*1
 factorial number ;
 
BEGIN
factorial := numero;
  while numero>1 loop
    numero := numero - 1 ;
    factorial:= factorial * numero ;
 
   end loop;
 
dbms_output.put_line(factorial); --imprime el resultado del factorial

END;
/
