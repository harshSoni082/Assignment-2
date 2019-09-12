// program which reads 6 numbers a, b, c, d, e, and f. The program outputs the area
#include <stdio.h>

int main()
{
  float a, b, c, d, e, f, area;
  printf("Enter the coordinates of triangle: ");
  scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f);
  area = (1/2)*(a*(d-f)+c*(f-b)+e*(b-d));
  printf("Area: %.2f", area);
  return 0;
}
