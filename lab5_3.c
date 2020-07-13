#include "stdio.h"
int main() {
    char c;
    float v;
    
    printf("Initial Value: ");
    scanf("%f", &v);
    printf("\n");
    
    while (1) {
      printf("Operator: ");
      scanf(" %c", &c);
      
      if (c != '+' && c != '-' && c != '*' && c != '/') {
        break;
      } else {
        float i;
        
        printf("Input Value: ");
        scanf("%f", &i);
        
        switch (c) {
          case '+':
            v += i;
            printf("Present Value is %.4f\n\n", v);
            
            break;
          case '-':
            v -= i;
            printf("Present Value is %.4f\n\n", v);
            
            break;
          case '*':
            v *= i;
            printf("Present Value is %.4f\n\n", v);
            
            break;
          case '/':
            v /= i;
            printf("Present Value is %.4f\n\n", v);
            
            break;
        }
      }
    }
    
    printf("\nFinish Calculation. Final Value is %.4f", v);
}