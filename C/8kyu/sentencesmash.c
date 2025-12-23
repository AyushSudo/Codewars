// Given an array of words, return a single string with all the words joined
// together, separated by a single space. If the array is empty, return an empty
// string.

#include <stdlib.h>
#include <string.h>
char *smash(const char *const words[/* count */], size_t count)
{
  // allocate a string on the heap, memory will be freed
  if(count == 0)
    {
      return calloc(1, 1);
    }

  int length = 0;
  for(size_t i = 0; i < count; i++)
    {
      length += strlen(words[i]);
    }

  length += count - 1;
  length += 1;

  char *smash = malloc(length);

  if(smash == NULL)
    return NULL;

  smash[0] = '\0';

  for(size_t j = 0; j < count; j++)
    {
      strcat(smash, words[j]);
      if(j < count - 1)
        {
          strcat(smash, " ");
        }
    }
  return smash;
  free(smash);
}
