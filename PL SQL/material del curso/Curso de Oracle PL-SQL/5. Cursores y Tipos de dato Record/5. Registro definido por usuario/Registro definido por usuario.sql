set serveroutput on;

DECLARE
  
    type carro is record(
          marca nvarchar2(100),
          modelo nvarchar2(100),
          puertas number
    );
    
    mazda carro;
    toyota carro;

BEGIN

    mazda.marca := 'Mazda';
    mazda.modelo := 'Mazda 3';
    mazda.puertas := 4;

    toyota.marca := 'Toyota';
    toyota.modelo := 'Prado';
    toyota.puertas := 5;
    
    dbms_output.put_line( mazda.puertas );
  
END;
/