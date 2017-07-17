set serveroutput on;

DECLARE
nombre nvarchar2(100):='Felipe';

BEGIN
 dbms_output.put_line('Largo:  ' || lenght(nombre));


END;
/