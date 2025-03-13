#include <iostream>

using namespace std;

int main()
{

    int num;
    int res = 1;

    cout << "Digite um numero inteiro positivo: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        res = res * i;
    }

    cout << "Resultado: " << res << endl;

    return 0;
}