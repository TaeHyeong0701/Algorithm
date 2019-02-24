#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
int main(void)
{
	int i=0, j=0;
	int arr[7][7];
	int result[7][7];
	int a, b, c, d;
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 7; j++)
		{
			if (i == 0 || j == 0)
			{
				arr[i][j] = 21000000;
			}
			else if (i == 6 || j == 6)
			{
				arr[i][j] = 21000000;
			}
			else
			cin >> arr[i][j];
		}
	}
	for (i = 1; i < 6; i++)
	{
		for (j = 1; j < 6; j++)
		{
			if (arr[i][j] < arr[i - 1][j] && arr[i][j] < arr[i][j - 1] && arr[i][j] < arr[i + 1][j] && arr[i][j] < arr[i][j + 1])
				result[i][j] = 30;
			else
				result[i][j] = arr[i][j];
		}
	}
	for (i = 1; i < 6; i++)
	{
		for (j = 1; j < 6; j++)
		{
			if (result[i][j] < 10)
				cout << result[i][j] << " ";
			else
				cout << "*" << " ";
		}
		cout << "\n";
	}

		
	return 0;
}