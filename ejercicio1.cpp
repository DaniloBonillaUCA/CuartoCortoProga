#include <iostream>
#include <string>
#include <cstring>
using namespace std;


void mostrarletras(char arr[], int n){
    for (int i=0;i<n;i++){
            cout << arr[i] << "\n";
} /* se recorre el arreglo para mostrar los caracteres contenidos en toda la frase, una por una*/
}
/*haciendo uso de los if, dentro del for, se va comprobando en cada iteracion si existe algun caracter que este dentro de la clave murcielago, si es asi, se cambia el valor en esa
posicion del arreglo al equivalente en numero de la letra que esta dentro de la clave murcielago*/
void codificador(char arr[], int n){
    for (int i=0;i<=n;i++){
        if (arr[i]=='m' ||arr[i]== 'M'){
            arr[i]='0';

}
        else if (arr[i]=='u' ||arr[i]== 'U'){
            arr[i]='1';

}
        else if (arr[i]=='r'|| arr[i]=='R'){
            arr[i]='2';

}
       else if (arr[i]=='c'||arr[i]== 'C'){
            arr[i]='3';

}      
 else if(arr[i]=='i'||arr[i]=='I'){
            arr[i]='4';

}
 else if (arr[i]=='e'||arr[i]=='E'){
            arr[i]='5';

}
 else if (arr[i]=='l'||arr[i]=='L'){
            arr[i]='6';

}
 else if(arr[i]=='a'||arr[i]=='A'){
            arr[i]='7';

}
 else if(arr[i]=='g'||arr[i]=='G'){
            arr[i]='8';

}
 else if(arr[i]=='o'||arr[i]=='O'){
            arr[i]='9';
}
    }
}
void mostrarcadena(char arr[], int n){
        cout << "su frase es: " << "\n";
        cout << arr;
} /*finalmente se muestra el resultado de la frase ya codificada, es importante colocarla en el main por último para que posea los valores del arreglo ya cambiados*/
int main(){
    string palabra;
    int n=0;
    cout << "Ingresa la palabra que quieres codificar en murcielago \n"; /* se le pide la palabra al usuario, para que no sea necesario que el sepa cuantos caracteres posee*/
    getline(cin,palabra); /*se utiliza getline para poder detectar el espacio usado*/
    n=palabra.length(); /*se obtiene el tamaño de la palabra para que este pase a ser el tamaño del arreglo*/
    cout << "La cantidad de caracteres de tu palabra son: " << n<< "\n";
    char arr[n]; /* se declara el arreglo tipo char*/
    strcpy(arr,palabra.c_str()); /* se utiliza una funcion para convertir un string a un arreglo en tipo char, es decir convertimos la palabra ingresada por el usuario a char*/
    mostrarletras(arr,n);
    codificador(arr,n);
    mostrarcadena(arr,n);
    return 0;
}