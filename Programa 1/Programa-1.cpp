// Elabore programas que muestre un menú de productos y retorne el precio del producto seleccionado:
// Programa 1: Utilice if-else
// Nota. En ambos programas utilice un bucle/loop (while, do-while ó for) para mantener visible el menú hasta que el usuario decida sali

#include <iostream>

using namespace std;

int main() {
    int opcion;
    int precio = 0;

    do {
        cout << "Menu de Productos:\n";
        cout << "1. Torta - $10\n";
        cout << "2. Palomitas - $20\n";
        cout << "3. Agua - $5\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion (1-4): ";
        cin >> opcion;

        if (opcion == 1) {
            precio = 45;
            cout << "Has seleccionado la Torta, Precio: $" << precio << endl;
        } else if (opcion == 2) {
            precio = 20;
            cout << "Has seleccionado las Palomitas, Precio: $" << precio << endl;
        } else if (opcion == 3) {
            precio = 12;
            cout << "Has seleccionado el Agua, Precio: $" << precio << endl;
        } else if (opcion == 4) {
            cout << "Saliendo del programa.\n";
        } else {
            cout << "Opcion invalida. Por favor, intente de nuevo.\n";
        }

    } while (opcion != 4);

    return 0;
}