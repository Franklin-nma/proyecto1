#include <iostream>

int main() {
   float b,h,A;
  std::cout << "introduzca la base del triangulo\n";
  std::cin>> b;
   std::cout << "introduzca la altura del triangulo\n";
   std::cin>> h;
   A=(b*h)/2;
   std::cout << "El area del triangulo es de:"<< A;
  return 0;
}