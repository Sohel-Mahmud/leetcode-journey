void swapNumbers(int num1, int num2) {
  num1 = num1 ^ num2;
  num2 = num1 ^ num2;
  num1 = num1 ^ num2;

  print('num1: $num1');
  print('num2: $num2');
}

void main() {
  int num1 = 10;
  int num2 = 20;

  swapNumbers(num1, num2);
}
