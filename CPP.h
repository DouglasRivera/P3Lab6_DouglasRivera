#ifndef CPP_H
#define CPP_H

#include "FileSystemNode.h"
#include "Archivo.h"

class CPP : public Archivo
{
	
	public:
		CPP(string,string,FileSystemNode*,int,int);
		CPP(string,string,FileSystemNode*);
		virtual string toString();
		int getLineas();
		int getError();
	private:
        int lineasCodigo;
		int numErrores;
};

#endif