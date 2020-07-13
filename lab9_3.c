#include <stdio.h>
#include <math.h>
struct Point {
  double x;
  double y;
};
int main() {
  int i, n;
  printf("Number of Points: ");
  scanf("%d", &n);

  struct Point p[n];

  for (i = 0; i < n; i++) {
    printf("P%d.X: ", i+1);
    scanf("%lf", &p[i].x);
    printf("P%d.Y: ", i+1);
    scanf("%lf", &p[i].y);
  }

  printf("Length:\n");
  for (i = 0; i < n-1; i++) {
    double length = sqrt(pow(p[i].x - p[i+1].x, 2) + pow(p[i].y - p[i+1].y, 2));
    printf("Length from P%d(%.2f, %.2f) to P%d(%.2f, %.2f) is %.2f\n", i+1, p[i].x, p[i].y, i+2, p[i+1].x, p[i+1].y, length);
  }
}