#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double cel, fah, kel;
    
    cout << "Digite a temperatura em graus Celsius: ";
    cin >> cel;
    
    fah = ((cel * 9) / 5) + 32;
    kel = cel + 273.15;
    
    cout << fixed << setprecision(2);
    cout << "Temperatura em Fahrenheit: " << fah << endl;
    cout << "Temperatura em Kelvin: " << kel << endl;
    
    return 0;
}