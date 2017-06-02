set serveroutput on;

DECLARE
   A number := 7;
    B number := 10;
    
  nombre1 nvarchar2(100):= 'Fernando';
    nombre2 nvarchar2(100);
BEGIN
-- Comienzo operador logico if , elsif , end if;
  if (A=B) THEN
  dbms_output.put_line('A es igual que B');
  elsif (A<B) then
  dbms_output.put_line('A es menor que B');
    else
    dbms_output.put_line('A es mayor que B'); 
  END IF;
  
  -- Comienzo operador logico if , elsif , end if;  CON like
  if (nombre1 like 'Fer%' ) then 
    dbms_output.put_line('El nombre contiene  "Fer"');
  end if;
  
  if (nombre1 like '%nan%' ) then 
    dbms_output.put_line('El nombre contiene  la cadena de caracteres "nam"  ');
  end if;
  if (nombre1 like '%do' ) then 
    dbms_output.put_line('El nombre termina en do');
  end if;
  if ( A between 0 and 10) then
    dbms_output.put_line('A está entre 0 y 10');
  end if;
  if (B in (5,10,15, 20)) THEN
    dbms_output.put_line('B esta contenido en alguno de los elementos');
  end if;
  
  IF( nombre2 is null) then
    dbms_output.put_line('El nombre2 es nulo');
  end if;
  
END;
/