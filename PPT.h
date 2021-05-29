#ifndef PPT_H
#define PPT_H

#include "FileSystemNode.h"
#include "Archivo.h"

class PPT : public Archivo
{
	public:
		virtual string toString();
		PPT(string,string,FileSystemNode*,string,int,int,bool);
		string getTitulo();
		int getSlides();
		int getPlantilla();
		string getAnima();
		
	private:
		string titulo;
		int numSlides;
		int numPlantilla;
		bool tieneAnimacion;	
};

#endif