#include <iostream>
using namespace std;

int main() {
        int horai, horaf;
        cin >> horai >> horaf;
        
        if(horai < 0 || horaf > 24){
            cout << "Las horas deben estar entre 0 y 24!" << endl;
        } else if(horai == horaf){
            cout << "Que extraño, no has alquilado tu bicicleta por mucho tiempo!" << endl;
        } else if (horaf < horai){
                cout << "Que extraño, el inicio del alquiler es después del final..." << endl;
        } else {
            int horas1 = 0, horas2 = 0;
            if (horai >= 0 && horaf <= 24){
            if(horai >= 0 && horaf <= 7){
            horas1 = horaf - horai;
            }
        
            if(horai >= 7 && horaf <= 17){
            horas2 = horaf - horai;
            }
        
            if(horai >= 17 && horaf <= 24){
            horas1 = horaf - horai;
            }
        
            if ((horai >= 0 && horai <= 7) && (horaf >= 7 && horaf <= 17)){
            horas1 = 7 - horai;
            horas2 = horaf - 7;
            }
        
            if ((horaf >= 7 && horaf <= 17) && (horai >= 0 && horaf <= 7)){
            horas1 = horaf - 17;
            horas2 = 17 - horai;
            }
        
            if ((horai >= 0 && horai <= 7) && (horaf >= 17 && horaf <= 24)){
            horas1 = (7 - horai) + (horaf - 17);
            horas2 = 10;
            }
        
            cout << "Has alquilado una bicicleta por" << endl;
            if (horas1 == 0){
            } else {
            cout << horas1 << " hora(s) con el tarifario de 1 boliviano(s)" << endl;
            }
        
            if (horas2 == 0){
            } else {
            cout << horas2 << " hora(s) con el tarifario de 2 boliviano(s)" << endl;
            }
        
            int total = (horas1) + (horas2 * 2);
        
            cout << "El monto total a pagar es de " << total << " bolivaino(s).";
            }
        }
        
       
       
    return 0;
}
