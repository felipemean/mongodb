#!/usr/bin/perl
use warnings;
use utf8;
use 5.010;
use strict;
# arreglos 
system("cls");

my @idiomas= ("Frances ", "Español ", "Aleman ",'Ingles ','Castellano ' );

# Trasformar el arreglo en un escalar, dice cuantos elementos tiene el arreglo: 
say scalar @idiomas;
say $#idiomas +1;     # numero de elementos del array obteniendo el ultimo indice y sumando 1


# Agregar otro elemento al array
push @idiomas, "Italiano (me la tocas con la mano)";


say @idiomas;

unshift @idiomas, 'Griego ';
say @idiomas;

my $elUltimo = pop @idiomas;
say $elUltimo;

my $elPrimero = shift @idiomas;
say $elPrimero;