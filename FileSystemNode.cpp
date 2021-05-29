#include "FileSystemNode.h"

FileSystemNode::FileSystemNode(string name,string author,FileSystemNode* dad){
	this->nombre=name;
	this->autor=author;
	this->padre=dad;
}
string FileSystemNode::getAutor(){
	return this->autor;
}
string FileSystemNode::getNombre(){
	return this->nombre;
}