#include <iostream>  // Añadimos la librería para las operaciones de entrada y salida
#include <thread>    // Inclou la llibreria per a la gestió de fils

using namespace std;  // Namespace utiliza el espacio de los nombres std para evitar escribir std:: muchas veces

// Función para imprimir los número impares
void imprimirImpares() {
    for (int i = 1; i <= 10; i += 2) {  // Itera desde el número 1 hasta el 10, incrementando de 2 en 2
        cout << i << " ";               // Imprime el número impar
    }
}

// Función para imprimir los números pares
void imprimirPares() {
    for (int i = 2; i <= 10; i += 2) {  // Itera desde el 2 hasta el 10, incrementado de 2 en 2
        cout << i << " ";               // Imprime el número par
    }
}

int main() {
    // El código siguiente crea los hilos
    thread hilo1(imprimirImpares);  // Crea un hilo que ejcuta la función imprimirImpares
    thread hilo2(imprimirPares);    // Crea un hilo que ejcuta la función imprimirPares

    // Espera que los hilos acaben
    hilo1.join();  // Espera que el hilo 1 acabe su ejecución
    hilo2.join();  // Espera que el hilo 2 acabe su ejecución

    return 0;  // Fin del programa
}
