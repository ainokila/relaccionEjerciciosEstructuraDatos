#include<iostream>
#include <stack>

using namespace std;

template <class T>
void sustituye(stack<T> &pila , T x , T y){

	stack<T> auxiliar;

	while (!pila.empty()) {

        auxiliar.push(pila.top());
        pila.pop();
    }

	//Ya esta copiada al reves en auxiliar y pila ya esta vacia - > Copiamos toda la pila sustituyendo x por y 
	
	while (!auxiliar.empty()) {

        if(auxiliar.top() == x){
			pila.push(y);
		}else{
			pila.push(auxiliar.top());
		}

        auxiliar.pop();
    }
}

int main(){

	stack<int> prueba;

	prueba.push(5);
	prueba.push(5);
	prueba.push(5);
	prueba.push(4);
	prueba.push(4);
	prueba.push(3);
	
	
	cout << "Los datos anteriores eran 3 4 4 5 5 5\n";
	cout << "Sustituimos el 5 por el 4 :";

	sustituye(prueba,5,4);

	while (!prueba.empty()) {

         cout << prueba.top() << " " ;
	     prueba.pop();
    }
	cout << endl;
	
}





