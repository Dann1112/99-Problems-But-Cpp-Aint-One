/*
Line Count Challenge

Here's a simple help free challenge to get you started:
Write a program that takes a file as an argument and counts
the total number of lines. Lines are defined as ending with
a newline character. Program usage should be

count filename.txt

and the output should be the line count.
*/

#include<iostream>
#include<fstream>

int main(){

	char* filename;
	std::string ignored;
	int count = 0;

	std::cout << "Type: \"count <filename>.txt\" to count the lines in the file: ";
	std::cin >> ignored >> filename;

	std::ifstream file;
	file.open(filename);

if(file.is_open()){

    while (std::getline(file,ignored)){
    	count++;
    }
    file.close();
    }
    else 
    	std::cout << "\nNo se pudo abrir el archivo" << std::endl;
	
    
    std::cout << "\nSe registraron " << count << " lineas";
    return 0;
}
