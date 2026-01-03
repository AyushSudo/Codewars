// Find the sum of all multiples of n below m
//  for invalid input, return -1

int sum_mul(int n, int m)
{

  if(n < 0 || m < 0)
  {
    return -1;
  }

  int sum = 0;

  // Loop counter i starts from 1
  // n * i represents the i-th multiple of n
  // The loop continues as long as the multiple is less than m
  for(int i = 1; n * i < m; i++)
  {
    sum += n * i;
  }
  return sum;
}
