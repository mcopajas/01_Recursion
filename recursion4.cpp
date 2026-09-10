#include <iostream>
using namespace std;

int maximo(int arreglo[], int n){
	if(n==0)
		return arreglo[0];
		
	int maxAnterior = maximo(arreglo, n - 1);
	
	if(arreglo[n - 1] > maxAnterior)
		return arreglo[n - 1];
	else
		return maxAnterior;
}

int main(){
	int n;
	
	cout << "Ingresa la cantidad de elementos del arreglo: ";
	cin >> n;
	
	int arreglo[n];
	
	for(int i = 0; i < n; i++){
		cout << "Elemento [" << i << "]: ";
		cin >> arreglo[i];
	}
	
	cout << "El elemento máximo es: " << maximo(arreglo, n) << endl;
	
	return 0;
}
