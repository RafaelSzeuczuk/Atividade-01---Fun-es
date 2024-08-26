#include<iostream>
using namespace std;

void fatorial(){
    int x, y=1;
    cout<<"Digite um numero natural: "<<endl;
    cin>>x;
    while(x<1){
        cout<<"Nao eh um numero natural, por favor, digite um numero natural: "<<endl;
        cin>>x;
    }
    for(int i=1;i<=x;i++){
        y*=i;
    }
    cout<<"O fatorial de "<<x<<" eh: "<<y<<endl;
}

int main(){
    fatorial();
}
