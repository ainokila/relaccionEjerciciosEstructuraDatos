//Escribe una funcion que acepte un valor de tipo node y un arbol general T y devuelva el nivel del nodo en el arbol.

#include <iostream>

using namespace std;

template <typename T>

int nivelNodo(const bintree<T> &A, typename bintree<T>::node n,typename bintree<T>::node busca){
	
	if(!n.null){
		nivelNodo(A, n.left(),busca);
		nivelNodo(A, v.right(),busca);
		
		if( n == busca){

		}
	}

}

int main(){


	typedef bintree<int> bti;
	bintree<int> Arb(7);
	Arb.insert_left(Arb.root(), bti(1));
	Arb.insert_right(Arb.root(), bti(9));
	Arb.insert_left(Arb.root().left(), bti(6));
	bti aux(8);
	Arb.insert_right(Arb.root().left(),aux);
	Arb.insert_right(Arb.root().left().right(), bti(4));
	Arb.insert_left(Arb.root().right(), bti(5));
	
	cout << "El nivel del nodo con valor 8 es " << nivelNodo(Arb,Arb.root(),aux);
}
