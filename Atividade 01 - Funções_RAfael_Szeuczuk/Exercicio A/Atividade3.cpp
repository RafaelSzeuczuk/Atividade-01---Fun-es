#include <iostream>
using namespace std;

void soma_intervalo()
{
    int num1, num2, aux, i, j=0;

    cout << "Digite um numero inteiro positivo: " << endl;
    cin >> num1;
    while (num1 <= 0)
    {
        cout << "Nao eh um numero inteiro positivo, por favor, digite outro:  " << endl;
        cin >> num1;
    }
    cout << "Digite um segundo numero inteiro positivo: " << endl;
    cin >> num2;
    while (num2 <= 0)
    {
        cout << "Nao eh um numero inteiro positivo, por favor, digite outro:  " << endl;
        cin >> num2;
    }

    if(num1<num2){
        aux=num1;
        num1=num2;
        num2=aux;
    }


   for(i=num2;i<=num1;i++){
        j=j+i;
   }

   cout<<"Soma dos n numeros existentes entre eles (incluindo os limites do intervalo): "<<j<<endl;
}

int main()
{
    soma_intervalo();
}