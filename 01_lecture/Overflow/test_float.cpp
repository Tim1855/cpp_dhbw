#include <iostream>

int main()
{
  for (float x = 0.0; x != x + 1; x += 100)
  {
    std::cout << x << std::endl; // Mantisse 23-Bit Exponent 7-Bit -> 8-Bit und Basis 2-Bit
  }
}