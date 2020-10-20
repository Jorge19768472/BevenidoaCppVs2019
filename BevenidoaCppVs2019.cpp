// BevenidoaCppVs2019.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// la web de donde he escogido el coedigo es 
//https://program.webcindario.com/codigos/borland/triangulo-equilatero-rectangulo.html


#include <iostream>

// para no tener que utilizar std::
using namespace std;

int main()

{//sacado de una web de progradores
	/// <summary>
	// cregida de datos
	/// </summary>
	/// <returns></returns>
	cout << "! Bienvenida a C++   progrma de triangulos !\n";
	int a, b, c;

	cout << "\n ingrese el lado a: ";
	cin >> a;

	cout << "\n ingrese el lado b: ";
	cin >> b;
	 
	cout << "\n ingrese el lado c: ";
	cin >> c;
	//codigo de decicion
	if (a + b < c || a + c < b || b + c < a)
	{
		cout << "\n No forma un triangulo";
	}

	else

	{
		if (a == b && a == c && b == c)
		{
			cout << "\nFromarn un triangulo equilatero";
		}
		else
		{
			if (a == b || a == c || b == c)
			{
				
				cout << "\n Froman un triangulo iscoceles";

			}
			else
			{
				if (a* a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
				{
					cout << "\n Froman un triangulo escleno";
				}
			}
				
		}
		{

		}
	}
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
