#include <iostream>

using namespace std;

int main() {
    
    float saldo = 500.00;
    int opcion = 0;
    float cantidad; 

    cout << "--- Bienvenido al Cajero Automatico ---" << endl;
    
    
    while (opcion != 4) {
        
    
        cout << "\n-----------------------------------" << endl;
        cout << "** Menu de Opciones **" << endl;
        cout << "1. Consultar Saldo" << endl;
        cout << "2. Retirar Fondos" << endl;
        cout << "3. Depositar Fondos" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        
        
        cin >> opcion;
        cout << "-----------------------------------" << endl;

        
        switch (opcion) {
            case 1:
                
                cout << " Su saldo actual es: $" << saldo << endl;
                break;

            case 2:
                
                cout << "Ingrese la cantidad a retirar: $";
                cin >> cantidad;
                
                
                if (cantidad > 0 && cantidad <= saldo) {
                    saldo = saldo - cantidad; 
                    cout << " Retiro exitoso. Se retiraron $" << cantidad << endl;
                    cout << " Su nuevo saldo es: $" << saldo << endl;
                } else if (cantidad <= 0) {
                    cout << " La cantidad a retirar debe ser mayor que cero." << endl;
                } 
                else {
                    
                    cout << " Fondos insuficientes." << endl;
                    cout << "Su saldo actual es: $" << saldo << endl;
                }
                break;

            case 3:
                
                cout << "Ingrese la cantidad a depositar: $";
                cin >> cantidad;
                
                
                if (cantidad > 0) {
                    saldo = saldo + cantidad; 
                    cout << " Deposito exitoso. Se depositaron $" << cantidad << endl;
                    cout << " Su nuevo saldo es: $" << saldo << endl;
                } else {
                    cout << " La cantidad a depositar debe ser mayor que cero." << endl;
                }
                break;

            case 4:
                
                cout << " Gracias por usar el Cajero Automatico. Vuelva pronto." << endl;
                break;

            default:
                
                cout << " Opcion no valida. Por favor, seleccione una opcion del 1 al 4." << endl;
                break;
        }
    }

    return 0;
}
