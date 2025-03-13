#include <iostream>
#include <string>

using namespace std;

string frase;
int contador = 0;

int main()
{

    cout << "Digite uma frase: ";
    getline(cin, frase);

    for (char c : frase)
    {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            contador++;
        }
    }

    cout << "Numero de vogais na frase: " << contador << endl;

    return 0;
}