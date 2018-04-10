#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
float funcion(float x, float y);
//se crea la clase main
int main(){
  float h=0.1;
  int N=3/h;
  float x=0;
  float y=1;
  for(int i=0;i<=N;i++){
    x=x+h;
    y=y+h*funcion(x,y);
    //retorna el N y el tiempo que le tomo calcular ese termino
    cout << x << " " << y << endl;
  }

  return 0;
}

float funcion(float x, float y){
  float f=-y;
  return f;
}
