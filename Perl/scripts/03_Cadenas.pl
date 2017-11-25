#!/usr/bin/perl
#  CADENAS
use 5.010;  # usar say
my ($nombre, $nuevoNombre);
system("cls");
print "    hi ,  ";
say "Felipe";

$nombre = "Felipe Gil";
print "Teclea tu Nombre Bendito:\t\a";
$nombre=<stdin>;
say"La longitud de tu nombre es: ", length $nombre;
$posicion= (index $nombre, " ")+1;
$posATRAS= (rindex $nombre, " ") +1;
say"El espacio esta en la posicion:  \a",  index $nombre, " ";
say"El espacio esta en la posicion:  \a", $posicion;
say"El espacio esta en la posicion, hacia atras:  \a", $posATRAS;
say"La primera 'G' esta en la posicion:  \a", (index $nombre, "G" )+1 ;
say"La Ultima 'G' esta en la posicion:  \a", (rindex $nombre, "G" )+1 ;

say "Nuevo Nombre!!, Teclea un nuevo mombre:\n\a  ";
$nuevoNombre = substr $nombre, 7,10;
say " Apellido:", $nuevoNombre;
my $apellido="gil";
say lc $nombre;
say ucfirst $nombre;