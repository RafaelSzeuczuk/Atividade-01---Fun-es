#include <iostream>

using namespace std;

bool multiplo_4 (int n){
   return (n % 4 == 0 ? true : false);
}

int main(){
   int num;
   cout<<"Digite um numero inteiro: "<<endl;
   cin >> num;
   if (multiplo_4(num)){
    	      cout<<"Eh multiplo de 4!"<<endl;
    }
    else{
        cout<<"Nao eh multiplo de 4!"<<endl;
    }
}
