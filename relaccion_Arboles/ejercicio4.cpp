#include <iostream>

using namespace std;

int exprexion(const tree<T> & A, const typename tree<T>::node &v){

  char c = *v ;

  switch(c){
    case '+':
      return exprexion(v.left(),A)+exprexion(v.right(),A);
      break;
    case '-':
      return exprexion(v.left(),A)-exprexion(v.right(),A);
      break;
    case '*':
      return exprexion(v.left(),A)*exprexion(v.right(),A);
      break;
    case '/':
      return exprexion(v.left(),A)/exprexion(v.right(),A);
      break;
    default:
      return valor(c);
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

