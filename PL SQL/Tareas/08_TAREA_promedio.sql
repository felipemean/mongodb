set serveroutput on;

DECLARE
type notasArray is varray(4) of number;
notas notasArray := notasArray(1000.99, 250,950,0.6);
promedio number(8,4) := 0;
BEGIN
FOR i in 1..4 LOOP
  promedio := promedio + notas(i);
END LOOP;
promedio := promedio / 4;
dbms_output.put_line(promedio);
END;
/
