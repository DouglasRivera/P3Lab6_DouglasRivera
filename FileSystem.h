#ifndef FILESYSTEM_H
#define FILESYSTEM_H
#include "Directorio.h"
class FileSystem
{
	public:
		FileSystem();		
		void setDirectorio(Directorio*);
		Directorio* getDirectorio();
		
	private:
		Directorio* directorio;
};

#endif