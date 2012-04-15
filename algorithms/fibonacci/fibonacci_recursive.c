#include <stdio.h>

int fibbonacci(int n)
{
  if (n <= 1 )
    {
      return 1;
    }
  else
    {
      return fibbonacci(n-1) + fibbonacci(n-2);
    }
}

int main(int argc, char *argv[])
{
  printf ("%d\n",fibbonacci(45));
  return 0;
}
