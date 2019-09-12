// program to calculate distance between a line and a point
#include <stdio.h>
#include <math.h>

int main()
{
  int a, b, c, x1, y1;
  float dist;
  printf("Enter the coordinates of a point: ");
  scanf("%d %d", &x1,&y1);
  printf("Enter the coefficients of a line: ");
  scanf("%d%d%d",&a,&b,&c);
  dist=(x1*a+y1*b+c)/sqrt(pow(a, 2) + pow(b, 2)) ;
  printf("Distance: %.2f\n", dist);
  return 0;
}
