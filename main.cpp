#include <iostream>
#include"FileSystem.h"
#include"FileSystemNode.h"
#include"Archivo.h"
#include"CPP.h"
#include"JPG.h"
#include"PPT.h"
#include"Directorio.h"


using namespace std;
int menu();

int main() {
	
	FileSystem* file=new FileSystem();
	
	Directorio* carpeta1=new Directorio("carpeta1","Douglas",file->getDirectorio());
	
	carpeta1->agregarArchivos(new CPP("P3Lab1","Douglas",carpeta1,0,0));
	carpeta1->agregarArchivos(new JPG("Hanako.jpg","Douglas",carpeta1,true,"1080p",5,5));
	carpeta1->agregarArchivos(new PPT("Revolucion Francesa","Douglas",carpeta1,"PW1",6,6,true));
	
	Directorio* carpeta2=new Directorio("carpeta2","Douglas",carpeta1);
	
	carpeta2->agregarArchivos(new CPP("P3Lab2","Douglas",carpeta2,0,0));
	carpeta2->agregarArchivos(new JPG("Rengoku.jpg","Douglas",carpeta2,false,"HD",5,5));
	carpeta2->agregarArchivos(new PPT("Kimetsu Mugen Ressha-hen","Douglas",carpeta2,"PW2",2,2,true));
	
	Directorio* carpeta3=new Directorio("carpeta3","Douglas",carpeta2);
	
	carpeta3->agregarArchivos(new CPP("P3Lab3","Douglas",carpeta3,0,0));
	carpeta3->agregarArchivos(new JPG("Hazard.jpg","Douglas",carpeta3,true,"4K",5,5));
	carpeta3->agregarArchivos(new PPT("El Clasico","Douglas",carpeta3,"PW3",3,3,true));
	
int opcion;
	while((opcion = menu()) != 5) {
		switch (opcion) {
			case 1: {
				
				break;
			}
			case 2: {
				cout<<"Usted ahora agregara un Directorio"<<endl;
				string carpeta;
				string autor;
				cout<<"Ingrese nombre Directorio: ";
				cin>>carpeta;
				cout<<"Ingrese el nombre del Autor";
				cin>>autor;
				Directorio* dire=new Directorio(carpeta,autor,file->getDirectorio());
				cout<<"Se ha creado un directorio exitosamente"<<endl;
				break;
			}
			case 3: {
				
				break;
			}
			case 4: {
                
				break;
			}
			case 5: {
                cout << "Saliendo del menu........" << endl;
				
				break;
		     }
		}//fin del switch
	}//fin while menu
	return 0;
}//fin del main
int menu() {
		int opcion;
		cout << "----MENU----" << endl;
		cout << "1. Imprimir FyleSystem" << endl;
		cout << "2. Agregar Directorios" << endl;
		cout << "3. Agregar Archivos" << endl;
		cout << "4. Buscar por nombre" << endl;
		cout << "5. Salir " << endl;
		cout << endl;
		cout << "Ingrese la opcion: ";
		cin >> opcion;
		cout << endl;
		while(opcion < 1 || opcion > 4) {
			cout << "Seleccione una opcion dentro del rango disponible" << endl;
			cout << "Ingrese la opcion: ";
			cin >> opcion;
			cout << endl;
		}
		return opcion;
	}
