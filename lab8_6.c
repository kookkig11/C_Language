#include <stdio.h>
struct complex {
  float a;
  float b;
  float add1;
  float add2;
  float multi1;
  float multi2;
  float task;
};

struct complex add_complex(struct complex C, struct complex D) {
 struct complex x;
  x.add1 = (C.a + D.a);
  x.add2 = (C.b + D.b);
  x.task = 0;
  return x;
}


struct complex multiply_complex(struct complex C, struct complex D) {
 struct complex x;
  x.multi1 = ((C.a * D.a) - (C.b * D.b));
  x.multi2 = ((C.a * D.b) + (C.b * D.a));
  x.task = 1;
  return x;
}

void print_complex(char title[], struct complex data) {
 char o;
  if (data.task) {
    if (data.multi1 || data.multi2) {
      if (data.multi2 < 0) {
        o = '-';
      }
      else {
        o = '+';
      }
      
      if (data.multi1 == 0) {
        printf("%s%.1fi\n", title, data.multi2);
      }
      else if (data.multi2 == 0) {
        printf("%s%.1f\n", title, data.multi1);
      }
      else {
        if (o == '-') {
          printf("%s%.1f %c %.1fi\n", title, data.multi1, o, data.multi2 * (-1));
        }
        else {
          printf("%s%.1f %c %.1fi\n", title, data.multi1, o, data.multi2);
        }
      }
    }
    else {
      printf("%s%.1f\n", title, 0.0);
    }
  }
  else {
    if (data.add1 || data.add2) {
      if (data.add2 < 0) {
        o = '-';
      }
      else {
        o = '+';
      }
      
      if (data.add1 == 0) {
        printf("%s%.1fi\n", title, data.add2);
      }
      else if (data.add2 == 0) {
        printf("%s%.1f\n", title, data.add1);
      }
      else {
        if (o == '-') {
          printf("%s%.1f %c %.1fi\n", title, data.add1, o, data.add2 * (-1));
        }
        else {
          printf("%s%.1f %c %.1fi\n", title, data.add1, o, data.add2);
        }
      }
    }
    else {
      printf("%s%.1f\n", title, 0.0);
    }
  }
}

int main() {
  struct complex C, D, E, F;
  printf("Enter C: ");
  scanf("%f %f", &C.a, &C.b);
  printf("Enter D: ");
  scanf("%f %f", &D.a, &D.b);

  E = add_complex(C, D);
  F = multiply_complex(C, D);

  print_complex("C + D = ", E);
  print_complex("C x D = ", F);

  return 0;
}