#!/bin/perl
use warnings;
system("cls");
print "Hi , escribe tu nombre:   ";
$text = <STDIN>;
print "$text";
print "Hi , Tienes Perro?:   ";
chomp($Name=<STDIN>);
print "$Name is a gut name";

$count = 0;
while ($count < 10) {
$count += 2;
print "count is now $count\n"; # Gives values 2 4 6 8 10
}

my $frase= "Hola AMor!\n" ;
print $frase;