#include <iostream>
#include <climits>
#include "exprtk.hpp"

double error = 0.0000001;
double c;

using namespace std;

//pide los intervalos
void intervalos(double *a, double *b){
  cout << "Introduzca primer intervalo: ";
  cin >> *a;
  cout << "\nIntroduzca segundo intervalo: ";
  cin >> *b;

}

//pide y evalua la funcion
double func(string expression_str, double x){

  typedef exprtk::symbol_table<double> symbol_table_t;
  typedef exprtk::expression<double>     expression_t;
  typedef exprtk::parser<double>             parser_t;

  // Register x with the symbol_table
  symbol_table_t symbol_table;
  symbol_table.add_variable("x", x);

  // Instantiate expression and register symbol_table
  expression_t expression;
  expression.register_symbol_table(symbol_table);

  // Instantiate parser and compile the expression
  parser_t parser;
  parser.compile(expression_str,expression);

  return expression.value();
}

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

void falsa_posicion(double xl, double xu, string s){
    int i=1;
    double  xr, f1, f2, total;
    double approxError=INT_MAX;
    double prevRoot=INT_MAX;

    f1 = func(s, xl);
    f2= func (s, xu);

    total=f1*f2;

    if(total > 0){
        printf("Invalid initial guesses!!!");
        return;
    }

    do
    {
        if(i != 1)
            prevRoot = xr;

        xr = ((xu*func(s,xl))-(xl*func(s,xu)))/(func(s, xl)-func(s, xu));

        approxError= fabs((xr - prevRoot) / xr) * 100;

        f1= func(s, xl);
        f2=func(s, xr);
        total=f1*f2;

        if(total < 0)
            xu = xr;
        else if(total > 0)
            xl = xr;
        i++;
    }
    while(approxError >  c);
    c = xr;
}

void secante(double b, double e, string s){
  double a;
  do{
    a=b;
    b=e;
    e=b-(b-a)/(func(s, b)-func(s,a))*func(s, b);
    if (func(s, e)==0){
      c = e;
      return;
    }
  }while(abs(c-b)>= error);
}


int main (){
  cout.precision(6);
  cout.setf(ios::fixed);

  double a, b; //intervalos
  intervalos(&a, &b);

  string expression_str;
  cout << "Ingrese la expression algebraica a evaular: ";
  cin >> expression_str;

  falsa_posicion(a, b, expression_str);
  cout << "\nRaíz de "<<expression_str<< " en el intervalo " <<'[' << a << ", " << b << "]: "<< c << '\n';

  biseccion(a, b, expression_str);
  cout << "\nRaíz de "<<expression_str<< " en el intervalo " <<'[' << a << ", " << b << "]: "<< c << '\n';

  secante(a, b, expression_str);
  cout << "\nRaíz de "<<expression_str<< " en el intervalo " <<'[' << a << ", " << b << "]: "<< c << '\n';

  return 0;
}


//
// void derivative(){
//
//   double h = .0001;
//   double d = 0;
//
//   do{
//     d = ()
//
//
//     h -= .000001;
//
//   }while(d > error);
// }
