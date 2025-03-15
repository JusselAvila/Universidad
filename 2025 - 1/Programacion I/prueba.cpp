#include <iostream>
#include <string>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    
    if (n1 < 0 || n2 < 0){
         cout << "0" << endl;
    } else {
        int S = n1 + n2;
        string lenght = to_string(S);
        int cantdig = lenght.size();
        int mult = S * cantdig;
        cout << "La suma de los dos enteros es " << n1 << " + " << n2 << " = " << S << ". Los numeros de digitos de la suma " << S << " es igual a " << cantdig << ". Entonces, la multiplicacion " << cantdig << " * " << S << " = " << mult << endl;
    }
    return 0;
}
