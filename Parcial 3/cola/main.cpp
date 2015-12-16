#include <stdio.h>
#include "cola.h"
using namespace std;
int main()
{
	int opcion;
	while(true){
		cout<<"1 Ingreso de datos a la Cola"<<endl;
		cout<<"2 Mostrar Datos de la cola"<<endl;
		cout<<"3 Eliminar datos de la cola"<<endl;
		cout<<"4 Buscar datos en la cola"<<endl;
		cin>>opcion;
		switch(opcion){
			case 1:{
				ingreso();
				break;
			}
			case 2:{
				mostrar();
				break;
			}
			case 3:{
				eliminar();
				break;
			}
			case 4:{
				buscar();
				break;
			}
		}
	}
return 0;
}
