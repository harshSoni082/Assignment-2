// Write program, which reads a, b and c as sides of a triangle and prints the angle A in degree and radian. Hint: a2 = b2 + c2– 2bc cos(A).
#include<stdio.h>
#include<math.h>
#define PI 3.1425

int main()
{
  float a, b, c, angle;
  printf("Enter sides of triangle: ");
  scanf("%f%f%f", &a,&b,&c);

  angle=acos((b*b+c*c-a*a)/(2*b*c));

  printf("Angle A: %.2f\n", (angle*180) / PI);
  return 0;
}
