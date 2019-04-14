#include <iostream>

using namespace std;

int main(){
	
	char clave;
	double materiaPrima, costoManoObra, gastoFabricacion, costoProduccion, precioVenta;
	
	cout<<"Ingrese clave del articulo (1, 2, 3, 4, 5 o 6)"<<endl;
	cin>>clave;	
	
	cout<<"Ingrese costo de la materia prima: "<<endl;
	cin>>materiaPrima;
	
	if (clave == '3' || clave == '4'){	
		costoManoObra = materiaPrima*0.75;
	}
	if (clave == '1' || clave == '5'){	
		costoManoObra = materiaPrima*0.80;
	}
	if (clave == '2' || clave == '6'){	
		costoManoObra = materiaPrima*0.85;
	}
	
	if (clave == '2' || clave == '5'){	
		gastoFabricacion = materiaPrima*0.30;
	}
	if (clave == '3' || clave == '6'){	
		gastoFabricacion = materiaPrima*0.35;
	}
	if (clave == '1' || clave == '4'){	
		gastoFabricacion = materiaPrima*0.28;
	}
	
	costoProduccion = materiaPrima + costoManoObra +gastoFabricacion;
	precioVenta = costoProduccion + costoProduccion*0.45;
	
	cout<<"El costo de produccion es: "<<costoProduccion<<endl;
	cout<<"El precio de venta es: "<<precioVenta<<endl;
		
}
