#include <iostream>
#include <vector>
#include <cmath>
#include "exprtk.hpp"

using namespace std;


void intervalos(double *a, double *b){
  cout << "Introduzca primer intervalo:" << '\n';
  cin >> *a;
  cout << "Introduzca segundo intervalo:" << '\n';
  cin >> *b;

}

double func(string expression_str, double x){

  typedef exprtk::symbol_table<double> symbol_table_t;
  typedef exprtk::expression<double>     expression_t;
  typedef exprtk::parser<double>             parser_t;

  // Register x with the symbol_table
  symbol_table_t symbol_table;
  symbol_table.add_variable("x",x);

  // Instantiate expression and register symbol_table
  expression_t expression;
  expression.register_symbol_table(symbol_table);

  // Instantiate parser and compile the expression
  parser_t parser;
  parser.compile(expression_str,expression);

  return expression.value();
}


double error = 0.0000001;
double c;

void biseccion(double a, double b, string s){
  if((func(s, a) * func(s, b)) >= 0){
      cout<<"Dentro de ese intervalo no existe raíz real.";
      return;
  }
  c = a;
  while ((b-a) >= error){
      c = (a+b)/2;
      if (func(s, c) == 0.0)
          break;
      else
        if ((func(s, c)*func(s, a)) < 0)
          b = c;
        else
          a = c;
  }
}


int main (){
  double a, b; //intervalos


  string expression_str;
  cout << "Ingrese la expression algebraica a evaular:" << '\n';
  cin >> expression_str;

  intervalos(&a, &b);

  biseccion(a, b, expression_str);
  cout << c << '\n';

  return 0;
}
