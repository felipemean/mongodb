set serveroutput on;

DECLARE
nombre nvarchar2(100):='   Felipe';
apellidos nvarchar2(100):='Gil Gonzalez';
nombreCompleto nvarchar2(200);
hoy date:= sysdate;
nombre2 nvarchar2(199);
BEGIN

 dbms_output.put_line('Largo:  ' || length(nombre));
 dbms_output.put_line('Trim: Quita espacios  ' || trim(nombre) || ';');
dbms_output.put_line('Minuscular:  ' || lower(nombre));
dbms_output.put_line('Mayusculas:  ' || upper(nombre));
dbms_output.put_line('******************************************************');
nombre:=trim(nombre);
nombreCompleto := nombre || ' ' || apellidos;
dbms_output.put_line('Mayusculas:  ' || upper(nombre));
dbms_output.put_line('Cortar:  ' || substr(nombre,8,3));
dbms_output.put_line('REemplazo:  ' || replace(nombre,'e','*'));
dbms_output.put_line('******************************************************');
dbms_output.put_line('Funcion de fecha');
dbms_output.put_line('Hoy es:  ' || hoy);
dbms_output.put_line('Agregar 1 mes:  ' || add_months(hoy,1));
dbms_output.put_line('Agregar 1 día:  ' || (hoy+1));
hoy := hoy + 1 ;
dbms_output.put_line('nombre Completo: ' || nombreCompleto );
dbms_output.put_line('Día: ' || to_char(hoy,'dd')); 
dbms_output.put_line('Mes: ' || to_char(hoy,'MM')); 
dbms_output.put_line('Año: ' || to_char(hoy,'yy')); 

dbms_output.put_line('NVL: ' || NVL(nombre2,'Es nulo'));


END;
/