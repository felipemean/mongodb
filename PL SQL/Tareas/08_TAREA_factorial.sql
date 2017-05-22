set serveroutput on;
DECLARE
 numero number := 5 ; --5*4*3*2*1
 factorial number :=1;
 
BEGIN
  while numero>1 loop
   factorial:= factorial * numero ;
   numero := numero - 1 ;
   end loop;
 
dbms_output.put_line(factorial); --imprime el resultado del factorial

END;
/
