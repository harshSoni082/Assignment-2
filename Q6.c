// program to print radius and centre of given equation of circle
#include <stdio.h>
#include <math.h>

int main()
{
  float a, b, c, x, y, radius;
  printf("Enter the coefficients: ");
  scanf("%f%f%f", &a, &b, &c);
  x = -1*(a/2);
  y = -1*(b/2);
  printf("Coordinates of the centre are: (%f, %f)", x, y);
  printf("Radius of the circle: %f", sqrt(pow(x)+pow(y)-c));
  return 0;
}
