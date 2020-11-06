//Estructura de Datos y Algoritmos ISW-305
//Facilitador Maikel Aparicio
//1er Seminario, Ordenar listas, Equipo II
//Sustentado por: Abraham Pineda, Teddy Paulino, Jose Ruiz y Jose Anibal Medina

//ORDENAMIENTO POR INSERCION 

#include<iostream>

using namespace std ;
//En esta seccion estaremos solicitando la cantidad de numeros que queremos que tenga nuestra lista y a su vez 
//mendiante la Clase CIN recogeremos la cantidad solicitada

main(){
 int Num;												//Declaramos una variable tipo entera donde ingresaremos la cantidad de números que queramos ingresar a la lista
 int L; 
 int Posicion;
 int Temporal;
 cout<<"...:::ORDENAMIENTO POR INSERCION:::...\n"; 
 cout<<"Digite cantidad de posiciones de su lista:";	//Mostramos en  pantalla pedido de digitar cantidad de numeros para la lista
 cin>> Num;												//Recogemos la cantidad solicitada
 int Lista[Num];
 
 //EN ESTA SECCION PROCEDEMOS A LLENAR NUESTRA LISTA
	cout<<"Digite los numero para la Lista:\n";
		for(int L=0; L < Num; L++){							//Iniciamos nuestro Buble FOR declarando el entero L
  			cin>>Lista[L];										//Recogemos los datos para nuestra lista en la posicion L
 }
 
 //Utilizando el Algoritmo por Insercion
 //EN ESTA SECCION PROCEDEMOS A ORGANIZAR LOS NUMEROS DIGITADOS EN NUESTRA LISTA UTILIZANDO EL BUCLE FOR
	for(L=0; L < Num; L++){							//Este FOR nos va a leer todas las posiciones desde L=0 hasta que sean menor a NUM
  		Posicion = L;
  		Temporal = Lista[L];
  		while ((Posicion>0) && (Lista [Posicion-1 ]> Temporal)){
  			Lista[Posicion] = Lista[Posicion-1];
  			Posicion--;
		  }
  		Lista[Posicion] = Temporal;
 	}
 
//EN ESTA SECCION PROCEDEMOS A MOSTRAR NUESTRA LISTA ORDENADA
 	cout<<"Lista ordenada mediante Metodo por Insercion:"<<endl;	//Mostramos en  pantalla pedido de digitar cantidad de numeros para la lista-
 	cout<<"...:::Ordenados de Forma Ascendente:::..."<<endl;
 		for( L=0 ; L < Num; L++){	
  			cout<< Lista [L] <<endl;  
 }
 
 return 0;
system("pause>>NULL"); 
}
