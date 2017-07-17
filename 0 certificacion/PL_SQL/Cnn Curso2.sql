set serveroutput on;

DECLARE
-- Definicion de funciones y variable
 --Area de un circulo 2PIr
 --Constantes
 PI CONSTANT number := 3.141559;
 --Variables
  radio number;
  area number;

BEGIN

radio := 7;
  area := PI *( radio * radio);
 
 dbms_output.put_line('Areas:  ' || round(area)  || 'cm2');
 dbms_output.put_line('Areas:  ' || round(area,2)  || 'cm2');
 dbms_output.put_line('Areas:  ' || round(area,4)  || 'cm2');
END;
/