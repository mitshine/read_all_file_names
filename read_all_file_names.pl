use strict;
use warnings;
use English;

my $dir = '.';
foreach my $fp (glob("*.txt")) {
  printf "%s\n", $fp;
}
