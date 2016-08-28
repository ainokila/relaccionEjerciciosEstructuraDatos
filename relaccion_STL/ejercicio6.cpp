#include<iostream>
#include<list>

using namespace std;

template<typename T>
void remplazarSiguiente(list<T> &lista ,T valor ){

	typename list<T>::iterator iterador;

	for(iterador = lista.begin() ; iterador != lista.end() ; ++iterador ) {

		if(*iterador == valor ) {
			// Tengo que comprobar que no sea el ultimo elemento , para no desbordar ( Funciona sin comprobar )
			++iterador;
			*iterador = valor-1;
			--iterador;
		}
	}
	
}

int main(){

	typedef list<int>::const_iterator it;
	list<int> datos;

	datos.push_back(1);
	datos.push_back(2);
	datos.push_back(3);
	datos.push_back(4);
	datos.push_back(3);

	for( it iterador=datos.begin(); iterador != datos.end(); ++iterador ){
		cout << *iterador <<" ";

	}
	cout << endl;
	remplazarSiguiente(datos,3); 
 

	for( it iterador=datos.begin(); iterador != datos.end(); ++iterador ){
		cout << *iterador <<" ";

	}

}
