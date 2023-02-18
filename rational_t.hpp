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

// pauta de estilo [5]
# define EPSILON 1e-6

using namespace std;

class Rational_t {
  // pautas de estilos [44] y [73]: primero "public" y después "private"
public:
  // constructor con parámetros
  Rational_t(const int = 0, const int = 1);

  // destructor por defecto
  ~Rational_t() {}
  
  // pauta de estilo [71]: indenominadortación a 2 espacios
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
  bool IsEqual(const Rational_t&, const double precision = EPSILON) const;
  bool IsGreater(const Rational_t&, const double precision = EPSILON) const;
  bool IsLess(const Rational_t&, const double precision = EPSILON) const;
  
  // FASE III
  // rational_t add(const rational_t&);
  // rational_t substract(const rational_t&);
  // rational_t multiply(const rational_t&);
  // rational_t divide(const rational_t&);

  // Método de escritura de la clase
  void Write(ostream& = cout) const;

  // Método de lectura de la clase
  void Read(istream& = cin);
  
private:
  // pauta de estilo [11]: nombre de los atributos seguido de "_"
  int numerador_; 
  int denominador_;
};
