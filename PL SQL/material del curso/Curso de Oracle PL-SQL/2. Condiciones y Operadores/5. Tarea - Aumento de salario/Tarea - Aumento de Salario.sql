set serveroutput on;

DECLARE
  
  salarioBase number := 900;
  aumento number;
  baseConAumento number;


BEGIN

    if(  salarioBase between 0 and 600 ) then
          aumento := salarioBase * 0.15;
          
    elsif ( salarioBase <= 950 ) then
          aumento := salarioBase * 0.135;
    
    elsif ( salarioBase <= 1400 ) then
        aumento := salarioBase * 0.10;
    
    else
        aumento := salarioBase * 0.05;
        
    end if;
    
    baseConAumento := salarioBase + aumento;
    
    
    dbms_output.put_line( 'Salario base: ' || salarioBase );
    dbms_output.put_line( 'Aumento:      ' || aumento );
    dbms_output.put_line( 'Nuevo Salario: ' || baseConAumento );
  


END;
/