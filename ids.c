#include<stdio.h>
void
insert (int a[], int n, int val, int pos)
{
  if (pos == n)
    {
      a[n] = val;
    }
  else if (pos < 0 || pos > n)
    {
      printf ("Return Nothing");
      return;
    }
  else
    {
      a[pos] = val;
      for (int i = n - 1; i >= pos-1; i--)
	{
	  a[i + 1] = a[i];

	}
    }
  for (int i = 0; i < n; i++)
    {
      printf ("%d ", a[i]);
    }
    
}

int
delete (int a[], int n, int pos)
{
  if (pos == n - 1)
    {
      return 0;
    }
  else if (n == 0 || pos < 0 || pos > n - 1)
    {
      printf ("Bad delete\n");
      return 0;
    }
  else
    {
      int term = a[pos];
      for (int i = n - 1; i >= pos + 1; i--)
	{
	  a[i - 1] = a[i];
	  return term;
	}
    }

}

int
find_min_pos (int a[], int n)
{
  if (n == 0)
    {
      return -1;

    }
  else
    {
      int min;
      min = a[0];
      for (int i = 0; i < n; i++)
	{
	  if (a[i] < min)
	    {
	      min = a[i];

	      return i;
	    }
	}
    }
}

int
main ()
{
  int a[20], n, v, p;
  printf ("Read an integer n: \n");
  scanf ("%d", &n);
  for (int i = 0; i < n; i++)
    {
      printf ("Read an integer value v: \n");
      scanf ("%d", &v);
      printf ("Read a position value p: \n");
      scanf ("%d", &p);
      insert (a, 20, v, p);
      printf("\n");

    }
  int pos1 = find_min_pos (a, 20);
  int ans = delete (a, 20, pos1);
  printf ("The answer is %d", ans);
  return 0;
}

