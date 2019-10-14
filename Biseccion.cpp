#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double error = 0.0000001;
double c;

double func(double x){
  // aqui algo para poder convertit strings a funciones calculabes
  return exp(-x)-x;
}

void biseccion(double a, double b){
  if((func(a) * func(b)) >= 0){
      cout<<"Dentro de ese intervalo no existe raíz real.";
      return;
  }
  c = a;
  while ((b-a) >= error){
      c = (a+b)/2;
      if (func(c) == 0.0)
          break;
      else
        if ((func(c)*func(a)) < 0)
          b = c;
        else
          a = c;
  }
}


int main (){
  double a = 0, b = 2; //intervalos

  biseccion(a, b);
  cout << c << '\n';

  return 0;
}
