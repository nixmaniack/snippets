#include <stdio.h>

int lookup[46];

int fibonacci_nonrecursive(int n)
{
  for (int i = 0; i <= n ; i++)
  {
    if (i <= 1)
        lookup[i] = 1;
    else
      lookup[i] = lookup[i-1] + lookup[i-2];
  }
  return lookup[n];
}

int fibonacci(int n)
{
  for (int i = 0; i < n; i++)
    {
      lookup[i] = 0;
    }
  return fibonacci_nonrecursive(n);
}

int main(int argc, char *argv[])
{
  printf ("%d\n",fibonacci(45));
  return 0;
}
