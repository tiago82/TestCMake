// TestCMake.cpp: define o ponto de entrada para o aplicativo.
//
#include "main.h"
#include <string>

using namespace std;

void printTest(string x);
void printVector(); // protótipo, serve para declarar a função 

int main()
{
	printTest("Bem Vindo.");
	printVector();
	
	return 0;
}



void printTest(string string_)
{
	std::cout << string_ << endl;
}

void printVector() // tambem pode usar o parametro (void), significa o parametro recebe nada. colocar (void) ou () mesma coisa.
{

	Vector2d vetor{}; // classe Vector2d do arquivo .h
	vetor.setX(40);

	std::cout << "valor função x vector: " << vetor.getX() << endl;
	std::cout << "valor de x vector: " << to_string(vetor.getX()) << endl; // to_string usa include string
	
	
	printTest("bb"),("ss");
	//cout << a;
	return; // opcional em void
}

