create or replace procedure actualizaData
as
begin
  update empleados set actualizado = sysdate;
  dbms_output.put_line('Hola Felipe' );
end;
/