#include <iostream>
using namespace std;

int sumaArreglo(int arreglo[], int n){
	if(n==0)
		return 0;
		
	return arreglo[n - 1] + sumaArreglo(arreglo, n - 1);
}

int main(){
	int n;
	
	cout << "Ingrese la cantidad de elementos del arreglo: ";
	cin >> n;
	
	int arreglo[n];
	
	for(int i = 0; i < n; i++){
		cout << "Elemento [" << i << "]: ";
		cin >> arreglo[i];
	}
	
	cout << "La suma de los elementos es: " << sumaArreglo(arreglo, n) << endl;
	
	return 0;
}
