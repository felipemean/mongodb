set serveroutput on;
--===================================--    
--Obtener promedio
DECLARE
  salarioPromedio number := 0;
  
  function obtener_promedio
  return number
  is
    promedio number := 0;
  BEGIN
  select avg(salario) into promedio from empleados;
  return promedio;
  END;
  --==============FIN de la funcion promedio=====================--    
BEGIN  -- FUNCION PL PRINCIPAL
  salarioPromedio := obtener_promedio();
  dbms_output.put_line('El salario es : ' || salarioPromedio);
END;
/