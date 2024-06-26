#include <iostream>


// Base class
class Shape
{
public:
   Shape(double width, double height)
   : m_width(width)
   , m_height(height)
   {}

   ~Shape()
   {}

   void setWidth(double width)
   {
      m_width = width;
   }

   void setHeight(double height)
   {
      m_height = height;
   }

// Can be changed only by child classes
protected:
   double m_width;
   double m_height;
};

class Rectangle : public Shape
{
public:

   Rectangle(double width, double height) : Shape(width, height){}

   double getArea()
   {
      return m_height * m_width;
   }
};

class Triangle : public Shape
{
public:

   Triangle(double width, double height) : Shape(width, height){}

   double getArea()
   {
      return m_height * m_width * 0.5;
   }
};




int main()
{
   Rectangle Rect(5.0, 7.0);
   Triangle Tria(5.0, 7.0);

   // Print the area of the object.
   std::cout << "Total area Rect: " << Rect.getArea() << std::endl;
   std::cout << "Total area Tria: " << Tria.getArea() << std::endl;

   //Zugriff auf funktionen der Elternklasse
   Rect.setHeight(10);
   std::cout << "Total area: " << Rect.getArea() << std::endl;

   return 0;
}