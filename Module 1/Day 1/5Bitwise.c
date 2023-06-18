#include<stdio.h>


int bit_operations(int num, int oper_type) {
  int result;

  switch (oper_type) {
    case 1:
      result = num | (1 << 0);
      break;
    case 2:
      result = num & ~(1 << 31);
      break;
    case 3:
      result = num ^ (1 << 16);
      break;
    default:
      result = -1;
      break;
  }

  return result;
}

int main() {
  int num = 10;
  int result;

  result = bit_operations(num, 1);
  printf("The result of setting the 1st bit is %d\n", result);

  result = bit_operations(num, 2);
  printf("The result of clearing the 31st bit is %d\n", result);

  result = bit_operations(num, 3);
  printf("The result of toggling the 16th bit is %d\n", result);

  return 0;
}