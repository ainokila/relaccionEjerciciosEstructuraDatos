#include<iostream>
#include<stack>

using namespace std;

template <class T>
void insertar( stack<T> &pila, int pos, T dato){

	stack<T> auxiliar ;
	int contador = 0;

	while(!pila.empty()){
		auxiliar.push(pila.top());
		pila.pop();
	}

	while(!auxiliar.empty()){
		
		if(contador == pos){
			pila.push(dato);
		}
		pila.push(auxiliar.top());
		auxiliar.pop();
		contador++;
	}

}


int main(){

	stack <int> prueba;

	prueba.push(0);
	prueba.push(2);
	prueba.push(3);
	prueba.push(4);
	
	insertar(prueba,1,1);

	while (!prueba.empty()) {

        cout << prueba.top() << " " ;

        prueba.pop();
    }



}
