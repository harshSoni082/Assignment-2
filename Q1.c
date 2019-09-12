// program which reads a, b, and c as sides of a triangle and prints area.
#include <stdio.h>
#include <math.h>
#define S(a, b, c) (a+b+c)/2.0

int main()
{
  float a, b, c, s;
  printf("Enter sides of triangle: ");
  scanf("%f%f%f", &a, &b, &c);
  s = S(a, b, c);
  printf("Area of triangle: %.2f\n", sqrt(s*(s-a)*(s-b)*(s-c)));
  return 0;
}
