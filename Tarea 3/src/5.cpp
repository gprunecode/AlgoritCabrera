#include <iostream>
using namespace std;
int main (int argc, char** argv){
	int num1, num2, num3, num4;
	cout<<"Ingrese numero 1: "<<endl; cin>>num1;
	cout<<"Ingrese numero 2: "<<endl; cin>>num2;
	cout<<"Ingrese numero 3: "<<endl; cin>>num3;
	cout<<"Ingrese numero 4: "<<endl; cin>>num4;	
	if (num1>num2){
		if (num1>num3){
			if (num1>num4){
				cout<<num1<<endl;
			}else{
				cout<<num4<<endl;
			}
		}else if(num3>num4){
			cout<<num3<<endl;
		}else{
			cout<<num4<<endl;
		}
	}else if(num2>num3){
		if (num2>num4){
			cout<<num2<<endl;
		}else{
			cout<<num4<<endl;
		}
	}else if (num3>num4){
	cout<<num3<<endl;	
	}else{
		cout<<num4<<endl;
	}	
}

