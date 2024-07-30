//Suma de la diagonal secundaria 
#include <iostream>
using namespace std;
//Funcion para leer los elementos de la diagonal secundaria
void LeerM(int M[][10],int n);
//Funcion para sumar los elementos de la diagonal secundaria
int sumDS(int M[][10],int n);
int main(){
   int M[10][10];
   int n;
   
   cout<<"El tamaño de la matriz:\t";
   cin>>n;
   LeerM(M,n);
   //Mostrar la suma de la diagonal secundaria
   cout<<sumDS(M,n);
   return 0;
}

void LeerM(int M[][10],int n){  
    cout<<"Ingrese los elementtos de la matriz:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>M[i][j];
        }
    }
}

int sumDS(int M[][10],int n){
    int S=0;
    for(int i=0;i<n;i++){
        //Va a empezar a contar los j desde la fila 0 hasta n-i-1 
        S+=M[i][n-i-1];
    }
    return S;
}
