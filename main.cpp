/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>  
#include <cstdlib>  // Para std::rand() y std::srand()  
#include <ctime>    // Para std::time()  

int main() {  
    // Inicializar la semilla para el generador de números aleatorios  
    std::srand(static_cast<unsigned int>(std::time(nullptr)));  

    int numeroSecreto = std::rand() % 100 + 1; // Número aleatorio entre 1 y 100  
    int intento;  
    int intentosRealizados = 0;  

    std::cout << "¡Bienvenido al juego de adivinanza de números!" << std::endl;  
    std::cout << "He elegido un número entre 1 y 100. ¡Intenta adivinarlo!" << std::endl;  

    do {  
        std::cout << "Ingresa tu intento: ";  
        std::cin >> intento;  
        intentosRealizados++;  

        if (intento < numeroSecreto) {  
            std::cout << "El número es más alto. Intenta de nuevo." << std::endl;  
        } else if (intento > numeroSecreto) {  
            std::cout << "El número es más bajo. Intenta de nuevo." << std::endl;  
        } else {  
            std::cout << "¡Felicidades! Has adivinado el número " << numeroSecreto   
                      << " en " << intentosRealizados << " intentos." << std::endl;  
        }  
    } while (intento != numeroSecreto);  

    return 0;  
}