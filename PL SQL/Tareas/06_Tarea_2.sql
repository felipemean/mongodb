set serveroutput on;

DECLARE
   salario number := 2365;
   aumento number ;
   nuevoSalario number;
   
BEGIN
  if (salario <= 600) THEN
    aumento := salario * 0.15 ;
  elsif (salario between 601 and 950) THEN
    aumento := salario * 0.15 ; 
  elsif (salario < 1400 ) THEN
    aumento := salario * 0.15 ; 
  else
   aumento := salario * 0.05 ; 
  end if;
  
  nuevoSalario := salario + aumento;
  dbms_output.put_line('El nuevo salario es :' ||  nuevoSalario);
     
END;
/