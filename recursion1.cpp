#include <iostream>
using namespace std;

double potencia(double x, int n){
	if(n==0)
		return 1;
		
	return x * potencia(x,n-1);
}

int main(){
	double x;
	int n;
	
	cout << "Ingrese la base (x): ";
	cin >> x;

	cout << "Ingrese el exponente natural (n): ";
	cin >> n;
	
	cout << x << "^" << n << "=" << potencia(x,n) << endl;

	return 0;
}
