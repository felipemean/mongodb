set serveroutput on;
DECLARE

BEGIN
--rotulen los ciclos for:
<<ciclo_tabla_2>>
for i in 1..20 loop

 --Ignorar impares  con modulos MOD(m,n)   resultado de dividir m entre n
 -- DBMS_OUTPUT.PUT_line('MOD(i,2) igual a: ' || MOD(i,2));
 -- if (MOD(i,2)<>0 ) then
  if (MOD(i,2)<>0 ) then
  DBMS_OUTPUT.PUT_line('MOD(' || i ||' ,2)=0 resto ' || MOD(i,2)|| ' y se lo salta por el continue');
  continue;
  
  end if;

  --Salir del ciclo    exit,  en el ciclo 16 sale del loop
  if (i = 16 ) then
  exit;
  end if;
  -- Saltar un ciclo  continue, salta el 6 y continua con el 7
  if (i = 6 ) then
  continue;
  end if;
 
  DBMS_OUTPUT.PUT_line('************MOD(' || i ||' ,2)=0 resto ' || MOD(i,2)|| ' y calcula i * 2 ');
  --dbms_output.put_line( i|| ' * 2 = ' || (i*2) );-- i*2 =2
  DBMS_OUTPUT.PUT(i);
  DBMS_OUTPUT.PUT(' * 2 = ');
  DBMS_OUTPUT.PUT_line(i*2);

end loop ciclo_tabal2; 

END;
/