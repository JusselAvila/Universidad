#include <iostream>
using namespace std;

enum Color {
    Rojo,
    Verde,
    Azul,
    Amarillo
};

void mostrarColor(Color color) {
    switch (color) {
        case Rojo:
            cout << "El color es Rojo." << endl;
            break;
        case Verde:
            cout << "El color es Verde." << endl;
            break;
        case Azul:
            cout << "El color es Azul." << endl;
            break;
        case Amarillo:
            cout << "El color es Amarillo." << endl;
            break;
    }
}

void color()
{
	string colour;
	cout<<"porfavor escriba un color"<<endl;
	getline(cin,colour);
	cout<<colour;
}

int main() {
    color();
    return 0;
}
