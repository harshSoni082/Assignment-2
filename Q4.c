// program which reads a, b, and c.Let ax+by+c=0 be the equation of a line. The program outputs the slope.
#include <stdio.h>

int main()
{
  float a, b, c, slope;
  printf("Enter coefficients: ");
  scanf("%f%f%f", &a, &b, &c);
  printf("Slope of the equation is :%.22f\n", -a/b);
  return 0;
}
