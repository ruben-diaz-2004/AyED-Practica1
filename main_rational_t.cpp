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
// pauta de estilo [92]: comentarios multilínea usando solo "//"

#include <iostream>
#include <cmath>

// pauta de estilo [41]: ficheros de cabecera agrupados y separados
#include "rational_t.hpp"

using namespace std;

int main()
{
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
  // cout << "a + b: ";
  // a.add(b).write();
  
  // cout << "b - a: ";
  // b.substract(a).write();

  // cout << "a * b: ";
  // a.multiply(b).write();
  
  // cout << "a / b: ";
  // a.divide(b).write();
  
  return 0;
}