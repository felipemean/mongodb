set serveroutput on;

DECLARE
   --Declarar numero ramdon Obtener un valor aleatorio rango entre 0 y 5 
   ran number := round(dbms_random.value(0,5));
BEGIN
  dbms_output.put_line(ran);
  case 
    when ran = 0 then
       dbms_output.put_line('Cero');
    when ran = 1 then
       dbms_output.put_line('uno');
    when ran = 2 then
       dbms_output.put_line('dos');
    when ran = 3 then
       dbms_output.put_line('tres');
    when ran = 4 then
       dbms_output.put_line('Cuatro');
    else
     dbms_output.put_line('Cinco');
   end case;    
END;
/