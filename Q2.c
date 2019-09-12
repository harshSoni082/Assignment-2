// program, which reads a, b, c, and d and finds distance between points (a, b) and (c, d)
#include <stdio.h>
#include <math.h>

int main()
{
  float x1, y1, x2, y2;
  printf("Enter the co-ordinates of two points: ");
  scanf("%d%d%d%d",&x1, &y1, &x2, &y2);
  printf("Distance: %.2f\n", sqrt(pow((x1-x2), 2)+pow((y1-y2), 2)));
  return 0;
}
