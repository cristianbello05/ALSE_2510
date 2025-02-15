#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

double punto2( const double x[], const double y[], double r[], const int &cant ){
  // En esta función se hace el producto elemento a elemento de los dos vectores y se devuelve
  // la suma de todos los valores del vector de resultados.
  double res = 0;

  for(int i=0; i<cant; i++){
        r[i] = x[i] * y[i];
        res = res + r[i];
  }
  return res;
}

double punto1( double *x, double *y, double *r, const int &cant ){
  // En esta función se hace el producto elemento a elemento de los dos vectores y se devuelve
  // la suma de todos los valores del vector de resultados.
double res = 0;
  for(int i=0; i<cant; i++){
        r[i] = x[i] * y[i];
        res = res + r[i];
  }
  return res;
}

int main(){
  srand(time(0));
  double v1[15]/*={3.}*/, v2[15], vres[15];
  for(int i=0; i<15;i++){
    v1[i] = rand() % 10;
    v2[i] = 50 + rand() % 100;
  }

  cout << "La suma total con punto1 es: " <<  punto1(v1, v2, vres, 15);
 printf("\n");
  cout << "La suma total con punto2 es: " <<  punto2(v1, v2, vres, 15);
 printf("\n");

  for(int i=0; i<15;i++)
    cout << "vres[" << i << "] = " << vres[i] << endl;
 printf("\n");
  for(int n=0; n<15;n++)
    cout << "v1[" << n << "] = " << v1[n] << endl;
 printf("\n");
  for(int m=0; m<15;m++)
    cout << "v2[" << m << "] = " << v2[m] << endl;
  return 0;
}
