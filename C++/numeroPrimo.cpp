#include <iostream>

using namespace std;

int main(){
    int num;
    bool ehPrimo = true;
    
    cout << "Digite um número inteiro positivo: ";
    cin >> num;
    
    if(num <= 1){
        ehPrimo = false;
}
    else{
        for(int i = 2; i < num; i++){
            if(num % i == 0){
                ehPrimo = false;
                break;
            }
        }
    }
    
    if(ehPrimo){
        cout << num << " é um número primo" << endl;
    }
    else{
        cout << num << " não é um número primo" << endl;
    }
    
    return 0;
}