#include "ReverseSetCase.h"

#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <assert.h>

char *reverseSetCase(char const *inBuffer)
{
  assert(inBuffer != NULL);

  const char *VOWELS = "AaEeIiOoUuYy";

  size_t inStringLength = strlen(inBuffer);

  assert(inStringLength > 0);

  char *outBuffer = malloc(inStringLength + 1);
  memset(outBuffer, '\0', inStringLength + 1);

  for(unsigned int writeCount = 0; writeCount <= inStringLength;) { 

    size_t nextVowel = strcspn((inBuffer + writeCount), VOWELS); //Find first occurance of a Vowel 

    for(unsigned int subWriteCount = 0; subWriteCount < nextVowel; ++subWriteCount){ 

      outBuffer[inStringLength - (writeCount + 1)] = toupper(inBuffer[writeCount]); //Upcase and write consonants and control characters
                                                                                    //in reverse order to outbuffer
      ++writeCount;

    }
    
    if(writeCount <= inStringLength) {
      outBuffer[inStringLength - (writeCount + 1)] = tolower(inBuffer[writeCount]); //downcase and write the next vowel
      ++writeCount;
    }

  }

  return outBuffer;

}
