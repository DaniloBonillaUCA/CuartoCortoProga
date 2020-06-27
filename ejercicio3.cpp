#include <iostream>
#include <iomanip>
using namespace std;

float ingresomatriz(float arr[][5], int n){
cout << "Digite las notas de los estudiantes:" << "\n";
   for(int i = 0; i < n; i++){
      for(int j = 0; j < 5; j++){
      cout << "Nota " << j+1 << " del estudiante " << i+1 << ": ";
      cin >> arr[i][j];
}
   }
}
float mostrarmatriz(float arr[][5], int n){
    cout << "A continuacion se mostraran las notas de los estudiantes:" << "\n";
    for(int i = 0; i < n; i++){
    cout << "Estudiante " << i+1<<"\n";
      for(int j = 0; j < 5; j++){
      cout << arr[i][j] << " ";
}
 cout << "\n";
}
}
float mostrarfinal(float arr[][5], int n){
    cout << "A continuacion se mostrara la nota final de los estudiantes: " << "\n";
    float suma=0;
    for(int i = 0; i < n; i++){
    cout << "Estudiante " << i+1<<"\n";
      for(int j = 0; j < 5; j++){
      suma = suma + arr [i][j];
      
}
 suma= suma/5;
 cout << fixed << setprecision(2)<< suma << " ";
 if (suma>=6){
     cout << "APROBADO, FELICIDADES"<< "\n";
 }
  else if (suma<6){
     cout <<"REPROBADO, ESFUERZATE MAS"<<"\n";
 }
 suma=0;
}
}
int main(){
    
    int n=0;
    cout << "Ingresa la cantidad de estudiantes que ingresaras" << "\n";
    cin >> n;
    float arre[n][5];
    ingresomatriz(arre, n);
    mostrarmatriz(arre, n);
    mostrarfinal(arre,n);
    return 0;
}