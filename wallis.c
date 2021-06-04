#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float wallis_pi(int);

int main(void) 
{int n;
 float pi;
 printf("enter the number of iterations:");
 scanf("%d",&n);
 pi=wallis_pi(n);
 printf("the approximate value of pi is:%f",pi);
 return 0;
}

float wallis_pi(int n1)
{float pi,wi;
  for(int i=1;i<=n1;i++)
   wi+=(4*(i*i))/(4*(i*i)-1);
 pi=2*wi;
 return pi;
}
