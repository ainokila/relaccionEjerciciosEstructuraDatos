#include<iostream>
#include<stack>

using namespace std ;

typedef struct { int x; int y; } COORDENADA;

char laberinto[10][10] = {
	"11111111111",
	"1E000100001",
	"10110110101",
	"11000000101",
	"11101101111",
	"1E000100001",
	"10110110101",
	"110001001S1",
	"11111111111",
	}
	
COORDENADA siguienteMovimiento(COORDENADA actual){
	
	


}
stack<coordenada> resolver(){
	// LA SALIDA ESTA EN LA POSICION 1-1

	int movimientos = 0;

	stack <CORDENADA> solucion;
	CORDENADA posicionActual;

	bool encontrada=false;

	posicionActual.x=1;
	posicionActual.y=1;

	while(!encontrada && movimientos<10000){
		
		//No se como seguir.
		
	}





	return solucion;



}

int posicionPartidaX = 1;
int posicionPartidaY = 1;

int main(){
	
	stack <coordenada> solucion;

	
	solucion = resolver(laberinto);

}
	



































int main(){

}
