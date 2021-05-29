#ifndef JPG_H
#define JPG_H

#include "FileSystemNode.h"
#include "Archivo.h"

class JPG : public Archivo
{

	public:
		JPG(string,string,FileSystemNode*,bool,string,double,double);
		virtual string toString();
		double getLargo();
		double getAncho();
		string getResolucion();
		
	private:
		bool conFlash;
		string resolucion;
		double largo;
		double ancho;	
};

#endif