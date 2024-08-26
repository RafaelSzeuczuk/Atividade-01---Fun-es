#include<iostream>
#include<iomanip>

using namespace std;
void volume(){
    float raio;
    cout<<"Digite o raio da esfera: "<<endl;
    cin>>raio;
    cout<<"O volume eh de: "<<(raio*raio*raio*4*3.14)/3<<endl;
}

int main(){
    volume();
}