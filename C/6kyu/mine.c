/* Write a function that accepts a 2D array, and returns the location of the mine.
The mine is represented as the integer 1 in the 2D array. Areas in the 2D array
that are not the mine will be represented as 0s. */

#include <stdlib.h>

// return a heap-allocated array of 2 elements

size_t* mine_location(size_t n, const int field[n][n])
{
  //  <----  hajime!
  size_t* result = malloc(2 * sizeof(size_t)); // allocates memory on the heap for the mine location

  for(size_t i = 0; i < n; i++)
  {
    for(size_t j = 0; j < n; j++)
    {
      if(field[i][j] == 1)
      {
        // stores the mine location
        *(result + 0) = i;
        *(result + 1) = j;
      }
    }
  }
  return result;
}
