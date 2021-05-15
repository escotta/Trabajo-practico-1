#include <iostream>

using namespace std;

int main()
{
    float velocidad_medida,velocidad_calculada;
        cout << "ingrese variable a calcular(km/h)" << endl;
        cin  >> velocidad_medida;
        velocidad_calculada=velocidad_medida*1/3,6;

        cout << "la velocidad en m/s es de " << velocidad_calculada  << endl;
    return 0;
}
