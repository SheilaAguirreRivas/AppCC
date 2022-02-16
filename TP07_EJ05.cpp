#include <stdio.h>
#include <iostream>
#include <string>
#include <conio.h>
#include <stdlib.h>
using namespace std;

string cargar_meses(int x);

main()
{
string nomes;
char apenom[50];
int vector[12], total = 0, x=0;
float promedio = 0;
cout<<("\n--------------------------------------------------------------------------------------------------");
cout<<("\n*** Programacion en Lenguaje C                                                                 ***");
cout<<("\n*** TP07_EJ05                                                                                  ***");
cout<<("\n*** Ingresa por teclado Apellido y nombre de vendedor                                          ***");
cout<<("\n*** Agregar a un vector de 12 elementos, las ventas de los 12 meses, sumarla y mostrar total   ***");
cout<<("\n*** TP07_EJ05                                                                         ***");
cout<<("\n------------------------------------------------------------------------------------------------\n");


cout<<("Ingrese Apellido y nombre del vendedor :") ; 
cin.getline(apenom,50);
cout <<("\n");

for (x=0; x<12 ; ++x)
{
nomes =cargar_meses(x);
cout<<("Valor venta para ") << nomes << " : "; 
cin >> vector[x];
cout <<("\n");
}

cout<<("\n---------------------------------------------------------------------------------------------\n");
cout<<("Ventas anuales del vendedor ") << apenom << "\n"; 

for (x=0; x<12 ; ++x)
{
nomes= cargar_meses(x);
cout << "Mes : " << nomes << " - " << vector[x];
cout <<("\n");
total =  total + vector[x];
}


cout<<("\n---------------------------------------------------------------------------------------------\n");
cout<< ("TOTAL : ") <<  total << "\n" ;
cout<<("\n---------------------------------------------------------------------------------------------\n");

return 0;

}

string cargar_meses(int x)
{
string nm;
switch (x)
{
case 0  : nm= "Enero     " ; break;
case 1  : nm= "Febrero   " ; break;
case 2  : nm= "Marzo     " ; break;
case 3  : nm= "Abril     " ; break;
case 4  : nm= "Mayo      " ; break;
case 5  : nm= "Junio     " ; break;
case 6  : nm= "Julio     " ; break;
case 7  : nm= "Agosto    " ; break;
case 8  : nm= "Septiembre" ; break;
case 9  : nm= "Octubre   " ; break;
case 10 : nm= "Noviembre " ; break;
case 11 : nm= "Diciembre " ; break;
}
return nm;
}
