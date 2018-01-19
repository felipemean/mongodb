#!/usr/bin/perl
use utf8 ; # Permite poner acentos
use 5.010  ; # Permite usar say
 
my $count=0;

while($count <10){
	
	say $count;
	$count = $count +1;
#	print "$count .-"

}
print "Estructura if y booleanos\n";

my $bool = 0;  # falso
my $undef = undef; # falso,  y además estos:  0,(), "0", undef, 0 , lista vacia ('') 

my $tarea = 1;
if ($tarea == 0){

print "Tienes Razon";
}else{
	print "No, tienes, Razon";
}