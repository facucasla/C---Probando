#include<iostream.h>
#include<stdlib.h>
#include <conio.h>

//Año 2015
//Probando C ejemplo simple

//Declaración de Funciones: (Abajo de todo esta el procedimiento de las funciones declaradas fuera del main)
float suma(float n1, float n2, float n3);
float multi(float n1, float n2, float n3);
float promedio(float n1, float n2, float n3);
float max(float n1, float n2, float n3);
float min(float n1, float n2, float n3);

//Fin de Declaración de Funciones.



int main()
{
const int cantnum=3;
int n1=0,n2=0,n3=0,opci=0;

//float suma,promedio,max,min;


			gotoxy(60, 1);
			cout<<"Facundo Millivieri"<<endl;
			gotoxy(30,3);
			cout<<"Menu TP1"<<endl;


		do
		{
			
			
			
			cout<<"\n\n";
			cout<<"Ingrese una opcion:"<<endl;
			cout<<"1 - Suma de los "<<cantnum<<" numeros"<<endl;
			cout<<"2 - Multiplicacion de los "<<cantnum<<" numeros"<<endl;
			cout<<"3 - Promedio de los "<<cantnum<<" numeros"<<endl;
			cout<<"4 - Maximo de los "<<cantnum<<" numeros"<<endl;
			cout<<"5 - Minimo de los "<<cantnum<<" numeros"<<endl;
			cout<<"99 - Salida"<<endl;
			cout<<"Ingrese una opcion: ";
			cin>>opci;
			
			clrscr();
			
			cout<<"\n\n Ingrese el primer numero: ";
			cin>>n1;

			cout<<"\n Ingrese el segundo numero: ";
			cin>>n2;

			cout<<"\n Ingrese el tercer numero: ";
			cin>>n3;
			
			clrscr();
			
			cout<<"\n\n Sus numeros son: "<<n1<<" "<<n2<<" "<<n3;
			cout<<"\n\n";
			switch(opci)
			{
				case 1: 
					cout<<"La suma de los "<<cantnum<<" numeros es: "<<suma(n1,n2,n3)<<endl;
					break;
				case 2:
					cout<<"La multiplicacion de los "<<cantnum<<" numeros es: "<<multi(n1,n2,n3)<<endl;
					break;
				case 3:
					cout<<"El promedio es: "<<promedio(n1,n2,n3)<<endl;
					break;
					
				case 4:
					if(n1 == n2 && n1 == n3)
					{
						cout<<" Los numeros ingresados son todos iguales: "<<n1<<endl;
					}
					else
					{
						cout<<" El maximo de los "<<cantnum<<" es: "<<max(n1, n2, n3)<<endl;
					}
					break;
				case 5:
					if(n1 == n2 && n1 == n3)
					{
						cout<<" Los numeros ingresados son todos iguales: "<<n1<<endl;
					}
					else
					{
						cout<<" El minimo de los "<<cantnum<<" es: "<<min(n1, n2, n3)<<endl;
					}
					break;
					
			}
		}  while (opci!=99);
		cout<<"Salimos del menu";






/*
if(n1>n2 && n1>n3)
{
 max = n1;

	if( n2>n3)
	{
	min = n3;
	}
	else
	{
	min = n2;
	}

}

else
{
if (n2>n1 && n2>n3)
{
	max = n2;

	if ( n3>n1)
	{
	min = n1;
	}
	else
	{
	min = n3;
	}
}

 else
 {
 if (n3>n1 && n3>n2)
 {
 max = n3;

 if ( n2>n1)
 {
 min = n1;
 }
 else
 {
 min = n2;
 }
 }
 }
 }






cout<<"El promedio es: "<<promedio<<endl;
cout<<"El maximo es: "<<max<<endl;
cout<<"El minimo es: "<<min<<endl;

*/
	
	
	
	
	
	
	
	
cout<<endl;
cout<<endl;
cout << "\n\t Haga click en la Cruz para salir del programa...";
getch();

return 0;
} //Fin del Main

//Procedimiento de las Funciones:

float suma(float n1, float n2, float n3)
{
	return n1 + n2 + n3;
}

float multi(float n1, float n2, float n3)
{
	return n1 * n2 * n3;
}

float promedio(float n1, float n2, float n3)
{
	return (n1 + n2 + n3) / 3;
}

float max(float n1, float n2, float n3)
{
	float max;
	if(n1 > n2 && n1 > n3)
	{
		max = n1;
	}
	else if(n2 > n3)
	{
		max = n2;
	}
	else
	{
		max = n3;
	}
	return max;
}

float min(float n1, float n2, float n3)
{
	float min;
	if(n1 < n2 && n1 < n3)
	{
		min = n1;
	}
	else if(n2 < n3)
	{
		min = n2;
	}
	else
	{
		min = n3;
	}
	return min;
}


//Fin del procedimiento de las funciones.
