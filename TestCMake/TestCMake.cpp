// TestCMake.cpp: define o ponto de entrada para o aplicativo.
//

#include "TestCMake.h"
#include "IncludeTest/Vector2dTest.h"

using namespace std;

int main()
{

	cout << "Bem Vindo" << endl;

	Vector2d vetor; // classe Vector2d do arquivo .h
	vetor.setX(2);

	cout << vetor.getX();

	return 0;
}
