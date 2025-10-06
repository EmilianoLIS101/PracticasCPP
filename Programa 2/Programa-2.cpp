// Elabore programas que muestre un menú de productos y retorne el precio del producto seleccionado:
// Programa 2: Utilice switch
// Nota. En ambos programas utilice un bucle/loop (while, do-while ó for) para mantener visible el menú hasta que el usuario decida sali

#include <iostream>

using namespace std;

int main (){
    int opcion;
    int precio = 0;

    do {
        cout << "Menu de Productos:\n";
        cout << "1. Torta\n";
        cout << "2. Palomitas\n";
        cout << "3. Agua\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion (1-4): ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                precio = 45;
                cout << "Has seleccionado la Torta, Precio: $" << precio << endl;
                break;
            case 2:
                precio = 20;
                cout << "Has seleccionado las Palomitas, Precio: $" << precio << endl;
                break;
            case 3:
                precio = 12;
                cout << "Has seleccionado el Agua, Precio: $" << precio << endl;
                break;
            case 4:
                cout << "Saliendo del programa.\n";
                break;
            default:
                cout << "Opcion invalida. Por favor, intente de nuevo.\n";
        }
    } while (opcion != 4);

    return 0;
}