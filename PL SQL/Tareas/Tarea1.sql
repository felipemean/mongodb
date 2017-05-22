set serveroutput on;

DECLARE
   nota NUMBER:=66;

BEGIN

  --if (nota = 69 or nota  = 68) then
  if (nota  between 65 and 69) then
  nota := 70;
  end if;
  dbms_output.put_line( ' Nota :' || nota);
  
END;
/