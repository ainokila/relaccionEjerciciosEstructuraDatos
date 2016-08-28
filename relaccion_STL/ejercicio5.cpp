#include<iostream>
#include<list>

using namespace std;

template<class T>
list<T> mezclar(list<T> l1 , list<T> l2 ){
	list<T> nueva;

	typename list<T>::const_iterator iterador1;
	typename list<T>::const_iterator iterador2;

	iterador2 = l2.begin();
	iterador1 = l1.begin() ;


	while(iterador1 != l1.end() || iterador2 != l2.end() ) {
		if( iterador1 != l1.end() ) {
			nueva.push_back(*iterador1);
			iterador1++;
		}

		if( iterador2 != l2.end() ) {
			nueva.push_back(*iterador2);
			iterador2++;
		}

	}

	return nueva;
}
int main(){

	typedef list<int>::const_iterator it;
	list<int> datos1;
	list<int> datos2;

	datos1.push_back(1);
	datos1.push_back(2);
	datos1.push_back(3);
	datos1.push_back(4);
	datos1.push_back(5);

	datos2.push_back(6); 
	datos2.push_back(7);
	datos2.push_back(8); 
	datos2.push_back(9);
	datos2.push_back(10);
	datos2.push_back(11);

	
	list <int> mixta = mezclar(datos1,datos2); 
 

	for(it iterador=mixta.begin(); iterador != mixta.end(); ++iterador ){
		cout << *iterador <<" ";

	}


}
