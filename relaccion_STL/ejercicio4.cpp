#include<iostream>
#include<list>

using namespace std;

template<typename T>
void inversa(list<T> &lista){

	typename list<T>::iterator inicio = lista.begin();
	typename list<T>::iterator fin = lista.end();
	fin--;
	//Inicio posicionado en elemento 0 y fin en el ultimo elemento

	typename list<T>::iterator auxiliar;

	for(int i = 0 ; i < lista.size()/2 ; i++) {

		
		//iter_swap(inicio,fin); // Usando iter_swap ahorramos las 3 siguientes lineas	
		T dato = *inicio;
		*inicio = *fin ;
		*fin = dato;	

		inicio++;
		fin--;		

	}
	
}

int main(){

	typedef list<int>::const_iterator it;
	list<int> datos;

	datos.push_back(1);
	datos.push_back(2);
	datos.push_back(3);
	datos.push_back(4);
	datos.push_back(5);

	for( it iterador=datos.begin(); iterador != datos.end(); ++iterador ){
		cout << *iterador <<" ";

	}
	cout << endl;
	inversa(datos); 
 

	for( it iterador=datos.begin(); iterador != datos.end(); ++iterador ){
		cout << *iterador <<" ";

	}
	 

}
