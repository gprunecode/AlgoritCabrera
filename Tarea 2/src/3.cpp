#include <iostream>

using namespace std;

int main (int argc, char** argv){
	
	double sueldoNeto, sueldoBase, bonificacion, descuento;
	char categoria;
	
	cout<<"Ingrese sueldo base: "<<endl;
	cin>>sueldoBase;
	cout<<"Ingrese categoria (1/2/3)"<<endl;
	cin>>categoria;
	cout<<"Ingrese el descuento (%)"<<endl;
	cin>>descuento;
	
	if(categoria == '1'){
		bonificacion = sueldoBase*0.1;
	}
	
	if(categoria == '2'){
		bonificacion = sueldoBase*0.2;
	}
	
	if(categoria == '3'){
		bonificacion = sueldoBase*0.3;
	}
	
	sueldoNeto = (sueldoBase + bonificacion)*(1-(descuento/100));
	
	cout<<"El sueldo neto es: "<<sueldoNeto<<endl;
}
