#include <iostream>
using namespace std;

// Función que verifica si un número es primo
bool primo(int a) {
    if (a < 2) {
        return false; // Números menores que 2 no son primos
    }
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            return false; // Si es divisible por i, no es primo
        }
    }
    return true; // Si no se encontró ningún divisor, es primo
}

// Función que suma los primeros n números primos
int sumaPrimos(int n) {
    int suma = 0;
    int contador = 0; // Contador de números primos encontrados
    int i = 2; // Comenzar desde el primer número primo

    while (contador < n) { // Mientras no hayamos encontrado n primos
        if (primo(i)) {
            suma += i; // Sumar el número primo a la suma
            contador++; // Incrementar el contador de primos encontrados
        }
        i++; // Probar el siguiente número
    }
    return suma; // Devolver la suma de los primeros n números primos
}

int main() {
    int n;

    cout << "Ingrese la cantidad de números primos a sumar: ";
    cin >> n;

    int result = sumaPrimos(n); // Llamar a la función para sumar los primeros n primos
    cout << "La suma de los primeros " << n << " números primos es: " << result << endl;

    return 0;
}