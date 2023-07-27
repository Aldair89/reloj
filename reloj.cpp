#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>

using namespace std;

int main() {
    // Ciclo infinito para actualizar el reloj
    while (true) {
        // Obtener la hora actual del sistema
        time_t now = time(0);
        tm* localTime = localtime(&now);

        // Obtener las componentes de la hora
        int horas = localTime->tm_hour;
        int minutos = localTime->tm_min;
        int segundos = localTime->tm_sec;

        // Mostrar la hora en el formato HH:MM:SS
        cout << "\r";
        cout << "Hora actual: ";
        cout << (horas < 10 ? "0" : "") << horas << ":";
        cout << (minutos < 10 ? "0" : "") << minutos << ":";
        cout << (segundos < 10 ? "0" : "") << segundos;
        cout << flush;

        // Esperar 1 segundo antes de actualizar el reloj
        this_thread::sleep_for(chrono::seconds(1));
    }

    return 0;
}
