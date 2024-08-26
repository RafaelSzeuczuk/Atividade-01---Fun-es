#include<iostream>
using namespace std;

float area(float raio){
    return(3.14*raio*raio);
}

int main(){
    float raio;
    cout<<"Digite o raio da circunferencia: "<<endl;
    cin>>raio;
    cout<<"A area eh de: "<<area(raio)<<endl;
}