#include <stdio.h>
#include <stdlib.h>
#define n 4
#define m 3
static double x[n+1]={0.4,0.5,0.6,0.7,0.8};
static double y[n+1]={0.38942,0.47943,0.56464,0.64422,0.71736};
static double xx[m+1]={0.45,0.55,0.75};
double lagrange(double x[],double y[],double t)
{
    int i,j;
    double L,P;
    P=0.0;
    for(i=0;i<=n;i++)
    {
       L=1;
       for(j=0;j<=n;j++)
       {
           if(j!=i)
           {
               L=L*(t-x[j])/(x[i]-x[j]);
           }
       }
       P=P+y[i]*L;
    }
   return P;
}
int main()
{
    int k;
    double z;
    double lagrange(double x[],double y[],double t);
    for (k=0;k<=m-1;k++)
    {
        z=lagrange(x,y,xx[k]);
        printf("P(%f)=%f\n",xx[k],z);
    }
    return 0;
}
