
/*It's bonus time in the big city! The fatcats are rubbing their paws in anticipation... but who is going to make the most money?
Build a function that takes in two arguments (salary, bonus). Salary will be an integer, and bonus a boolean.
If bonus is true, the salary should be multiplied by 10. If bonus is false, the fatcat did not make enough money and
must receive only his stated salary.*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

char* bonus_time(unsigned long long int salary, bool bonus)
{
  //  return a heap allocated string (the tests will free it)
  if(bonus)
    salary *= 10;
  int len = snprintf(NULL, 0, "$%llu", salary); // calculate the length of salary
  char* newsalary = malloc(len + 1);            // Allocated extra space for '\0'
  if(newsalary == NULL)
    return NULL;                                 // checks if memory was allocated sucessfully
  snprintf(newsalary, len + 1, "$%llu", salary); // writes the integer salary to string with $
  return newsalary;
}
