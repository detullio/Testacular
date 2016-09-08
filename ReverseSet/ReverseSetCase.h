#ifndef _REVERSESETCASE_H_
#define _REVERSESETCASE_H_

/* funciton to reverse a char array and upcase.
   Caller is responsible for freeing memory allocated for returned string
   Behaves poorly if passed empty strings or string is not properly terminated
 */
char *reverseSetCase(char const *inBuffer);

#endif
