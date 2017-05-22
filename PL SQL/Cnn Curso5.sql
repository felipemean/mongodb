
set serveroutput on;
DECLARE

BEGIN
--rotulen los ciclos for:
<<ciclo_tabla_2>>
for i in 1..20 loop
 --Ignorar impares  con modulos MOD(m,n)   resultado de dividir m entre n

  if (MOD(i,2)<>0 ) then
  continue;
  end if;
 
  
  --dbms_output.put_line( i|| ' * 2 = ' || (i*2) );-- i*2 =2
  DBMS_OUTPUT.PUT(i);
  DBMS_OUTPUT.PUT(' * 2 = ');
  DBMS_OUTPUT.PUT_line(i*2);

end loop ciclo_tabal2;

END;
/



