#include "main.h"

void print_number(int n) {
  int digit;
  int negative = 0;

  if (n < 0) {
    negative = 1;
    n = -n;
  }

  do {
    digit = n % 10;
    _putchar(digit + '0');
    n /= 10;
  } while (n > 0);

  if (negative) {
    _putchar('-');
  }
}

int main() {
  print_number(98);
  _putchar('\n');
  print_number(402);
  _putchar('\n');
  print_number(1024);
  _putchar('\n');
  print_number(0);
  _putchar('\n');
  print_number(-98);
  _putchar('\n');
  return (0);
}

