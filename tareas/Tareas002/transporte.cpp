#include <iostream>

using namespace std;

int main ()   {
    int edad;
    char tipo_de_boleto;
    int precio_base = 100;
    int precio_con_boleto;

    cout << "¿Cuantos años tienes? ";
    cin >> edad;

    cout << "Seleccione el tipo de boleto (N) Normal, (E) Estudiante, (S) Senior: ";
    cin >> tipo_de_boleto;

    if (edad < 5)  {
        precio_con_boleto = 0;
    }

    else if (tipo_de_boleto == 'E') {
        precio_con_boleto = precio_base / 2.0;
    }

    else if ( edad > 60) {
        precio_con_boleto = precio_base * 0.3;
    }

    else {
        precio_con_boleto = precio_base;
    }

    cout << "El total de su boleto es: " << precio_con_boleto;

    return 0;
}