#!/usr/bin/perl
use warnings;
use strict;
use 5.010;
system("cls");

my @arreglo  ; #= (4,3,9,1,9,5,1,0);
my $temp , my $indice ;
# Ordenamiento Burbuja, Compara de izq a dch y
# izq < dch -> Si ---->  se mantiene ; No -> Intercambian

# Asignacion de valores al array
print "Teclea el numero de valores del array:\t\a"; 
#$indice= <stdin>;

 chop($indice=<stdin> );

for ( my $i=0; $i < $indice; $i++)  # $#arreglo +1  , nuemro de elementos
{	print " Teclea numero del elemeto del array del indice  ", $i.- ".- ";
	chop(my $valor=<stdin>);
	$arreglo[$i]=$valor;
	say $arreglo[$i];
}


print "\nArreglo antes de Ordenar:    ";
#print @arreglo;
print '@arreglo=(';
for ( my $i=0; $i < $indice -1; $i++)  # $#arreglo +1  , nuemro de elementos
{	
	print $arreglo[$i],",";
}
print $arreglo[$indice -1 ], ')';

#=begin comment
for ( my $i=0; $i < $indice; $i++)  # $#arreglo +1  , nuemro de elementos
{
	for( my $j= 0; $j < $indice -1; $j++)  # $#arreglo  
	{  
		if( $arreglo[$j] > $arreglo[$j+1] )
		{  
				$temp =$arreglo[$j +1 ];
				$arreglo[$j + 1] = $arreglo[$j];
				$arreglo[$j] = $temp;
		}
	}
}

#=end comment
#=cut

print "\nArreglo DESPUES de Ordenar:    ";
#say @arreglo;
print '@arreglo=(';
for ( my $i=0; $i < $indice -1; $i++)  # $#arreglo +1  , nuemro de elementos
{	
	print $arreglo[$i],",";
}
print $arreglo[$indice -1 ], ')';