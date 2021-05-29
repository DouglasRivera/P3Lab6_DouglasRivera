#include "Directorio.h"
#include <iostream>
using namespace std;

string Directorio::toString(){
	return "  Nombre: "+this->nombre+"  Autor: "+this->autor;
}
Directorio::Directorio(string nombre,string autor,FileSystemNode* p):FileSystemNode(nombre,autor,p){
	
}
void Directorio::impresionRecursivo(int num){

}
void Directorio::agregarArchivos(FileSystemNode *p){
	this->lista.push_back(p);
}
void Directorio::agregarDirectorios(FileSystemNode *p){
	this->lista.push_back(p);
}
void Directorio::buscarNombre(string nombre){

}

