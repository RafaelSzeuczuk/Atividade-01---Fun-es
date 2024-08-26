#include<iostream>
#include<iomanip>

using namespace std;
float volume(float raio){
    return((raio*raio*raio*4*3.14)/3);
}

int main(){
      float raio;
    cout<<"Digite o raio da esfera: "<<endl;
    cin>>raio;
    cout<<"O volume eh de: "<<volume(raio)<<endl;
}