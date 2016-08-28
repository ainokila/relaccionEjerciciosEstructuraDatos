#include<iostream>
#include<queue>
#include<stack>
#include<string>
#include <ctype.h>

using namespace std;

bool esPalindromo(string palabra){
	
	bool solucion=true;
	stack<char> pila;
	queue<char> cola;

	for(int i = 0 ; i< (int) palabra.length();i++){
		cola.push(tolower(palabra.at(i)));
		pila.push(tolower(palabra.at(i)));

	}

	//Ya esta la palabra copiada en la pila y en cola . Ahora debemos comprobar que cada p

	while (!cola.empty() && solucion) { // Ambas tienen el mismo numero de elementos

		if(pila.top()!=cola.front()){
			solucion = false;
		}

        pila.pop();
		cola.pop();
    }

	return solucion;
}

int main(){

	if(esPalindromo("Ana")){
		cout << "Ana Es palindromo"<<endl;

	}else{
		cout << "Ana No es palindromo"<<endl;
	}

	if(esPalindromo("estructuras")){
		cout << "estructuras Es palindromo"<<endl;

	}else{
		cout << "estructuras No es palindromo"<<endl;
	}

}
