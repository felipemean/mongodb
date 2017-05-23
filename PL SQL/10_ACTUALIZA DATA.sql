CREATE OR REPLACE PROCEDURE actualiza_fecha_empleados
AS
BEGIN
update empleados set actualizado = sysdate;
  dbms_output.put_line('ejecuto el procedimiento');
   DBMS_OUTPUT.PUT_LINE( 'FIN');
end;
/