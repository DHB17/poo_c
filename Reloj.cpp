#include <iostream>
#include <ctime>
#include <thread>   // para sleep
#include <chrono>   // para duración

int main() {
    std::cout << "Iniciando cuenta regresiva de 2 horas, 10 minutos y 20 segundos...\n";

    // Tiempo total en segundos
    int horas = 2;
    int minutos = 10;
    int segundos = 20;
    int total_segundos = horas * 3600 + minutos * 60 + segundos;

    // Esperar el tiempo completo (esto es bloqueante, no muestra nada durante la espera)
    std::this_thread::sleep_for(std::chrono::seconds(total_segundos));

    std::cout << "\n¡Tiempo cumplido!\n";
    std::cout << "Mostrando hora actual en tiempo real:\n\n";

    // Bucle infinito que actualiza la hora cada segundo
    while (true) {
        // Obtener la hora actual
        time_t tiempo_actual = time(nullptr);
        tm* hora_local = localtime(&tiempo_actual);

        // Limpiar la pantalla (en Windows usa "cls", en Linux/Mac "clear")
        // Esto solo funciona en consola, puede que no funcione igual en todos los entornos
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif

        // Mostrar la hora
        std::cout << "Hora actual: "
                  << (hora_local->tm_hour < 10 ? "0" : "") << hora_local->tm_hour << ":"
                  << (hora_local->tm_min < 10 ? "0" : "") << hora_local->tm_min << ":"
                  << (hora_local->tm_sec < 10 ? "0" : "") << hora_local->tm_sec << std::endl;

        // Esperar 1 segundo
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}
