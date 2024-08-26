#include<iostream>
using namespace std;

bool bissexto(int ano){
    if((ano%4==0)&&(ano%100!=0)||(ano%400==0)){
        return(true);
    }
    else{
        return(false);
    }
}

int main(){
    int ano;
    cout<<"Digite um ano para verificar se ele eh bissext0"<<endl;
    cin>>ano;
    if(bissexto(ano)){
        cout<<"Eh bissexto"<<endl;
    }
    else{
        cout<<"Nao eh!"<<endl;
    }
}