#include <iostream>

int fib(int n)
{
  if (n < 2)
  {
    return n;
  }
  else
  {
    int a = 0;
    int b = 1;
    int temp;
    for (int i = 2; i < n; i++)
    {
      temp = a + b;
      a = b;
      b = temp;
    }
    return a + b;
  }
}

int main()
{
  int num;
  int fib_number;
  std::cout << "Enter a number: ";
  std::cin >> num;
  fib_number = fib(num);
  std::cout << "The " << num << " fibonacci number is " << fib_number;
}
