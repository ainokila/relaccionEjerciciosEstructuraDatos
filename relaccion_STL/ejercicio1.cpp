#include<iostream>
#include<list>

using namespace std;

template<class T>
void eliminarDato(list<T> &lista,T dato){
	typename list<T>::iterator iterador;

	for(iterador=lista.begin(); iterador != lista.end(); ++iterador ){

		if(*iterador == dato ){
			
			iterador = lista.erase(iterador);
			--iterador;
		}
		

	}


}

int main(){

	cout << "Prueba";

	list<int> datos;

	datos.push_back(1);
	datos.push_back(2);
	datos.push_back(3);
	datos.push_back(3);
	datos.push_back(4);
	datos.push_back(5);
	datos.push_back(3);
	datos.push_back(3);
	datos.push_back(3);
	datos.push_back(3);
	datos.push_back(6);

	for(list<int>::const_iterator iterador=datos.begin(); iterador != datos.end(); ++iterador ){
		cout << *iterador <<" ";

	}
	cout << endl;

	eliminarDato<int>(datos,3);

	for(list<int>::const_iterator iterador=datos.begin(); iterador != datos.end(); ++iterador ){
		cout << *iterador <<" ";

	}
	 

}

