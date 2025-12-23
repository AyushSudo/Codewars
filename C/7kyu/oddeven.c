/* in this problem our task is that we have an array of integers and after
adding the digits in the array our program should return "even" or "odd" */

#include <stddef.h>

const char *odd_or_even(const int v[/* sz */], size_t sz)
{
  // return a static string or a string literal, it will NOT be freed:
  int sum = 0;

  for(size_t i = 0; i < sz; i++)
    {
      sum += v[i]; // sums the digit in array
    }

  // checks the sum
  if(sum % 2 == 0)
    return "even";
  else
    return "odd";
}
