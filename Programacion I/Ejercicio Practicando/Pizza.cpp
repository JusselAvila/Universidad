#include <iostream>
using namespace std;
#include <math.h>
#include <stdlib.h>
#include <cstdlib> 


void Pizza(){
	int np, pizza, nt, nts;
    double ntp;

    cout << "Bienvenidos a telepizaa, cuantos son?" << endl;
    // Suponiendo que son 3 personas
    cin >> np; // Cambiado ':' por ';'

    // Y quieren 4 pizzas
    cout << "Cuantas pizzas quieren?" << endl;
    cin >> pizza; // Agregado ';' al final

    // 4*8= 32 slices, esto está en nt
    nt = pizza * 8;

    // Número de pizza por persona es 32/3=10.6
    ntp = static_cast<double>(nt) / np; // Asegúrate de que la división sea de punto flotante

    nts = nt / np; // Esto dará un entero, si quieres el residuo, usa el operador %

    cout << ntp << " y " << nts << endl;

}

void EcuacionSegundoGrado()
{
	float a,b,c,pos,neg,discriminante;
	cout<<"Ingrese a,b,c de la ecuacion de segundo grado"<<endl;
	cin>>a>>b>>c;
	discriminante=(b*b)-(4*a*c);
	pos=(-b+sqrt(discriminante))/(2*a);
	neg=(-b-sqrt(discriminante))/(2*a);
	cout<<"X1 es igual a "<<pos<<" y x2 es igual a "<<neg<<endl;
}

void SumaDeDosNumeros()
{
	float a,b;
	cout<<"Ingrese Dos numeros a ser sumados"<<endl;
	cin>>a>>b;
	cout<<"La suma entre a y b es de : "<<a+b<<endl;
}

void Conversion()
{
	float a;
	cout<<"Ingrese La temperatura en Celcius"<<endl;
	cin>>a;
	cout<<"La temperatura en grados Fahrenheit es: "<< a*1.8+32<<endl;
	
}
void ParImpar()
{
	int a;
	cout<<"Ingrese un numero"<<endl;
	cin>>a;
	if (a%2==0)
	{
		cout<<"El numero "<<a<<" es par"<<endl;
	}
	else
	{
		cout<<"El numero "<<a<<" es impar"<<endl;
	}
}
void Factorial()
{
	unsigned a;
	unsigned int facto;
	cout<<"Ingrese el numero que quiere sacar su factorial"<<endl;
	cin>>a;
	facto=1;
	for(int i=a ; i > 0 ; i-- )
	{
		facto= facto*i;
	}
	cout<<facto<<endl;
}
#include <iostream>
using namespace std;

int main() {
    int a;

    while (true) 
	{ // Bucle infinito que se romperá con un break
		cout<<"Que procedimiento quisieras ver?"<<endl;
        cout << "1. Pizza" << endl;    
        cout << "2. Ecuacion de segundo Grado" << endl;
        cout << "3. Suma De Dos Numeros" << endl;
        cout<< "4. Conversion de Celcius a Fahrenheit"<<endl;
        cout<< "5. Verificar si un numero es par o impar"<<endl;
        cout<< "6. Calcular el factorial de un numero"<<endl;
        cout << "0. Salir" << endl; // Opción para salir
        cout << "Ingrese una opcion: ";
        cin >> a;
        system("cls");

        if (a == 0) 
		{
            cout << "Saliendo del programa..." << endl;
            break; // Salir del bucle
        } 
		else if (a < 0 || a > 6) 
		{
            cout << "Opcion no valida. Intente de nuevo." << endl; // Mensaje de error
        } 
		else 
		{
            switch(a) 
			{
                case 1:
                    Pizza();
                    break;
                    
                case 2:
                    EcuacionSegundoGrado();
                    break;               
                case 3:
                	SumaDeDosNumeros();
                	break;
                case 4:
                	Conversion();
                	break;
                case 5:
                	ParImpar();
                	break;
                case 6:
                	Factorial();
                	break;
            }
            system("pause");
            system("cls");
        
        }
    }

    return 0;
}