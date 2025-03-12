#include <iostream>
using namespace std;

void NumeroABinario(int a)
{
    if (a == 0) {
        cout << "El número en binario es: 0" << endl; 
        return;
    }

    unsigned int b;
    unsigned long long c = 0, d = 1; 

    while (a > 0)
    {
        b = (a % 2); 
        c = c + b * d; 
        a = a / 2; 
        d = d * 10; 
    }

    cout << "El numero en binario es: " << c << endl; 
}
void NumeroAOctal(int a)
{
    if (a == 0) {
        cout << "El número en binario es: 0" << endl; 
        return;
    }

    unsigned int b;
    unsigned long long c = 0, d = 1; 

    while (a > 0)
    {
        b = (a % 8); 
        c = c + b * d; 
        a = a / 8; 
        d = d * 10; 
    }

    cout << "El numero en Octal es: " << c << endl; 
}

void NumeroAHexadecimal(int a)
{
    if (a == 0) {
        cout << "El numero en hexadecimal es: 0" << endl; 
        return;
    }

    string hex = "";

    while (a > 0)
    {
        unsigned long long b = a % 16; 
        if (b < 10) {
            hex = char(b + '0') + hex;
        } else {
            hex = char(b - 10 + 'A') + hex; 
        }
        a = a / 16; 
    }

    cout << "El numero en hexadecimal es: " << hex << endl; 
}

int main()
{
    int a;
    cout << "Ingrese un numero: ";
    cin >> a;
    NumeroAHexadecimal(a); 
    
    return 0;
}
