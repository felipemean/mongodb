set serveroutput on;

DECLARE
    
    cuantas number := 5;
    montoUnitario number := 19.99;
    
    subTotal number;
    impuesto number;
    totalPagar number;
  
BEGIN

    -- Calcular Sub Total
    subTotal := montoUnitario * cuantas;
    
    -- Calcular impuesto
    impuesto := subTotal * 0.15;
    
    -- Calcular total a Pagar
    totalPagar := subTotal + impuesto;
    
    -- Hacer las impresiones de los valores
    dbms_output.put_line('Lleva: ' || cuantas || ' camisetas.' );
    dbms_output.put_line('Costo unitario: $' || montoUnitario  );
    dbms_output.put_line('============================='  );

    dbms_output.put_line('Sub Total: ' || subTotal  );
    dbms_output.put_line('Impuesto 15%: ' || impuesto  );
    dbms_output.put_line('Total a pagar: ' || totalPagar  );
    
END;
/