#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int NumPar();
int Bisiesto();
int Iguales();
int MayorEdad();
int Calificacion();
void mostrarMenu();

int main() {
    mostrarMenu();
    return 0;
}

void mostrarMenu() {
	system("color 8e");
	system("cls");
    int opcion;
    cout << "--------------Menu-----------------\n";
    cout << "1. Verificar si un numero es par\n";
    cout << "2. Determinar si un anio es bisiesto\n";
    cout << "3. Determinar si dos numeros son iguales\n";
    cout << "4. Determinar si es mayor de edad\n";
    cout << "5. Verificar aprobacion de examen\n";
    cout << "6. Salir\n";
    cout << "-----------------------------------\n";
    cout << "Seleccione una opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            NumPar();
            break;
        case 2:
            Bisiesto();
            break;
        case 3:
            Iguales();
            break;
        case 4:
        	MayorEdad();
        	break;
        case 5:
        	Calificacion();
        	break;
        case 6:
        	system("cls");
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "Error. Intente nuevamente." << endl;
            system("pause");
    }

    if (opcion != 6) {
        mostrarMenu();
    } else {
        cout << "Hasta Luego." << endl;
    }
}


int NumPar() {
	system("cls");
    int numero;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "El numero ingresado es par." << endl;
    } else {
        cout << "El numero ingresado es impar." << endl;
    }
    system("pause");
    return 0;
}


bool esBisiesto(int anio) {
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

int Bisiesto() {
    system("cls");
	int anio;

    cout << "Ingrese un anio: ";
    cin >> anio;

    if (esBisiesto(anio)) {
        cout << "El anio ingresado es bisiesto." << endl;
    } else {
        cout << "El anio ingresado no es bisiesto." << endl;
    }
	system("pause");
    return 0;
}


int Iguales() {
    system("cls");
    int num1, num2;
    
    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    if (num1 == num2) {
        cout << "Los numeros ingresados son iguales." << endl;
    } else {
        cout << "Los numeros ingresados son diferentes" << endl;
    }
	system("pause");
    return 0;
}

int MayorEdad() {
	system("cls");
    int edad;

    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad >= 18) {
        cout << "Es mayor de edad." << endl;
    } else {
        cout << "No es mayor de edad." << endl;
    }
	system("pause");
    return 0;
}

int Calificacion() {
	system("cls");
    int nota;

    cout << "Ingrese la nota del estudiante: ";
    cin >> nota;

    if (nota >= 60) {
        cout << "El estudiante aprobo el examen." << endl;
    } else {
        cout << "El estudiante reprobo el examen." << endl;
    }
	system("pause");
    return 0;
}
