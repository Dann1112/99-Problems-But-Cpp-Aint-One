/*
String Permutation Challenge

Here is another mathematical problem, where the trick is
as much to discover the algorithm as it is to write the code: 

write a program to display all possible permutations
of a given input string--
if the string contains duplicate characters,
you may have multiple repeated results. Input should be of the form
permute string and output should be a word per line.
Here is a sample for the input cat

cat
cta
act
atc
tac
tca
*/

#include <iostream>
#include <string>

using std::cout;
using std::cin;

int main(){
	
	std::string word;
	int cont=0;
	
	void permute(std::string word, int cont);
	void replaceLastTwo(std::string word);
	void moveToTheLeft(std::string, int toBeMoved, int cont);
	
	cout << "----- PERMUTATIONS OF A WORD -----" << std::endl;
	cout << "Type a word: ";
	cin >> word;
	cin.ignore();
	for(int i=0; word[i]!='\0'; i++){
		cout << word[i];
		cont++;
		
	}
	cout << std::endl;
	
	permute(word,cont);
	
	return 0;
}


void permute(std::string word, int cont){
	void replaceLastTwo(std::string word,int cont);
	void moveToTheLeft(std::string, int toBeMoved, int cont);
	
	replaceLastTwo(word,cont);
	moveToTheLeft(word,1,cont);
	
}

void replaceLastTwo(std::string word, int cont){
	char temp;
	std::string perm = word;
	
	temp = perm[cont-1];
	perm[cont-1] = perm[cont-2];
	perm[cont-2] = temp;
	
	for(int i=0; i<cont; i++){
		cout << perm[i];
		
	}
}

void moveToTheLeft(std::string word, int toBeMoved, int cont){
	char temp, temp2;
	std::string perm = word;
	
	for(int i=cont-1; i!=toBeMoved; i--){
		
		cout << perm[i-1] << " por " << perm[i]<< std::endl;
		cout << perm << " dentro"<<std::endl;
		if(i == cont-1){
			temp = perm[i];
			perm[i] = perm[toBeMoved];
			temp2 = perm[i-1];
			perm[i-1] = temp;
		}
		perm[i] = temp2;
		temp2 = perm[i-1];
		perm[i-1] = temp;
		temp = temp2;
			
	}
	cout << perm;
}
