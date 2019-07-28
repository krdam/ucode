# ucode race00

LEGEND

Story begins right now.
Rebels group is approaching a one of the Machines Power plant. Power plants generate
electrical energy for Machines. It looks like giant skyscraper composed of thousands of
pods with humans.
In one of them should be The One. At least, Morpheus’s trace program says so.
Your mission is to represent a map of the plant and mark The One on it.
0 for pods with humans. 1 for The One. You can call him Neo.
Race 00 | Marathon C > 5

DESCRIPTION

A function race00 that will print a map on the standard output.
Size of the plant and Neo coordinates will be provided to the function race00 as arguments.



CONSOLE OUTPUT

 >./race00 | cat -e # for map 5x4 and The One at (1;1)
 <=--=>$
 *0000*$
 +0100+$
 *0000*$
 +0000+$
 *0000*$
 <=--=>$
 >./race00 | cat -e # for map 4x1 and The One at (3;0)
 <=>$
 *0*$
 +0+$
 *0*$
 +1+$
 <=>$
 >./race00 | cat -e # for map 1x4 and The One at (0;0)
 <=--=>$
 *1000*$
 <=--=>$
 >./race00 | cat -e # for map 3x0 and The One at (19;91) 
