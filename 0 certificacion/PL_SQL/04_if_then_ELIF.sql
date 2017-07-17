set serveroutput on;

DECLARE
   nota NUMBER:=45;

BEGIN
  if (nota >= 90) then
    dbms_output.put_line( 'EXCELENTE');
  ELSIF (nota >= 80) then
  dbms_output.put_line( ' Muy bien');
  else
  dbms_output.put_line( ' Necesita mejorar');
  end if;
END;
/