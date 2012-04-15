#include <stdio.h>

int lookup[46];

int fibonacci_by_lookup(int n)
{
  if (lookup[n] == 0)
    {
      if (n <= 1)
        lookup[n] = 1;
      else
        lookup[n] = fibonacci_by_lookup(n-1) + fibonacci_by_lookup(n-2);
    }
  return lookup[n];
}

int fibonacci(int n)
{
  for (int i = 0; i < n; i++)
    {
      lookup[i] = 0;
    }
  return fibonacci_by_lookup(n);
}

int main(int argc, char *argv[])
{
  printf ("%d\n",fibonacci(45));
  return 0;
}
