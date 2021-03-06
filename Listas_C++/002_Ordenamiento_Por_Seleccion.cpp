//Estructura de Datos y Algoritmos ISW-305
//Facilitador Maikel Aparicio
//1er Seminario, Ordenar listas, Equipo II
//Sustentado por: Abraham Pineda, Teddy Paulino, Jose Ruiz y Jose Anibal Medina

//ORDENAMIENTO POR SELECCION 

#include<iostream>

using namespace std ;
//En esta seccion estaremos solicitando la cantidad de numeros que queremos que tenga nuestra lista y a su vez 
//mendiante la Clase CIN recogeremos la cantidad solicitada

main(){
 int Num;												//Declaramos una variable tipo entera donde ingresaremos la cantidad de números que queramos ingresar a la lista
 int Temporal;
 int Menor;
 cout<<"...:::ORDENAMIENTO POR SELECCION:::...\n";
 cout<<"Digite cantidad de posiciones de su lista:";	//Mostramos en  pantalla pedido de digitar cantidad de numeros para la lista
 cin>> Num;												//Recogemos la cantidad solicitada
 int Lista[Num];
 
 //EN ESTA SECCION PROCEDEMOS A LLENAR NUESTRA LISTA
 cout<<"Digite los numero para la Lista:\n";
 for(int L=0; L < Num; L++){							//Iniciamos nuestro Buble FOR declarando el entero L
  cin>>Lista[L];										//Recogemos los datos para nuestra lista en la posicion L
 }
 
 //EN ESTA SECCION PROCEDEMOS A ORGANIZAR LOS NUMEROS DIGITADOS EN NUESTRA LISTA UTILIZANDO EL BUCLE FOR
	for(int L=0; L < Num; L++){							//Este FOR nos va a leer todas las posiciones desde L=0 hasta que sean menor a NUM
  		Menor = L;
 		for(int C=L+1; C <Num; C++){							//Este FOR nos va a leer el numero posterior a L y va en aumento de uno en uno hasta que sea menor a NUM
  			if(Lista[C] < Lista[Menor]){								//En la condicion IF comparamos si la Posicion C es menor a la Posicion L
    			Menor = C;    
   			}
  		}
  		Temporal = Lista[L];								//Creamos un temporal en donde le asignamos el valor de L
    	Lista[L] = Lista[Menor];								//C pasa a obtener el valor de L
    	Lista[Menor] = Temporal;								//C pasa a ser Temporal siempre que se cumpla la condicion IF
 	}
 
//EN ESTA SECCION PROCEDEMOS A MOSTRAR NUESTRA LISTA ORDENADA
 cout<<"Lista ordenada mediante Metodo por Seleccion:"<<endl;	//Mostramos en  pantalla pedido de digitar cantidad de numeros para la lista-
 cout<<"...:::Ordenados de Forma Ascendente:::..."<<endl;
 for(int L=0 ; L < Num; L++){
  cout<< Lista [L] <<endl;  
 }
 
 return 0;
system("pause>>NULL"); 
}
