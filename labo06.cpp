#include <iostream>
using namespace std;
int main()
{
    int n, Z = 1, X = 0, y = 1;

    cout << "Programa que imprima los primeros 'n' numeros de la serie Fibonachi\n";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        Z = X + y;
        X = y;
        y = Z;
        cout << Z;
    }
}
