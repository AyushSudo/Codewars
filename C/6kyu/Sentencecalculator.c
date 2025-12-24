/* Calculate the total score (sum of the individual character scores) of a
sentence given the following score rules for each allowed group of characters:

Lower case [a-z]: 'a'=1, 'b'=2, 'c'=3, ..., 'z'=26
Upper case [A-Z]: 'A'=2, 'B'=4, 'C'=6, ..., 'Z'=52
Digits [0-9] their numeric value: '0'=0, '1'=1, '2'=2, ..., '9'=9
Other characters: 0 value */

#include <ctype.h>
#include <string.h>

int letters_to_numbers(const char* str)
{
  int score = 0; // initialize score to 0
  int number = 0;
  int lowercase[] = {
      1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13,
      14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26}; // lowercase points
  int uppercase[] = {
      2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26,
      28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52}; // uppercase points
  int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};          // numbers points

  for(int i = 0, n = strlen(str); i < n; i++)
  {
    if(isupper(str[i])) // checks if  character is uppercase
    {
      score += uppercase[str[i] - 'A']; // increases score according to uppercase points
    }

    if(islower(str[i])) // checks if character is lowercase
    {
      score += lowercase[str[i] - 'a']; // increases score according to lowercase points
    }

    if(isdigit(str[i])) // checks if the character is number
    {
      number = str[i] - '0';
      score += numbers[number]; // increases score according to number points
    }
  }
  return score; // returns the total score
}
