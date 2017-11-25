#!/usr/bin/perl
use warnings;
use utf8;
use 5.010;
use strict;
# arreglos 
system("cls");

my @idiomas= ("Frances", "Español", "Aleman",'Inglés, El Penultimo','indice 4, quinto elemento' );

print "\n", 'Bucle con foreach y un arreglo: "foreach my $dioma(@idiomas){ say  }"', "\n";
foreach my $idioma (@idiomas){
	
	say $idioma;
}
print "\n",'ahora con bucle for: "for ( ; ; ){say $idiomas[$i]}" ' ,"\n";
for ( my $i=0; $i<=3; $i++){

	say $idiomas[$i];
}

say "\n",'capturar elementos del array';
say $idiomas[1];
say 'El Penultimo elemento del array con [-2] :      ', $idiomas[-1];
say "\n  numero de indice del ultimo indice:\t\a",$#idiomas;
say "\n nuemro de elementos del array ", '$#idiomas +1  ' , $#idiomas +1 ,"\n";   

for (my $i=0; $i < $#idiomas +1 ;$i++){
	say $idiomas[$i];
}