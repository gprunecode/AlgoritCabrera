#include <iostream>

using namespace std;

int main(int argc, char** argv){
	
	double tarifa,montoConyuge,nroHijos,montoTotal,donacionSolidaria;
	string conyuge1;
	
	tarifa = 150;
	
	cout<<"Tiene esposa? (SI/NO)"<<endl;
	cin>>conyuge1;
	
	cout<<"Cuantos hijos tiene?"<<endl;
	cin>>nroHijos;
	
	if (conyuge1 == "SI"){
		montoConyuge = 0.85 * tarifa;
	}else{
		montoConyuge = 0;
	}
	
	montoTotal = tarifa + montoConyuge + 50*nroHijos;
	donacionSolidaria = 0.1 * montoTotal;
	
	cout<<"Monto total: "<<montoTotal<<endl;
	cout<<"Donacion solidaria: "<<donacionSolidaria<<endl;
	
}
