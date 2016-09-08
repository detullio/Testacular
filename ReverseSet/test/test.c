#include "ReverseSetCase.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*test jig for reverseSetCase, verification through visual inspection of output. could be improved through the addition of automated comparison
  to known correct reversed strings better identification and implmentation of extreme cases
  such as unprintable characters and very long strings. failure cases (out of memory null strings
  et. al.) should also be included, function currently does not handle failure gracefully 
  Thanks to psychoanalyze-pinhead for generated sentences */

int main(void)
{
  const int NUMBER_TESTS = 28;
   
  char *testStrings[NUMBER_TESTS];
  char *returnStrings[NUMBER_TESTS];

  memset(testStrings, 0, sizeof(testStrings));
  memset(testStrings, 0, sizeof(returnStrings));

  testStrings[0] = "a";
  testStrings[1] = "e";
  testStrings[2] = "i";
  testStrings[3] = "o";
  testStrings[4] = "u";

  testStrings[5] = "A";
  testStrings[6] = "E";
  testStrings[7] = "I";
  testStrings[8] = "O";
  testStrings[9] = "U";

  testStrings[10] = "d";
  testStrings[11] = "g";
  testStrings[12] = "u";

  testStrings[13] = "D";
  testStrings[14] = "G";

  testStrings[15] = " -0987654321--==;;][][][[]";

  testStrings[16] = "WaXeYiZ";

  testStrings[17] = "Are you sure that legally imposed culture reduction is cabbage brained?";

  testStrings[18] = "es yes";

  testStrings[19] = "Is it because of your inhibitions that you say es yes?";

  testStrings[20] = "Are you sure that is the real reason?";

  testStrings[21] = "nope";

  testStrings[22] = "Can you elaborate on that?";

  testStrings[23] = "no way";

  testStrings[24] = "Is it because of my inhibitions that I say es yes that you are going through all this?";

  testStrings[25] = "garbledygook";

  testStrings[26] = "I would appreciate it if you would continue.";

  testStrings[27] = "all tallk";

  for(unsigned int count = 0; count < NUMBER_TESTS; ++count){
    returnStrings[count] = reverseSetCase(testStrings[count]);
    printf("%s\n", testStrings[count]);
    printf("%s\n", returnStrings[count]);
    printf("-----------------------------------------------------------------------\n");
  }

  for(unsigned int count = 0; count < NUMBER_TESTS; ++count) {
    free(returnStrings[count]);
  }

  return(0);

}
