#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int matriz[n][n];

    for(int i=0;i<n;i++){
        for(int k=0;k<n;k++){
            cin>>matriz[i][k];
        }
    }

    int sumE=0;
    for(int i=0;i<n;i++){
        for(int k=i+1;k<n;k++){
            sumE+=matriz[i][k];
        }
    }

    cout<<"Suma de los elementos de la matriz superior: "<<sumE;
}

