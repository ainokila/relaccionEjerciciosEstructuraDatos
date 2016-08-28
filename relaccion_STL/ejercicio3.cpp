#include<iostream>
#include<list>

using namespace std;

template<class T>
list<T> inversa(const list<T> &lista){
	list<T> ret;

	typename list<T>::const_iterator iterador;
	
	for(iterador = lista.begin() ; iterador != lista.end() ; ++iterador ) {
		ret.push_front(*iterador);
	}
	return ret;
	
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
	list <int> inv = inversa(datos); 
 

	for(it iterador=inv.begin(); iterador != inv.end(); ++iterador ){
		cout << *iterador <<" ";

	}
	 

}
