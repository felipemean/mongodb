set serveroutput on;

DECLARE
    
    nota number := 67;

BEGIN

  IF ( nota between 67 and 69 ) THEN
  
      nota := 70;
  
  END IF;

  dbms_output.put_line('Nota: ' || nota );
  
  IF ( nota >= 70 ) THEN
    dbms_output.put_line('Paso la clase');
  ELSE
    dbms_output.put_line('Lo siento... reprobo la clase. ');
  END IF;
  
  
  

END;
/