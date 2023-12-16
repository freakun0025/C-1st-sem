/******************************************************************************
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int fact (int n)
{
  int b[n], c = 1;
  int static a[100];
  if (a[n] != 0)
    {
      return a[n];
    }
  
  else
    {
      if(n==0){
        a[0]=1;
        return 1;
      }
      else{
      for (int i = 0; i < n; i++)
	{
	  b[i] = c;
	  c++;
	}
      int d = 1;
      for (int i = 0; i < n; i++)
	{
	  d = d * b[i];
	}
      a[n] = d;


      return d;
      }
    }
}

int main ()
{
  int n=1;
  while(n>=0){
      scanf("%d",&n);
      if(n<0){
          break;
      }
      int Fact=fact(n);
      printf("The factorial of %d is %d\n", n,Fact);
  }
  
return 0;
}



