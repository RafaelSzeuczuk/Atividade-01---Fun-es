#include <iostream>
using namespace std;

int fatorial(int x)
{
    int y = 1;
    for (int i = 1; i <= x; i++)
    {
        y *= i;
    }
    return(y);
}

int main()
{
    int x;
    cout << "Digite um numero natural: " << endl;
    cin >> x;
    while (x < 1)
    {
        cout << "Nao eh um numero natural, por favor, digite um numero natural: " << endl;
        cin >> x;
    }

    cout << "O fatorial de " << x << " eh: " << fatorial(x)<< endl;
}
