#include <stdio.h>

int main() {

  char op;
  double a, b, res;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%lf %lf", &a, &b);

  switch (op) {
    case '+':
        res = a + b;
        break;
    case '-':
        res = a - b;
        break;
    case '*':
         res = a * b;
        break;
    case '/':
        res = a / b;
      break;
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}

