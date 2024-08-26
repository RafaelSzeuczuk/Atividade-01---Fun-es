#include <iostream>

using namespace std;

bool par(int n)
{
    return (n % 2 == 0 ? true : false);
}

int main()
{
    int num;
    cout << "Digite um numero inteiro: " << endl;
    cin >> num;
    if (par(num))
        cout << "Numero par!" << endl;
    else
        cout << "Numero impar!" << endl;
    return 0;
}
