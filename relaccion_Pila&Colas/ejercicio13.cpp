#include<iostream>
#include<string>
#include<queue>

using namespace std;


class comp {
	public:
		bool esVocal(char c){
			return ('a'==c || 'e'==c ||'i'==c || 'o'==c ||'u'==c);
		}
		int vocales(string palabra){
			int numero=0;
			for(int i = 0 ; i<(int)palabra.length();i++){
				if(esVocal(palabra.at(i))){
					numero++;
				}
			}
			return numero;
		}

		bool operator() (string a, string b){
			bool salida;
			
			
			if(vocales(a)==vocales(b)){
				bool encontrada=false;
				for(int i = 0 ; i<(int)a.length() && !encontrada ; i++ ){

					if(a.at(i) < b.at(i)){
						salida = false;
						encontrada=true;
					}else if (a.at(i) > b.at(i)){
						salida =  true ;
						encontrada=true;
					}

					
				}
			}else{
				salida = vocales(a)<vocales(b);
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
	cola.push("aeaeaeaeaeae");
	cola.push("supercalifragilistico");

	while (!cola.empty()) {
		cout << cola.top()<< " ";
		cola.pop();
	}
	//Salida : aeaeaeaeaeae supercalifragilistico veinticuatro auatro cuatro cuatro cinco uno dos dos tres 
}
