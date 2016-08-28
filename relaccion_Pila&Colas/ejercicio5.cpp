#include<iostream>
#include <stack>
#include <string>

using namespace std;

bool isDigit(char c){

	bool sol = false;
	if(c >= '0' && c <= '9'){
		sol = true;
	}
	return sol;

}

int operacion(int numero1,int numero2,char operacion){

	int resultado = 0;

		switch (operacion) {
		case '+':
			resultado = numero1 + numero2;
			break;
		case '-':
			resultado = numero1 - numero2;
			break;
		case '*':
			resultado = numero1 * numero2;
			break;
		case '/':
			resultado = numero1 / numero2;
			break;
		case '^':
			resultado = 1;
			for (int k = 0; k < numero2; k++){
				resultado = resultado*numero1;
			}
			break;
		}

	return resultado;


}
int evaluador(string expresion){

	stack <int> pila;

	for (int i = 0; i < expresion.length(); i++) {
			
			char c = expresion.at(i);

			if (isDigit(c)) {
				
				pila.push((int) (c - '0'));

			} else {

					int primero =pila.top();
					pila.pop();

					int segundo =pila.top();
					pila.pop(); 


					pila.push(operacion(primero, segundo, c));
				
					
			}
	}


	return pila.top();
}

int main(){

	cout << evaluador("53^2*2/9+") << endl;   //abˆc*d/e+ donde a = 5, b = 3, c = d = 2, e = 9
	cout << evaluador("24752+*+") << endl;    // abcde+*+ donde a = 2, b = 4, c = 7, d = 5, e = 2
	cout << evaluador("26+35*+9*") << endl;   // ab+cd*+e* donde a = 2, b = 6, c = 3, d = 5, e = 9

}
