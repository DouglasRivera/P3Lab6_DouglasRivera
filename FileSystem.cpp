#include "FileSystem.h"

FileSystem::FileSystem(){
	this->directorio=new Directorio("root","Douglas",NULL);
	
}
void FileSystem::setDirectorio(Directorio *dire){
	this->directorio=dire;
}
Directorio* FileSystem::getDirectorio(){
	return this->directorio;
}