//Estructura de Datos y Algoritmos ISW-305
//Facilitador Maikel Aparicio
//1er Seminario, Ordenar listas, Equipo II
//Sustentado por: Abraham Pineda, Teddy Paulino, Jose Ruiz y Jose Anibal Medina

#include <iostream>				//Declaracion de las librerias que estaremos utilizando
#include <stdlib.h>		

using namespace std;

struct nodo {
	int dato;				//En dicha variable guardaremos los contenidos de los nodos
	struct nodo *siguiente;			//Este es el puntero Siguiente				
};

main(){
	struct nodo *primero;			//Asignado al primer nodo
	struct nodo *actual	;		//Asignado a los nuevos nodos que se van creando
	primero = NULL;				//Declaramos PRIMERO como NULL
	int dato;				//Variable donde almanecaremos los datos 
	int cant;				//Variable donde solicita la cantidad de datos a digitar
	int i=1;				//Variable del contador que crea los nodos
	cout <<"Digitar cantidad de nodos: ";	//Imprimir por pantalla pedido de digitar cantidad de nodos
	cin>>cant;				//Solicitamos la cantidad de nodos que se desea
	
	while(i<=cant){
	actual=(struct nodo*)malloc(sizeof(struct nodo));
	actual->siguiente=primero;		//Su finalidad es que actual tome el valor de primero para ir creando los demas nodos de forma ordenada 
	cout<<"Digitar datos: ";		//Imprimir por pantalla pedido de digitar datos
	cin>>dato;				//Solicitamos de entrada de datos para los nodos
	actual->num=dato;			//Se pasa el dato digitado a la variable NUM
	primero=actual;				//El apuntador PRIMERO pasa a la posicion de ACTUAL
	i++;
	}
	
	//Linea de Codigo que nos permitira imprimir los datos digitados
	cout<<"Listado de Datos: ";		//Imprimimos por pantalla titulo Listado de Datos asi como cada uno de los datos digitados.
	while(actual!=NULL){			//El apuntador nodo ira al siguiente hasta encontrar NULL y detenerse
	cout << actual->num << ", ";	
	actual=actual->siguiente;
	}
	
	system("pause>>NULL");	
	
};
