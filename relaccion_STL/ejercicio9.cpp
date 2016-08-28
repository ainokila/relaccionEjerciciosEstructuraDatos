#include<iostream>
#include<list>
#include<vector>
using namespace std;

template <typename T>
class vdisperso {
	private:
		list< pair<int, T> > coefs;
		T nulo;
		int n;

	public:
		vdisperso(const vector<T> &v){

			for(int i= 0 ; i<v.size() ; i++ ){
					pair <int,T> par(n,v[i]);
					coefs.push_back(par);
					n++;
			}
		}

		void asignar_coeficiente(int i, const T &x){

				if ( i < coefs.size() ){

					typename list< pair<int, T> >::iterator auxiliar;
					for(int j = 0 ; j < i ; j++ ){
						auxiliar++;
					}
					(*auxiliar).second = x;

				}
			

		}

		vector<T> convertir() const{

			vector<T> nuevo ;
			typename list< pair<int, T> >::const_iterator auxiliar;
			
			for( auxiliar = coefs.begin(); auxiliar != coefs.end(); ++auxiliar ){
				nuevo.push_back( (*auxiliar).second );

			}
			
			return nuevo;

		}

		void cambiar_nulo(const T &n){
			nulo = n ;
		}

};

int main(){

	vector <int> enteros;
	enteros.push_back(10);
	enteros.push_back(3);
	enteros.push_back(10);
	enteros.push_back(11);
	enteros.push_back(10);
	enteros.push_back(9);

	int nulo = 10;
	vdisperso <int> nuevo(enteros);

	vector <int> nuevos = nuevo.convertir();
	for(int i = 0 ; i< nuevos.size() ; i++ ){
		cout << nuevos[i] << " " ;
	}


}

