/*1. Escribe una funcion que determine cual es la hoja mas profunda de un arbol binario.
                    Implementacion teorica
 */
int profundidad = 0 ;

template <typename T>
void hojaMasProfunda(const tree<T> & A, const typename tree<T>::node &v, pair<int,T> &par){
	
 	typename tree<T>::node aux;

 	 if (!v.null()) {  
    	 cout << *v ;   //  acción sobre el nodo v.

		profundidad++;
		if(profundidad > par.first ){
			par.second = *v;
		}

     	for (aux = v.left(); !aux.null() ; aux = aux.next_sibling()){
        	hojaMasProfunda(A, aux);
		}

		profundidad--;
 	 }

}

