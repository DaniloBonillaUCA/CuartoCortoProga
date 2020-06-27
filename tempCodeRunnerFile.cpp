
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