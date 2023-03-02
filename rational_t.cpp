/** AUTOR: RUBÉN DÍAZ MARRERO
 * FECHA: 16/2/2023
 * EMAIL: rubendm04@gmail.com
 * VERSION: 1.0
 * ASIGNATURA: Algoritmos y Estructuras de Datos
 * PRÁCTICA Nº: 1
 * COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
 *              "C++ Programming Style Guidelines"
 *              https://geosoft.no/development/cppstyle.html
 */

#include "rational_t.hpp"
#include <cmath>

/**
 * Constructor con parámetros
 */ 
Rational_t::Rational_t(const int numerador, const int denominador) {
  assert(denominador != 0);
  numerador_ = numerador, denominador_ = denominador;
}

/**
 * Getter del numerador
 */ 
int Rational_t::GetNumerador() const {
  return numerador_;
}

/**
 * getter del denominador
*/
int Rational_t::GetDenominador() const {
  return denominador_;
}


/**
 * setter del numerador
*/
void Rational_t::SetNumerador(const int numerador) {
  numerador_ = numerador;
}


/**
 * setter del denominador
*/
void Rational_t::SetDenominador(const int denominador) {
  assert(denominador != 0);
  denominador_ = denominador;
}


/**
 * Método que devuelve el valor en punto flotante del racional
 * @param
 * @return valor en doble precisión del racional
*/
double Rational_t::Value() const { 
  return double(GetNumerador()) / GetDenominador();
}


/**
 *  Método que comprueba si dos racionales son iguales con error de epsilon.
 *  @param r, objeto a comparar
 *  @param precision, se le pasa el valor de epsilon
 *  @return true si los racionales son iguales.
 */
bool Rational_t::IsEqual(const Rational_t& racional, const double precision) const { 
  return (abs((Value() - racional.Value())) < EPSILON);
}


/**
 *  Método que comprueba si un racional es mayor que otro con error de epsilon
 *  @param r, objeto a comparar
 *  @param precision, se le pasa el valor de epsilon
 *  @return true si el primer racional es mayor que el segundo.
 */
bool Rational_t::IsGreater(const Rational_t& racional, const double precision) const {
  return ((Value() - racional.Value()) > EPSILON);
}


/**
 *  Método que comprueba si un racional es menor que otro con error de epsilon
 *  @param r, objeto a comparar
 *  @param precision, se le pasa el valor de epsilon
 *  @return true si el primer racional es menor que el segundo.
 */
bool Rational_t::IsLess(const Rational_t& racional, const double precision) const {
  if ((racional.Value() - Value()) > EPSILON) {
    return ((Value() - racional.Value()) < -EPSILON);
  }
  return false;
}


// operaciones
/**
 *  Método para sumar dos racionales
 *  @param r, objeto a comparar
 *  @return objeto tipo racional con la suma
 */
Rational_t Rational_t::add(const Rational_t& racional) {
  int numerador = GetNumerador() * racional.GetDenominador() + racional.GetNumerador() * GetDenominador();
  int denominador = GetDenominador() * racional.GetDenominador();
  return Rational_t(numerador, denominador);
}


/**
 *  Método para restar dos racionales
 *  @param r, objeto a comparar
 *  @return objeto tipo racional con la resta
 */
Rational_t Rational_t::substract(const Rational_t& racional) {
  int numerador = GetNumerador() * racional.GetDenominador() - racional.GetNumerador() * GetDenominador();
  int denominador = GetDenominador() * racional.GetDenominador();
  return Rational_t(numerador, denominador);
}


/**
 *  Método para multiplicar dos racionales
 *  @param r, objeto a comparar
 *  @return objeto tipo racional con el producto
 */
Rational_t Rational_t::multiply(const Rational_t& racional) {
 return Rational_t(GetNumerador() * racional.GetNumerador(), GetDenominador() * racional.GetDenominador());
}


/**
 *  Método para dividir dos racionales
 *  @param r, objeto a comparar
 *  @return objeto tipo racional con el cociente
 */
Rational_t Rational_t::divide(const Rational_t& racional) {
  return Rational_t(GetNumerador() * racional.GetDenominador(), GetDenominador() * racional.GetNumerador());
}



/**
 * Método de entrada (escritura) 
*/
void Rational_t::Write(ostream& os) const {
  os << GetNumerador() << "/" << GetDenominador() << "=" << Value() << endl;
}


/**
 * Método de salida (lectura)
*/
void  Rational_t::Read(istream& is) {
  cout << "Numerador? ";
  is >> numerador_;
  cout << "Denominador? ";
  is >> denominador_;
  assert(denominador_ != 0);
}

/**
 * Modificación que me piden en clase
 * Hacer un racional, restando la unidad
 * @param 
 * @return objeto modificado
 */
void Rational_t::Minus1() {
  int numerador{0};
  numerador = GetNumerador() - GetDenominador();
  cout << GetNumerador() << " - " << GetDenominador() << " / " << GetDenominador() << endl;
  SetNumerador(numerador);
}

/**
 * Se le pasa dos números a y b a la función
 * Y devuelve un racional con los números como 
 * numerador y denominador menos la unidad
 */
Rational_t Rational_t::Menos1(const int a, const int b) {
  assert(b != 0);
  int numerador = a - b;
  int denominador = b;
  return Rational_t(numerador, denominador);
}