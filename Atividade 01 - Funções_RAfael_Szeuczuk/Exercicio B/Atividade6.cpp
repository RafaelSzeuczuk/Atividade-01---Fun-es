#include <iostream>
using namespace std;

int potencia(int base, int expoente)
{
    int  resul=1;
    for(int i=expoente;i>0;i--){
        resul*=base;
    }

    return(resul);
    
}

int main(){
        int base, expoente;
    cout << "Digite a base da potencia: " << endl;
    cin >> base;
    while (base < 0){
        cout << "Digite um valor maior que 0!" << endl;
        cin >> base;
    }

    cout << "Digite o expoente da potencia: " << endl;
    cin >> expoente;
    while (expoente < 0){
        cout << "Digite um valor maior que 0!" << endl;
        cin >> expoente;
    }
 cout<<"O resultado eh de: "<< potencia(base,expoente)<<endl;
   
}