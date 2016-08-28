#include<iostream>
#include<string>
#include<queue>

using namespace std;


class comp {
	public:
		bool operator() (string a, string b){
			bool salida;

			if(a.length()==b.length()){

				bool encontrada = false;
				bool igual = true;

				for(int i = 0 ; i<(int)a.length() && !encontrada ; i++ ){

					if(a.at(i) < b.at(i)){
						salida = false;
						igual=false;
						encontrada=true;
					}else if (a.at(i) > b.at(i)){
						salida =  true ;
						igual=false;
						encontrada=true;
					}

					
				}
				if(igual){
					salida =  (a.length()<b.length());
				}

			}else{
				//Devolver la mas larga
				salida =  (a.length()<b.length());
			}


		return salida;
		}
};

int main(){

	priority_queue<string, vector<string>, comp> cola;
	cola.push("uno");
	cola.push("dos");
	cola.push("dos");
	cola.push("tres");
	cola.push("cinco");
	cola.push("veinticuatro");
	cola.push("cuatro");
	cola.push("cuatro");
	cola.push("auatro");
	cola.push("z");
	cola.push("supercalifragilistico");

	while (!cola.empty()) {
		cout << cola.top()<< " ";
		cola.pop();
	}
	//Salida : supercalifragilistico veinticuatro auatro cuatro cuatro cinco tres dos dos uno z
}
