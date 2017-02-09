#include<stdio.h>
#include<math.h>
int main()
{
  double a,b,c,r;
  while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
  {
      if(a<=0 || b<=0 || c<=0 || (a+b)<=c || (b+c)<=a || (c+a)<=b)
      printf("-1.000\n");
      else
      {
          r = (a + b + c)/2;
          r = 4 * sqrt(r * (r-a) * (r-b) * (r-c)) / 3;
          printf("%.3lf\n",r);
      }
  }

  return 0;
}

