/*
In this challenge, given the name of a file,
print out the size of the file, in bytes.
If no file is given, provide a help string to the user
that indicates how to use the program.

You might need help with taking parameters via the
command line or file I/O in C++
*/

#include <iostream>
#include <cstdio>
#include <limits>

int main(){
    
    char* filename;
    FILE* file = NULL;
    
    std::cout << "Ingrese el nombre del archivo a medir: ";
    std::cin >> filename;
    std::cin.ignore();
    
	file = std::fopen(filename, "rb");
	
	std::cout << filename << std::endl;
	
	if(file != NULL){
		std::fseek(file,0,SEEK_END); //Lleva el apuntador hasta el final de archivo
		//ftell() Muestra el numero de bytes desde el inicio del archivo
		std::cout << "El archivo \"" << filename << "\" pesa: " << std::ftell(file) << " bytes." << std::endl ;
		fclose(file);
	}
	else
		std::cout << "El archivo no pudo abrirse";
				
    return 0;
}

