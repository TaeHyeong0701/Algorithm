#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
	int n, m;
	int i, j;
	int result1, result2;
	int arr[100][100];
	cin >> m;
	cin >> n;
	/*
	int **arr;
	arr = (int**)malloc(sizeof(int)*m);
	for (i = 0; i < m; i++)
	{
		*(arr + i) = (int*)malloc(sizeof(int)*n);
	}
	*/
	for (i = 0; i < m; i++)
	{
		for (j = 0; j<n; j++)
		{
			cin >> arr[i][j];
		}
	}
	cin >> result1;
	cin >> result2;
	cout << arr[result1][result2];
	//free(arr);
	return 0;

}