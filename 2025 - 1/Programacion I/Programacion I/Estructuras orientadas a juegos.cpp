#include <iostream>
#include <string>
using namespace std;

enum Object { NONE, GOAT, WOLF, LETTUCE };
enum Location { A, B };

struct State {
    Location farmer;
    Location goat;
    Location wolf;
    Location lettuce;
};

void printState(const State& state) {
    cout << "Estado actual:\n";
    cout << "Granjero está en la isla " << (state.farmer == A ? "A" : "B") << endl;
    cout << "Cabra está en la isla " << (state.goat == A ? "A" : "B") << endl;
    cout << "Lobo está en la isla " << (state.wolf == A ? "A" : "B") << endl;
    cout << "Lechuga está en la isla " << (state.lettuce == A ? "A" : "B") << endl;
    cout << "------------------------\n";
}

bool isValidState(const State& state) {
    // Verifica si la cabra está con el lobo o la lechuga sin el granjero
    if ((state.goat == state.wolf && state.farmer != state.wolf) ||
        (state.goat == state.lettuce && state.farmer != state.lettuce)) {
        return false;
    }
    return true;
}

void transport(State& state, Object object) {
    // Transporta el objeto seleccionado
    if (object == GOAT) {
        state.goat = (state.goat == A) ? B : A;
    } else if (object == WOLF) {
        state.wolf = (state.wolf == A) ? B : A;
    } else if (object == LETTUCE) {
        state.lettuce = (state.lettuce == A) ? B : A;
    }
    // Mueve al granjero
    state.farmer = (state.farmer == A) ? B : A;
}

int main() {
    State state = { A, A, A, A }; // Inicializa el estado: todos en A
    printState(state);

    while (state.goat == A || state.wolf == A || state.lettuce == A) {
        cout << "Elige un objeto para transportar (1: Cabra, 2: Lobo, 3: Lechuga, 0: Salir): ";
        int choice;
        cin >> choice;

        if (choice == 0) {
            cout << "Saliendo del juego." << endl;
            break;
        }

        Object object = NONE;
        switch (choice) {
            case 1: object = GOAT; break;
            case 2: object = WOLF; break;
            case 3: object = LETTUCE; break;
            default: cout << "Opción no válida. Intenta de nuevo." << endl; continue;
        }

        // Transporta el objeto
        transport(state, object);
        // Verifica si el estado es válido
        if (!isValidState(state)) {
            cout << "¡Acción no válida! Has dejado a la cabra con el lobo o la lechuga." << endl;
            // Revertir el movimiento
            state.farmer = (state.farmer == A) ? B : A; // Mover al granjero de vuelta
            if (object == GOAT) {
                state.goat = (state.goat == A) ? B : A;
            } else if (object == WOLF) {
                state.wolf = (state.wolf == A) ? B : A;
            } else if (object == LETTUCE) {
                state.lettuce = (state.lettuce == A) ? B : A;
            }
        } else {
            printState(state);
        }
    }

    if (state.goat == B && state.wolf == B && state.lettuce == B) {
        cout << "¡Felicidades! Has transportado todos los objetos a la isla B." << endl;
    }

    return 0;
}
