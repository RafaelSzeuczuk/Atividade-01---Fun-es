#include <iostream>
using namespace std;

void potencia()
{
    int base, expoente, resul=1;
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

    for(int i=expoente;i>0;i--){
        resul*=base;
    }

    cout<<"O resultado eh de: "<<resul<<endl;
    
}

int main(){
    potencia();
}