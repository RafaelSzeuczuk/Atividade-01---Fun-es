#include<iostream>
using namespace std;

float temperatura(float c){
    return(c * 9/5 + 32);
}
int main(){
    int celsius;
    cout<<"Digite uma temperatura em Celsius: "<<endl;
    cin>>celsius;
    cout<<"Essa temperartura em Fahrenheit eh de: "<<temperatura(celsius)<<endl;
}