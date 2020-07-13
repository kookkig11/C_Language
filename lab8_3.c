#include <stdio.h>
struct vector {
  float u;
  float v;
};

int main()
{
  struct vector vt[3];
  printf("Enter u: ");
  scanf("%f %f %f", &vt[0].u, &vt[1].u, &vt[2].u);
  printf("Enter v: ");
  scanf("%f %f %f", &vt[0].v, &vt[1].v, &vt[2].v);
  printf("u x v = %.1f %.1f %.1f", (vt[1].u * vt[2].v)-(vt[2].u * vt[1].v), (vt[2].u * vt[0].v)-(vt[0].u * vt[2].v), (vt[0].u * vt[1].v)-(vt[1].u * vt[0].v));
  return 0;
}