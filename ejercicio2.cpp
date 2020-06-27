#include <iostream>
using namespace std;


float ingresoestaturas(float arr[]){
    for (int i=0; i<25; i++){
        cout << "Ingresa la estatura del estudiante numero " << (i+1) << "\n";
        cin >> arr [i];
    }
}
float calculo(float arr[]){
    float a=0;
    for (int i=0; i<25; i++){
      a= a+ arr[i];
    }
    return a;
}
float promediar(float a){
    float b;
return b=a/25;
}

float comparador(float arr[], float p){
    int arriba=0;
   for (int i=0; i<25; i++){
       if (arr[i]>p){
     arriba = arriba + 1;
    }
    
}   cout << "La cantidad de estudiantes que su estatura esta arriba de la media son: " << arriba << "\n";
    int abajo=0;
    for (int i=0; i<25; i++){
      if (arr[i]<=p) {
      abajo = abajo + 1;     
      }
    }
cout << "La cantidad de estudiantes que su estatura esta abajo de la media son: " << abajo << "\n";
}

int main(){
    float estaturas[25];
    ingresoestaturas(estaturas);
    float acum=calculo(estaturas);
    cout << "La suma de todas las estaturas son: " << acum << "\n";
    float promedio=promediar(acum);
    cout << "El promedio de las estaturas es: " << promedio << "\n";
    comparador(estaturas, promedio);
    return 0;
} 