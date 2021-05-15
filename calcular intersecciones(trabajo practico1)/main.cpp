#include <iostream>

using namespace std;

int main() {
    float pendiente1,pendiente2,ordenada1,ordenada2,x,y,x_valor,y_valor;
    cout << "ingrese la pendiente de la primera recta" << endl;
    cin  >> pendiente1;
    cout << "ingrese la ordenada al origen de la primera recta" << endl;
    cin  >> ordenada1;
    cout << "ingrese la pendiente de la segunda recta" << endl;
    cin  >> pendiente2;
    cout << "ingrese la ordenada al origen de la segunda recta" << endl;
    cin  >> ordenada2;
        if(pendiente1==pendiente2){
            if(ordenada1==ordenada2){
                 cout << "las rectas son iguales" << endl;
            }
            else{
                 cout << "las rectas son paralelas" << endl;
            }
        }
        else{
            x=pendiente1 - pendiente2;
            y=ordenada2 - ordenada1;
            x_valor=y / x;
            y_valor=pendiente1 * x_valor + ordenada1;



                cout << "la recta se cruza en el punto ( " << x_valor << "," << y_valor << ")" << endl;
            }


    return 0;
}
