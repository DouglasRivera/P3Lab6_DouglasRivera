#ifndef DIRECTORIO_H
#define DIRECTORIO_H
#include <vector>
#include "FileSystemNode.h"
#include"Archivo.h"
#include"CPP.h"
#include"JPG.h"
#include"PPT.h"
#include"Directorio.h"
#include <iostream>

class Directorio : public FileSystemNode
{
	
	public:
		~Directorio();
		Directorio(string,string,FileSystemNode*);
		void impresionRecursivo(int);
		void agregarArchivos(FileSystemNode*);
		void agregarDirectorios(FileSystemNode*);
		void buscarNombre(string);
		virtual string toString();
				
	
	private:
		vector<FileSystemNode*> lista;
		

		
};

#endif