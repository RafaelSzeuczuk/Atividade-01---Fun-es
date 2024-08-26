#include<iostream>
using namespace std;

void par(){
    int x;
    cout<<"Digite um numero inteiro: "<<endl;
    cin>>x;
    if(x%2==0){
        cout<<"Eh par!"<<endl;
    }
    else{
        cout<<"Nao eh par!"<<endl;
    }
}

int main(){
    par();

}