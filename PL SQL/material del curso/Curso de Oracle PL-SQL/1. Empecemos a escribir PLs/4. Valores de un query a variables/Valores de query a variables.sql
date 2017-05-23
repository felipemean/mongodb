set serveroutput on;

DECLARE
  cantidad number;
  usuario nvarchar2(100);

BEGIN
  
  /*
   select user  into usuario from dual;
   
   dbms_output.put_line('Usuario: '|| usuario );

    select count(*) into cantidad from dual;
    
    dbms_output.put_line('Cantidad: '|| cantidad );  
  */
  
  select user, count(*) into usuario, cantidad  from dual;
  
  dbms_output.put_line('Usuario: '|| usuario );
  dbms_output.put_line('Cantidad: '|| cantidad );  


END;
/