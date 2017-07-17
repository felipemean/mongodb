set serveroutput on;

DECLARE
    
    A number := 5;
    B number := 10;
    
    nombre1 nvarchar2(100) := 'Fernando';
    nombre2 nvarchar2(100);
    
BEGIN
  
    /*
    IF ( A <> B ) THEN
      dbms_output.put_line( 'A es diferente de B');
    END IF;
  */
  
  /*
    IF ( nombre1 like '%do' ) THEN
        dbms_output.put_line('El nombre termina do ');
    END IF;
  */
  
  /*
  IF (  A between 5 and 10 ) THEN
      dbms_output.put_line('A, esta entre 0 y 10 ');
  END IF;
  */
  
  /*
  IF ( B in (5,15,20) ) THEN 
    dbms_output.put_line('B esta en el grupo de elementos.');
  END IF;
  */
  
  IF ( nombre1 is null ) THEN
    dbms_output.put_line('El nombre2 es nulo');
  END IF;
  
END;
/