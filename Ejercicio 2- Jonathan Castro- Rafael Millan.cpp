//2) Realice una calculadora que permita al usuario elegir entre sumar, restar, multiplicar y dividir en un menu. No puede usar funciones ni arreglos
#include <iostream>
using namespace std;
int main() {
    int op=0;
    double num1, num2, resultado;
     while (true){
         cout<<"calculadora"<<endl;
         cout<<"1.suma"<<endl;
         cout<<"2.resta"<<endl;
         cout<<"3.multiplicacion"<<endl;
         cout<<"4.division"<<endl;
         cout<<"5.salir"<<endl;
         cout<<"elige una opcion:";
         cin>>op;
         
         if(op==5){
             break;
         }
         cout<<"introduce el primer numero:";
         cin>>num1;
         cout<<"introduce el segundo numero:";
         cin>>num2;
         
         switch(op){
             case 1:
             resultado= num1+num2;
             cout<<"resultadado es:"<<resultado<<endl;
            break;
            
            case 2:
            resultado= num1-num2;
            cout<<"resultado es:"<<resultado<<endl;
            break;
            
            case 3:
            resultado= num1*num2;
            cout<<"resultado es:"<<resultado<<endl;
            break;
            
            case 4:
                if (num2 != 0) {
                    resultado = num1 / num2;
                    cout << "El resultado es: " << resultado << endl;
                } else {
                   
                    cout << "**ERROR:** Division por cero no permitida." << endl;
                }
                break;
            
         
         }
         
     }
   cout<<"Gracias por usar esta calculadora."<<endl;
    
    return 0;
}
