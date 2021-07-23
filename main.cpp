#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <math.h>

int main(int argc, char** argv) {
	
	int op;
	cout<<"1-Calcular Sumatoria."<<endl;
	cout<<"2-Calcular funcion sigmoide"<<endl;
	cout<<"Porfavor ingrese una opcion."<<endl;
	cin>>op;
	if(op==1){
		int n;
		double acum=0;
		cout<<"Ingrese un valor"<<endl;
		cin>>n;
		for(int i=1;i<n;i++){
			int aux=2*i-1/i*(i+1);
			acum+=aux;
		}	
	}
	else
		if(op==2){
			
		}
	
	
	return 0;
}