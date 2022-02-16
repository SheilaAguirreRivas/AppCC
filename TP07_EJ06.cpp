#include <stdio.h>
#include <iostream>
#include <string>
#include <conio.h>
#include <stdlib.h>
using namespace std;

main()
{

string suc[10];
int  cs=0, x=0;

cout<<("\n--------------------------------------------------------------------------------------------------");
cout<<("\n*** Programacion en Lenguaje C                                                                 ***");
cout<<("\n*** TP07_EJ06                                                                                  ***");
cout<<("\n*** Ingresa por teclado Nombre de las sucursales definidas                                     ***");
cout<<("\n*** Generar vector con los nobres de las 3 sucursales                                          ***");
cout<<("\n*** TP07_EJ06                                                                         ***");
cout<<("\n------------------------------------------------------------------------------------------------\n");

do 
{
cout<< "Ingrese Cantidad de sucursales a habilitar (maximo 10) : " << endl ; 
cin >> cs;
}
while(cs>10 or cs<=0);

cin.ignore();
for (x=0;x<cs;x++)
{
cout<< "Ingrese Nombre sucursal " << x+1 << " : " ; 
getline(cin, suc[x]);
cout <<("\n");

}
/*
cout<<("\n---------------------------------------------------------------------------------------------\n");
cout<<("Ventas anuales del vendedor ") << apenom << "\n"; 

for (x=0; x<12 ; ++x)
{
nomes= cargar_meses(x);
cout << "Mes : " << nomes << " - " << vector[x];
cout <<("\n");
total =  total + vector[x];
}
*/

cout<<("\n------------------------------------------------------------\n");
cout<< "Las sucursales ingresadas son: "  << endl ;
for (x=0;x<cs;x++)
{
cout<< ("Sucursal ") << x+1 << " : " << suc[x] << endl ;
}
cout<<("\n------------------------------------------------------------\n");

return 0;

}

