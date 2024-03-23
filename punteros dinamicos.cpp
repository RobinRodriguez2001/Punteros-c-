#include <iostream>
using namespace std;
// punteros con asignacion de memoria dinamica;
// new reservar un espacio en memoria
// delete [] = Liberar la memoria

main() {
	int fil= 0, col=0, **pm_notas;
	cout<<"Ingrese la cantidad Estudiantes:"; 
	cin>>fil;
	cout<<"Ingrese la cantidad Notas por estudiante:"; 
	cin>>col;
	
	pm_notas = new int *[fil];
	for(int i=0;i<fil;i++){
		pm_notas[i] = new int[col];
	}
	for (int i=0;i<fil;i++){
		cout<<"______Estudiante______"<<i<<endl;
	for (int ii=0;ii<col;ii++){
		cout<<"Estudiante "<<i<<", Nota:"<<ii<<": "; cin>>*(*(pm_notas+i)+ii);
	}
	
	cout<<"_______________________"<<endl;
	
	}
	
	cout<<"-- Mostrar Notas -------"<<endl;
	
	for (int i=0;i<fil;i++){
		for (int ii=0;ii<col;ii++){
			cout<<*(*(pm_notas+i)+ii)<<endl;
		}
		cout<<"____________"<<endl;
	}
	
	for(int i=0;i<fil;i++){
		delete [] pm_notas[i];
	}
	delete [] pm_notas;
	system("pause");
}
