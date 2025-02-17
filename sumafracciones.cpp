// Derek Roman Rodriguez
// 17 de febrero de 2025
// 801-24-1459

#include <iostream>

using namespace std;

int main() {
    int num1, den1, num2, den2;
    char slash;

    //proposito del programa
    cout << "Este programa suma dos fracciones.\n";
    
    cout << "Entre la primera fracción en el formato a/b: ";
    cin >> num1 >> slash >> den1;

    cout << "Entre la segunda fracción en el formato a/b: ";
    cin >> num2 >> slash >> den2;

    // calculo de la suma de fracciones
    int num_resultado = num1 * den2 + num2 * den1;
    int den_resultado = den1 * den2;

    cout << "La suma es " << num_resultado << "/" << den_resultado << ".\n";

    return 0;
}