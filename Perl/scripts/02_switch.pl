#!/usr/bin/perl
use warnings;
#use strict;
use 5.010;
use Switch;
#no warnings 'experimental::smartmatch';
system("cls");
# CASE en PERL  seleccion de casos
my $nacionalidad = "Colombiano";

print " Que nacionalidad tienes:\t\a";
chop($nacionalidad=<stdin>);

switch ($nacionalidad){
	
	case Mexicano { print "Hola Primo" }
		case Colombiano { print "Hola Hermano" }
		case Espanol  { print " Como yo" }

	else { print "No eres Mexicano"}


}
print "\n";

print " Como te llamas:\t\a";
chop($name=<stdin>);


given( $name ) {
when( /fred/i ) { say 'Name has fred in it' }
when( /^Fred/ ) { say 'Name starts with Fred' }
when( 'Fred' ) { say 'Name is Fred' }
default { say "I don't see a Fred" }
}