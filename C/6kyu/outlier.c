/*
 You are given an array (which will have a length of at least 3, but could be very large)
 containing integers. The array is either entirely comprised of odd integers or entirely
 comprised of even integers except for a single integer N. Write a method that takes the
 array as an argument and returns this "outlier" N.
 */

#include <stddef.h>
#include <stdlib.h>

int find_outlier(const int values[/* count */], size_t count)
{
  int even = 0, odd = 0, oddloc = 0, evenloc = 0;
  for(size_t i = 0; i < 3; i++) // checks the array
  {
    if(abs(values[i]) % 2 == 1) // checks if the number is odd else even
    {
      odd++;
      oddloc = i;
    }
    else
    {
      even++;
      evenloc = i;
    }
  }

  if(odd > even) // if majority of numbers are odd then it returns the even number else the odd
    return values[evenloc];

  else
    return values[oddloc];
}
