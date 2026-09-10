#include <iostream>
using namespace std;
int buscar(int arreglo[], int n, int x){
	if(n==0)
		return -1;
		
	if(arreglo[n-1] == x)
		return n - 1;
		
	return buscar(arreglo, n - 1, x);
}

int main(){
	int n, x;
	
	cout << "Ingrese la cantidad de elementos del arreglo: ";
	cin >> n;
	
	int arreglo[n];
	
	for(int i = 0; i < n; i++){
		cout << "Elemento [" << i << "]: ";
		cin >> arreglo[i];
	}
	
	cout << "Ingrese el valor a buscar: ";
	cin >> x;
	
	int posicion = buscar(arreglo, n, x);
	
	if(posicion != -1)
		cout << "El valor " << x << " se encuentra en la posicion: " << posicion << "." << endl;
	else
		cout << "El valor " << x << " no se encuentra en el arreglo." << endl;
		
	return 0;
		
}
