#include <iostream>

int main()
{
  for (int n = 0; n >= 0; n += 100000)
  {
    std::cout << n << std::endl; // zählt bis 2^31, danach wird n negativ
  }
}