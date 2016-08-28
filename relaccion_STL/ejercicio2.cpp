#include<iostream>
#include<list>

using namespace std;

template<class T>
void eliminarDuplicados(list<T> &lista){
	typename list<T>::iterator iterador;

	for(iterador = lista.begin(); iterador!= lista.end(); ++iterador ){

		typename list<T>::iterator iterador2 = iterador;  
    	++iterador2;

    	while (iterador2 != lista.end()) {
     		 if (*iterador == *iterador2){   
        		iterador2 = lista.erase(iterador2);
      		}else{
       			 ++iterador2;
			}
    }
		
		
		
	}


}

int main(){

	list<int> datos;

	datos.push_back(1);
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
	datos.push_back(1);

	for(list<int>::const_iterator iterador=datos.begin(); iterador != datos.end(); ++iterador ){
		cout << *iterador <<" ";

	}
	cout << endl;

	eliminarDuplicados(datos);

	for(list<int>::const_iterator iterador=datos.begin(); iterador != datos.end(); ++iterador ){
		cout << *iterador <<" ";

	}

}
