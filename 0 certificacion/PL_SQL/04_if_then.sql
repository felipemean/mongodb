set serveroutput on;

DECLARE
   nota NUMBER:=66;
BEGIN
  --if (nota = 69 or nota  = 68) then
  -- if ( nota between 65 and 69) then
  if (nota >= 70) then
   dbms_output.put_line( 'Paso el Examen');
  else
  dbms_output.put_line( ' No Paso el Examen');
  end if;
END;
/