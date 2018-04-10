#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
float funcion(float x, float y, float z);
//se crea la clase main
int main(){
  float h=0.1;
  int N=10/h;
  float x=0;
  float y=1;
  float z=0;
  float y1;
  float z1;
  for(int i=0;i<=N;i++){
    cout << x << " " << y << " " << z << endl;
    y1=y;
    z1=z;
    x=x+h;
    z=z-h*y;
    y=y+h*z1;
    //retorna el N y el tiempo que le tomo calcular ese termino
    //cout << x << " " << y << " " << z << endl;
  }

  return 0;
}

float funcion(float x, float y, float z){
  float f=-y;
  return f;
}
