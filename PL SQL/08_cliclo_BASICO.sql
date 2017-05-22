set serveroutput on;
DECLARE
 x number :=10;
BEGIN
-- cliclo a ejecutar n veces
loop
 dbms_output.put_line(x);
  x:=x+10;
  
  if (x>120) then
  exit ;
  end if;
end loop; 

END;
/