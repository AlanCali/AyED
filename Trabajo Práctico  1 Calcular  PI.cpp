#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main () {
	double pi = 0;
	float numerador,denominador;
	int n = 0;
	float piOriginal = 3.141592;
	int piObtenido = 0;
	int precision = 7;
	int piBuscado = piOriginal * pow(10,precision);
	
	while(piObtenido != piBuscado){
		numerador = pow(-1,n);
		denominador = (2*n+1);
		
		pi += numerador/denominador;
		
		n += 1;
		
		cout<<setprecision(precision)<<pi*4<<endl;
		piObtenido = pi * 4 * pow(10,precision);
	}
	
	
}

