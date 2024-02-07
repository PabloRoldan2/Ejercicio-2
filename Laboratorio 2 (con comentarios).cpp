#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

// Declaraciones de funciones para realizar las operaciones
int NumPar();
int Bisiesto();
int Iguales();
int MayorEdad();
int Calificacion();
void mostrarMenu();

int main() {
    mostrarMenu(); // Muestra el menú al iniciar el programa
    return 0;
}

void mostrarMenu() {
	// Cambia el color del texto y limpia la pantalla
	system("color 8e");
	system("cls");
	
	// Muestra en pantalla el menú de opciones
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

	// Ejecuta la función correspondiente según la opción seleccionada
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

	// Si el usuario no seleccionó salir, vuelve a mostrar el menú
    if (opcion != 6) {
        mostrarMenu();
    } else {
        cout << "Hasta Luego." << endl;
    }
}

// Función para verificar si un número es par
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

// Función auxiliar para determinar si un año es bisiesto
bool esBisiesto(int anio) {
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

// Función para determinar si un año es bisiesto
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

// Función para determinar si dos números son iguales
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

// Función para determinar si una persona es mayor de edad
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

// Función para verificar la aprobación de un examen
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
