#include<iostream>
#include<list>

using namespace std;

template<typename T>
list<T> crearLista(list<T> &l, const list<T> &li){

	// l  = 2 4 5 
	// li = 2 1 0

	//sol = 5 4 2 

	list<T> solucion;

	for( int i = 0 ; i < l.size() ; i++ ) {

		typename list<T>::const_iterator posicion;
		typename list<T>::const_iterator elemento = l.begin();
		
		for(posicion = li.begin() ; i != *posicion ; ++posicion ) {
			++elemento;
		}
		solucion.push_back(*elemento);

	}



	return solucion;
	
}

int main(){

	list<int> datos;
	list<int> indices;

	datos.push_back(1);
	datos.push_back(3);
	datos.push_back(5);
	datos.push_back(0);
	datos.push_back(2);
	datos.push_back(4);
	

	indices.push_back(1); 
	indices.push_back(3);
	indices.push_back(5);
	indices.push_back(0); 
	indices.push_back(2);
	indices.push_back(4);

	list<int> nueva = crearLista(datos,indices);

	for(list<int>::iterator iterador=nueva.begin(); iterador != nueva.end(); ++iterador ){
		cout << *iterador <<" ";

	}

}
