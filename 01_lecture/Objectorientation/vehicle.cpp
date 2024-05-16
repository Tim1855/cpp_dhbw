#include <iostream>

int main()
{
  class Vehicle
  {
    Vehicle()
        : Position_X{},
          Consumption_Fuel{},
          current_Fuel{},
          consumption_Total{},
          name{}
    {
    }
  public:
    void fuelling(int current_Fuel)
    {
      if (current_Fuel < 50)
      {
        current_Fuel = current_Fuel + (50 - current_Fuel);
        std::cout << "Ihr Tank wurde auf " << current_Fuel << " aufgefüllt.\n";
      }
      else
      {
        std::cout << "Ihr Tank ist bereits voll.\n";
      }
    }
    void move(double Position_X, int Consumption_Fuel, int current_Fuel, int distance_X, int consumption_Total)
    {
      int maxDistance = current_Fuel / Consumption_Fuel;
      if (distance_X < maxDistance)
      {
        Position_X += distance_X;
        current_Fuel = current_Fuel - (Consumption_Fuel * distance_X);
        consumption_Total = consumption_Total + (Consumption_Fuel * distance_X);
        std::cout << "Ihr neue Position beträgt " << Position_X << "km und ihre Tankfüllung beträgt " << current_Fuel << "l.\n";
      }
      else
      {
        std::cout << "Ihr Tank wäre alle bevor Sie am Ziel ankommen würden.\n";
      }
    }
    void printConsumption(int consumption_Total)
    {
      std::cout << "Ihr Gesamtverbrauch liegt bei " << consumption_Total << ".\n";
    }
    void askMove()
    {
      int distance_X;
      std::cout << "Wie weit wollen Sie in x-Richtung fahren: ";
      std::cin >> distance_X;
    }

  private:
    std::string name;
    double Position_X;
    int Consumption_Fuel;
    int current_Fuel;
    int consumption_Total;
  }

  while (1) {
    std::cout << "Was wollen Sie tun: ";
  }
}