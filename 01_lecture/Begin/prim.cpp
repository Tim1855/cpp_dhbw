#include <iostream>

bool prim(int n)
{

  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      return 0;
    }
    else {
      return 1;
    }
  }
}

int main()
{
  int num;
  bool is_Prime;
  std::cout << "Enter a number: ";
  std::cin >> num;
  is_Prime = prim(num);
  if (is_Prime)
  {
    std::cout << num << "is a prime number.";
  }
  else
  {
    std::cout << num << "is not a prime number.";
  }
}