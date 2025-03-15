#include <iostream>
using namespace std;
#include <cstdlib> 


// Función que convierte un número decimal a binario
void NumeroABinario(int a) {
    unsigned int b;
    unsigned long long c = 0, d = 1; 

    while (a > 0) {
        b = (a % 2); 
        c = c + b * d; 
        a = a / 2; 
        d = d * 10; 
    }

    cout << "El numero en binario es: " << c << endl; 
}

// Función que convierte un número decimal a octal
void NumeroAOctal(unsigned int a) {
    if (a == 0) {
        cout << "El numero en octal es: 0" << endl; 
        return;
    }

    unsigned int b;
    unsigned long long c = 0, d = 1; 

    while (a > 0) {
        b = (a % 8); 
        c = c + b * d; 
        a = a / 8; 
        d = d * 10; 
    }

    cout << "El numero en octal es: " << c << endl; 
}

// Función que convierte un número decimal a hexadecimal
void NumeroAHexadecimal(unsigned int a) {
    if (a == 0) {
        cout << "El numero en hexadecimal es: 0" << endl; 
        return;
    }

    string hex = "";

    while (a > 0) {
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

// Transformar Binario 10001010 a decimal
unsigned int BinarioADecimal(long long b) {
    int a = 0, c = 1;

    while (b > 0) {
        int d = b % 10;
        a = a + d * c;
        b = b / 10;
        c = c * 2;
    }
    return a;
}


int main() {
	    
		int a=2019, s=0;
	    long long b = 10001010; 
	    unsigned int BinarioUno = BinarioADecimal(b); 

        while (true) {
        cout << "¿Que procedimiento quisieras ver?" << endl;
        cout << "1. Transformar 2019 en Base Binaria" << endl;    
        cout << "2. Transformar 2019 en Base Octal" << endl;
        cout << "3. Transformar 2019 en Base Hexadecimal" << endl;
        cout << "4. Transformar 10001010 (Binario) en Base Hexadecimal" << endl;
        cout << "5. Transformar 10001010 (Binario) en Base Octal" << endl;
        cout << "6. Transformar 10001010 (Binario) en Base Decimal" << endl;
        cout << "0. Salir" << endl; // Opción para salir
        cout << "Ingrese una opcion: ";
        cin >> s;
        system("cls");

        if (s == 0) 
		{
            cout << "Saliendo del programa..." << endl;
            break; // Salir del bucle
        } 
		else if (s < 0 || s > 6) 
		{
            cout << "Opcion no valida. Intente de nuevo." << endl; // Mensaje de error
        } 
		else 
		{
            switch(s) 
			{
                case 1:
                    NumeroABinario(a);
                    break;
                case 2:
                    NumeroAOctal( a);
                    break;               
                case 3:
                	NumeroAHexadecimal( a);
                	break;
                case 4:
					NumeroAHexadecimal(BinarioUno);
                	break;
                case 5:
                	NumeroAOctal(BinarioUno);
                	break;
                case 6:
                 	cout<<BinarioUno<<endl;
                	break;
            }
            system("pause");
            system("cls");
        
        }
    }

    return 0;
}
