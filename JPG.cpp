#include "JPG.h"

string JPG::toString(){
	string width=to_string(this->ancho);
	string large=to_string(this->largo);
	string flash;
	if(this->conFlash==true){
		flash="Si hay flash";
	}else{
		flash="No hay flash";
	}
	return "Flash "+flash+" Resolucion: "+this->resolucion+" Ancho: "+width+"Largo: "+large;
}
JPG::JPG(string name,string author, FileSystemNode* dad,bool flash,string reso,double lar,double anc):Archivo(name,author,dad){
	this->conFlash=flash;
	this->resolucion=reso;
	this->largo=lar;
	this->ancho=anc;
}
double JPG::getAncho(){
	return this->ancho;
}
double JPG::getLargo(){
	return this->largo;
}
string JPG::getResolucion(){
	return this->resolucion;
}