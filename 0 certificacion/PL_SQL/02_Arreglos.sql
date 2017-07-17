set serveroutput on;

DECLARE
--Definimos los arreglos
type alumnosArray is varray(5) of nvarchar2(100);
type notasArray is varray(5) of number;

--Utilizar arreglos
 alumnos alumnosArray;
 notas notasArray;
BEGIN
alumnos := alumnosArray('Felipe', 'John', 'La Trini' , 'Javier', 'Cancelo');
notas := notasArray(90,60,78,98,66);


  DBMS_OUTPUT.PUT_LINE( alumnos(1));
   DBMS_OUTPUT.PUT_LINE( alumnos(2));
    DBMS_OUTPUT.PUT_LINE( alumnos(3));
    
    DBMS_OUTPUT.PUT_LINE( notas(1));
    DBMS_OUTPUT.PUT_LINE( notas(2));
    DBMS_OUTPUT.PUT_LINE( notas(3));
    
    notas(1) := 95;
        DBMS_OUTPUT.PUT_LINE( notas(1));

END;
/