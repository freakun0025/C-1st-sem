/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void reader (int a[], int n)
{
  for (int i = 0; i < n; i++)
    {
      scanf ("%d", &a[i]);

    }
}

int sum (int a[], int n)
{
  int d = 0;
  for (int i = 0; i < n; i++)
    {
      d = d + a[i];
    }
  return d;
}

void rotate (int a[], int n)
{
  int b[n], i;
  for (i = 0; i < n - 1; i++)
    {
      b[i + 1] = a[i];
    }
  if (i == n - 1)
    {
      b[0] = a[i];
    }
  for (i = 0; i < n; i++)
    {
      a[i] = b[i];
    }
}

int main ()
{
  int n;
  printf ("Read an integer: ");
  scanf ("%d", &n);
  int a[n];
  reader (a, n);
  int Sum = sum (a, n);
  printf ("The sum is %d\n", Sum);
  rotate (a, n);
  for (int i = 0; i < n; i++)
    {
      printf ("%d \t", a[i]);
    }


  return 0;
}
