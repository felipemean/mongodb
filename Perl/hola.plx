#!/usr/bin/perl
use warnings;
system("cls");
print "Hola Mundo\n";
print 'Numeros hexadecimales se declaran asi: " my ·$hexadecima = 0xff "';
print "\n\a Teclea tu Nombre:	";
$nombre=<stdin>;
print "\a Tu nombre es: $nombre";

print " Teclea variables:	";
chop($numero=<stdin>);
print " $numero es un escalar, numero";
print " Teclea otro numero:	";
chop($num=<stdin>);
print ' una variable escalar se declara con my $var, puede ser una cadena o un numero: Teclea una cadena ',"\n";

$cadena=<stdin>;

print " EL numero es: $num ", "	y la Cadena:	" , $cadena   ;
print 'Numeros hexadecimales se declaran asi: " my ·$hexadecima = 0xff "';
