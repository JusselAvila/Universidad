#include <iostream>
#include <string>
#include <chrono>
#include <thread>

using namespace std;

void mostrarEstado(char posA) {
    cout << "Estado actual:" << endl;
    cout << "Objeto A está en: " << posA << endl;
}

int main() {
    char posA = 'X'; // Posición inicial de A
    char destino; // Punto de destino

    cout << "¡Bienvenido al juego de mover el objeto A entre X y Y!" << endl;

    while (true) {
        mostrarEstado(posA);

        // Solicitar al usuario que elija un destino
        cout << "Elige el destino para mover A (X o Y): ";
        cin >> destino;

        // Validar la entrada
        if (destino != 'X' && destino != 'Y') {
            cout << "Destino no válido. Intenta de nuevo." << endl;
            continue;
        }

        // Lógica de movimiento
        if (posA == 'X' && destino == 'Y') {
            posA = 'Y'; // Mover A a Y
            cout << "Has movido el objeto A a Y." << endl;
            cout << "Esperando un momento antes de poder moverlo de vuelta a X..." << endl;
            
        } else if (posA == 'Y' && destino == 'X') {
            posA = 'X'; // Mover A a X
            cout << "Has movido el objeto A a X." << endl;
            break; // Terminar el juego
        } else {
            cout << "No puedes mover A a " << destino << " desde " << posA << "." << endl;
        }
    }

    cout << "¡Felicidades! Has movido el objeto A de X a Y y luego de vuelta a X." << endl;
    return 0;
}
