#include<iostream>
#include<queue>
using namespace std ;


template <class T>
void insertar( queue<T> &cola, int pos, T dato){
	queue<T> auxiliar;
	int contador = 0;

	while (!cola.empty()) {

			auxiliar.push(cola.front());
			cola.pop();
   	}
	
	while (!auxiliar.empty()) {

			if(contador==pos){
				cola.push(dato);
			}

			cola.push(auxiliar.front());
			auxiliar.pop();
			contador++;
   	}



}

int main(){

	queue <int> prueba;

	prueba.push(0);
	prueba.push(2);
	prueba.push(3);
	prueba.push(4);
	
	insertar(prueba,1,1);

	while (!prueba.empty()) {

        cout << prueba.front() << " " ;

        prueba.pop();
    }

}
