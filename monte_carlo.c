#include <stdio.h>
#include<math.h>
#include<stdlib.h>
float mc_pi(int);
int main() 
{
    int n;
    float pi;
 scanf("%d",&n);
 pi=mc_pi(n);
 printf("/n%f",pi);
}

float mc_pi(int n1)
{int x,y,d1,d2;
 float pi,s,d;
 d1=0;
 d2=0;
    for(int i=0;i<n1;i++)
    {x=rand();
     y=rand();
     s=(x*x)+(y*y);
     d=sqrt(s);
     if(d<=20000)
     {d1++;
        if(d<=10000)
         d2++;
     }
    }
     pi=4*(d2/d1);
     return pi;
    }
     
    
