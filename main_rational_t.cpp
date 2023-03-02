/** AUTOR: RUBÉN DÍAZ MARRERO
 * FECHA: 16/2/2023
 * EMAIL: rubendm04@gmail.com
 * VERSION: 1.0
 * ASIGNATURA: Algoritmos y Estructuras de Datos
 * PRÁCTICA Nº: 1
 * COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
 *              "C++ Programming Style Guidelines"
 *              https://geosoft.no/development/cppstyle.html
 *              https://geosoft.no/development/cppstyle.html
 * COMPILACIÓN: g++ -g rational_t.cpp main_rational_t.cpp -o main_rational_t
 */

#include <iostream>
#include <cmath>

#include "rational_t.hpp"

using namespace std;

int main()
{
  // Prueba de la modificación
  Rational_t testing(24, 3);
  cout << "a = " << testing.GetNumerador() << endl;
  cout << "b = " << testing.GetDenominador() << endl;
  cout << "Valor: " << testing.Value() << endl;
  testing.Minus1();
  cout << "Llamada a la función.\n";
  cout << "Nuevo numerador: " << testing.GetNumerador() << endl;
  cout << "Nuevo denominador: " << testing.GetDenominador() << endl;
  cout << "Nuevo valor: " << testing.Value() << endl;

  // Rational_t prueba2(4, 3);
  // prueba2.Menos1(9, 3);
  // cout << prueba2.Value() << endl;

  Rational_t a(1, 2), b(3), c;

  cout << "a.value()= " << a.Value() << endl;
  cout << "b.value()= " << b.Value() << endl;
  cout << "c.value()= " << c.Value() << endl;

  cout << "a: ";
  a.Write();
  cout << "b: ";
  b.Write();

  c.Read();
  cout << "c: ";
  c.Write();

  // FASE II
  Rational_t x(1, 3), y(2, 3);
  x.Write();
  y.Write();
  cout << "x == y? " << (x.IsEqual(y) ? "true" : "false") << endl;
  cout << "x < y? " << (x.IsGreater(y) ? "true" : "false") << endl;
  cout << "x > y? " << (x.IsLess(y) ? "true" : "false") << endl;

  // FASE III
  cout << "a + b: ";
  a.add(b).Write();
  
  cout << "b - a: ";
  b.substract(a).Write();

  cout << "a * b: ";
  a.multiply(b).Write();
  
  cout << "a / b: ";
  a.divide(b).Write();
  
  return 0;
}