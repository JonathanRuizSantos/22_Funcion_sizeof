#include <iostream>

/* 
EXPLICACION DEL SIZEOF()

esta funcion es usada para conocer la longitud o tamaño de un vector o matriz
sintaxis de escritura: tamanio = sizeof array / sizeof array[0]

 */
using namespace std;
int main(int argc, char** argv) {
	int edades[] = {2,4,8,12,15,22,25,30,18,26,54,48};
	int tamanio = (sizeof(edades) / sizeof(edades[0]));
	for(int i = 0; i < tamanio; i++){
		cout<<i<<".- "<<edades[i]<<endl;
	}
	
	cout<<"Tamanio: "<<tamanio<<endl;
	return 0;
}