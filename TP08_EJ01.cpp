#include <iostream>
using namespace std;

// Declaración de función
double calcularimpuesto( double , double );

//double calcularimpuesto( double valor1, double tasa1);
void mostrarvalor(double);

int main()

{ // Definiendo variables
double tasa;
double impuestoCalculado;
double valor;

// Capturando valores
cout << "Tasa de Impuesto sobre ventas: ";
cin >> tasa;
cout << "\nValor: ";
cin >> valor;

// Ejecución de función  para calculo de impuesto
impuestoCalculado = calcularimpuesto(valor, tasa);

// Mostrando resultados
cout << "Para un valor de : $" << valor << " y una tasa de: " << tasa
<< " el valor de Impuesto sobre Ventas es: $";

// Ejecución de función  para calculo de impuesto
mostrarvalor(impuestoCalculado);

system("pause");
return 0;
}

// Definicion de función calcular impuesto
double calcularimpuesto( double valor1, double tasa1)
{ return valor1 * tasa1/100;
};

// Definicion de función mostrar valor
void mostrarvalor( double valorcalculado)
{ cout << valorcalculado << endl;
};
