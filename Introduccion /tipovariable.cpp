// enteros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <limits>
#include <iomanip>
#include <locale>
using namespace std;

int main() {

    //Manejo de punto decimal y separdor de miles
    locale loc("");
    cout.imbue(loc);
    // 1. Entero (int)
    int numeroEntero = 42;
    cout << "Entero: " << numeroEntero << endl;
    cout << "Rango INT : " << numeric_limits<int>::min() << " a " << numeric_limits<int>::max()<< endl;

    // 2. Entero corto (short int)
    short int numeroCorto = 32000;
    cout << " Entero corto: " << numeroCorto << endl;
    cout << "Rango INT : " << numeric_limits< short int>::min() << " a " << numeric_limits< short int>::max()<<endl;

    // 3. Entero largo (long int)
    long long numeroLargo = 1234567890L;
    cout << "Entero largo: " << numeroLargo << endl;
    cout << "Rango INT : " << numeric_limits<long long>::min() << " a " << numeric_limits<long long>::max()<<endl;
    // 4. Entero sin signo (unsigned int)
    unsigned int numeroSinSigno = 4000000000U;
    cout << "Entero sin signo: " << numeroSinSigno << endl;
    cout << "Rango INT : " << numeric_limits<unsigned int>::min() << " a " << numeric_limits<unsigned int>::max() << endl;
    // 5. Entero corto sin signo (unsigned short int)
    unsigned short int numeroCortoSinSigno = 65000;
    cout << "Entero corto sin signo: " << numeroCortoSinSigno << endl;
    cout << "Rango INT : " << numeric_limits<unsigned short int>::min() << " a " << numeric_limits<unsigned short int>::max() << endl;
    // 6. Entero largo sin signo (unsigned long int)
    unsigned long long numeroLargoSinSigno = 4000000000UL;
    cout << "Entero largo sin signo: " << numeroLargoSinSigno << endl;
    cout << "Rango INT : " << numeric_limits<unsigned long long>::min() << " a " << numeric_limits<unsigned long long>::max() << endl;
    // 7. Entero con signo explícito (signed int)
    signed int numeroConSigno = -42;
    cout << "Entero con signo: " << numeroConSigno << endl;
    cout << "Rango INT : " << numeric_limits<signed int>::min() << " a " << numeric_limits<signed int>::max() << endl;
    // 8. Entero corto con signo explícito (signed short int)
    signed short int numeroCortoConSigno = -32000;
    cout << "Entero corto con signo: " << numeroCortoConSigno << endl;
    cout << "Rango INT : " << numeric_limits<signed short int>::min() << " a " << numeric_limits<signed short int>::max() << endl;
    // 9. Entero largo con signo explícito (signed long int)
    signed long long numeroLargoConSigno = -1234567890L;
    cout << "Entero largo con signo: " << numeroLargoConSigno << endl;
    cout << "Rango INT : " << numeric_limits<signed long long>::min() << " a " << numeric_limits<signed long long>::max() << endl;
    // 10. Entero largo largo (long long int)
    long long int numeroLargoLargo = 123456789012345LL;
    cout << "Entero largo largo: " << numeroLargoLargo << endl;
    cout << "Rango INT : " << numeric_limits<long long int>::min() << " a " << numeric_limits<long long int>::max() << endl;

    int edad;
    cout << "Ingresa tu edad: \n";
    cin >> edad;
    cout << endl;
    cout << "Tu edad es : \n" << edad << endl;

    cout << endl;
    float pi = 3.141632;
    double PI = 3.141632;
    cout << fixed;
    cout << setprecision(2);
    cout << "El valor de pi es \n" << pi << endl;
       
    cout << endl;

    //Preguntar estatura
    
    double estatura;

    cout << "Dame tu estatura: \n";
    cin >> estatura;
    cout << endl;
    cout << "Tu estatura es : \n" << estatura << endl;

    const float velocidadLuz = 3000;



    return 0;
}
