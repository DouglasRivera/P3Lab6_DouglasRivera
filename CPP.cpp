#include "CPP.h"

CPP::CPP(string name,string author,FileSystemNode* dad,int codeline,int errorNumbers):Archivo(name,author,dad){
	this->lineasCodigo=codeline;
	this->numErrores=errorNumbers;
}
string CPP::toString(){
	string lines=to_string(this->lineasCodigo);
	string errors=to_string(this->numErrores);
	return "Nombre: "+this->nombre+"Autor: "+this->autor+"Lineas: "+lines+" Errores: "+errors;
}
