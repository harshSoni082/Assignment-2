// program which reads a,b,c,p,q and r. Let ax+by+c=0 and px+qy+r=0 be the equations of lines. Print their point of intersection.
#include <stdio.h>
#include <math.h>

int main()
{
  float a, b, c, p, q, r, x, y;
  printf("enter the coefficients of first equation :");
  scanf("%f%f%f", &a,&b,&c);
  printf("enter the coefficients of second  equation :");
  scanf("%f%f%f", &p,&q,&r);

  x=(b*r - c*q) / (p*b - a*q);
  y=(c*p-a*r) / (p*b - a*q);.+3
  printf("Intersection: (%.2f, %.2f)\n", x, y);
  return 0;
}
