/*


A few notes - see the #include?
int main defines the main functions of the programme. Should see this everywhere. 

C needs to be compiled - gcc for use in linux. 
try to compile with -Wall 
this will give all errors. 

VIM lessons!
:syntax on
lovely highlighting

:set number
code lines numbered

:w
save
:q 
quit

#include
adds a library
<stdio.h> standard input/output library. Probably needed for everything

*/
#include <stdio.h>

int main (int argc, char *argv[]) {
  if(argc==2) {
  printf("Knock, knock, %s\n", argv[1]);
  } else {
  fprintf(stderr, "Usage: %s <name>\n", argv[0]);
  return 1;
  }
  return 0;
}

