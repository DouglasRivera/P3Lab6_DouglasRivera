#include "PPT.h"

string PPT::toString(){
	string totals=to_string(this->numSlides);
	string totalp=to_string(this->numPlantilla);
	string animation;
	if(this->tieneAnimacion==true){
		animation="Si hay animacion";
	}else{
		animation=" No hay animacion";
	}
	
	return "Titulo: "+this->titulo+" Num Slides: "+totals+" Num Plantilla: "+totalp+" Animacion: "+animation;
}
PPT::PPT(string name,string author,FileSystemNode* dad,string title,int slides,int plantilla,bool animacion):Archivo(name,author,dad){
	this->titulo=title;
	this->numSlides=slides;
	this->numPlantilla=plantilla;
	this->tieneAnimacion=animacion;
}
string PPT::getTitulo(){
	return this->titulo;
}
int PPT::getSlides(){
	return this->numSlides;
}
int PPT::getPlantilla(){
	return this->numPlantilla;
}