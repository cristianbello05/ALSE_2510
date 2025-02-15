#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <ctime>

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
  double v1[100], v2[100], vres[100];
  for(int i=0; i<100;i++){
    v1[i] = 3;
    v2[i] = 50 + rand() % 100;
  }
  clock_t start1 = clock();
  cout << "La suma total con punto1 es: " <<  punto1(v1, v2, vres, 100);
 printf("\n");
  clock_t end1 = clock();
  clock_t start2 = clock();
  cout << "La suma total con punto2 es: " <<  punto2(v1, v2, vres, 100);
 printf("\n");
  clock_t end2 = clock();

  for(int i=0; i<100;i++)
    cout << "vres[" << i << "] = " << vres[i] << endl;
 printf("\n");

  /*for(int l=0; l<100;l++)
    cout << "vres2["<< l << "] = " << vres2[l] << endl;
 printf("\n");
  for(int n=0; n<100;n++)
    cout << "v1[" << n << "] = " << v1[n] << endl;
 printf("\n");
  for(int m=0; m<100;m++)
    cout << "v2[" << m << "] = " << v2[m] << endl;
 printf("\n");*/

 //Calcular el tiempo de ejecucion de cada función

 double time1 = double(end1 - start1) / CLOCKS_PER_SEC;
 double time2 = double(end2 - start2) / CLOCKS_PER_SEC;

 cout << "Tiempo de ejecucion de la funcion 'punto2' es :" << time1 << endl;
 printf("\n");
 cout << "Tiempo de ejecucion de la funcion 'punto1' es :" << time2 << endl;
 printf("\n");
  return 0;
}
