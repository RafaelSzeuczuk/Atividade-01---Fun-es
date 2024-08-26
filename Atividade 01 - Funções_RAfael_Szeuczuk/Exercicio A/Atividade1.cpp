#include<iostream>
using namespace std;

void multiplo_4(){
    int x;
    cout<<"Digite um numero inteiro: "<<endl;
    cin>>x;
    if(x%4==0){
        cout<<"Eh multiplo de 4!"<<endl;
    }
    else{
        cout<<"Nao eh multiplo de 4!"<<endl;
    }
}

int main(){
    multiplo_4();

}