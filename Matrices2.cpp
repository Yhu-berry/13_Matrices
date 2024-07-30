//Suma de la diagonal secundaria 
#include <iostream>
using namespace std;

void LeerM(int M[][10],int n);
int main(){
   int M[10][10];
   int n;
   cout<<"El tamaño de la matriz:\t";
   cin>>n;
   LeerM(M,n);
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