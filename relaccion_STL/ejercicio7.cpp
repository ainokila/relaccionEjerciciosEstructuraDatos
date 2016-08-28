#include<iostream>
#include<list>

using namespace std;

template<typename T>
bool contenida(const list<T> &l1, const list<T> &l2){
	bool solucion = false;

	if(l1.size()>=l2.size()){

		typename list<T>::const_iterator iterador1;
		typename list<T>::const_iterator iterador2;

		iterador2 = l2.begin();

		for(iterador1 = l1.begin() ; iterador1 != l1.end() ; ++iterador1 ) {

			if(*iterador1 == *iterador2) {
				// Si son iguales incremento el iterador , al final sin esta contenida iterador2 debera ser igual a l2.end()
				++iterador2;
			
			}
		}

		if(iterador2==l2.end()){
			solucion = true;
		}

	}
	return solucion;
}

int main(){


	list<int> datos1;
	list<int> datos2;

	datos1.push_back(1);
	datos1.push_back(2);
	datos1.push_back(3);
	datos1.push_back(6);
	datos1.push_back(4);
	datos1.push_back(5);

	datos2.push_back(2); 
	datos2.push_back(3);
	datos2.push_back(4);

	if(contenida(datos1,datos2)){
		cout << "Datos2 esta contenida en Datos1" ;
	}else{
		cout << "Datos2 no esta contenida en Datos1" ;
	}
		
	


}
