#!/usr/bin/perl
use warnings;
#use strict;
use 5.010;
system("cls");
# arreglos de numero para buscar el numero mayor y el menor de todos

my @numeros = (-10,1,3,75,9,11,-600,700);

my $mayor = $numeros[0];

for ( my $i=0; $i< $#numeros + 1; $i++){
	if ( $numeros[$i] > $mayor){
		$mayor = $numeros[$i];
	}
}

print "\n En numero mayor de los elementos del arreglo es: ", $mayor, "\n";

my $menor = $numeros[0];

for ( my $i=0; $i< $#numeros + 1; $i++){
	if ( $numeros[$i] < $menor){
		$menor = $numeros[$i];
	}
}

print "\n En numero MENOR  de los elementos del arreglo es: ", $menor, "\n";

say "\n", "Quieres agregar un numero a la lista?\t\a (si/no)" ; my $opc=<stdin>;
chop($opc);
if ( $opc eq "si" or $opc eq "SI" ){
	print "Has dicho SI(si)";

}else{
#print "Has dicho $opc";
		if ( $opc eq "no" or $opc eq "NO"){
			print "Has dicho NO/no";			
		}else{
			print "Has dicho $opc, esto que cojones  es!!?";
		}
}