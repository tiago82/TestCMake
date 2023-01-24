#include <iostream>

using namespace std;

#define N 3

void multi(int arr1[][N], int arr2[][N], int arr3[][N])
{
	for(int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			arr3[i][j] = 0;
			for (int k = 0; k < N; k++)
			{
				arr3[i][j] += arr1[i][k] * arr2[k][j];
			}
		}
	}
}


void exe()
{
	int arr1[N][N]
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	int arr2[N][N]
	{
		{1,4,7},
		{2,5,8},
		{3,6,9}
	};

	int arr3[N][N];
	multi(arr1, arr2, arr3);

		cout << "multiplica��o duas matrizes" << endl;
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				cout << arr3[i][j] << "";
			}
			cout << endl;
		}
}