CREATE OR REPLACE PROCEDURE menor_entre( x in number, y in number, z out number) 
IS
BEGIN
    
    IF( X > Y ) THEN
        z := y;
    ELSE
        z := x;
    END IF;
  
END;
/