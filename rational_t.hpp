/** AUTOR: RUBÉN DÍAZ MARRERO
 *  FECHA: 16/2/2023
 *  EMAIL: rubendm04@gmail.com
 *  VERSION: 1.0
 *  ASIGNATURA: Algoritmos y Estructuras de Datos
 *  PRÁCTICA Nº: 1
 *  COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
 *              "C++ Programming Style Guidelines"
 *              https://geosoft.no/development/cppstyle.html
 */
// pauta de estilo [92]: comentarios multilínea usando solo "//"

#pragma once

#include <iostream>
#include <cassert>
#include <cmath>

# define EPSILON 1e-6

using namespace std;

class Rational_t {
public:
  // constructor con parámetros
  Rational_t(const int = 0, const int = 1);

  // destructor por defecto
  ~Rational_t() {}
  
  // getter del numeradorerador
  int GetNumerador() const;

  // getter del denominadorominador
  int GetDenominador() const;
  
  // setter del numeradorerador
  void SetNumerador(const int);

  // setter del denominadorominador
  void SetDenominador(const int);

  // Método que devuelve el valor del racional
  double Value(void) const;

  // FASE II
  // Método que comprueba si dos racionales son iguales con error de epsilon
  bool IsEqual(const Rational_t&, const double precision = EPSILON) const;

  // Método que comprueba si un racional es mayor que otro (con error de epsilon)
  bool IsGreater(const Rational_t&, const double precision = EPSILON) const;

  // Método que comprueba si un racional es menor que otro (con error de epsilon)
  bool IsLess(const Rational_t&, const double precision = EPSILON) const;
  
  // FASE III
  // Método para la suma de dos racionales
  Rational_t add(const Rational_t&);

  // Método para la resta de dos racionales
  Rational_t substract(const Rational_t&);

  // Método para el producto de dos racionales
  Rational_t multiply(const Rational_t&);

  // Método para la división de dos racionales
  Rational_t divide(const Rational_t&);

  // Método de escritura de la clase
  void Write(ostream& = cout) const;

  // Método de lectura de la clase
  void Read(istream& = cin);

  // Modificación de clase
  void Minus1();

  Rational_t Menos1(const int , const int );
  
private:
  // pauta de estilo [11]: nombre de los atributos seguido de "_"
  int numerador_; 
  int denominador_;
};
