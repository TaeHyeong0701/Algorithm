#include <iostream>
using namespace std;

int main(void)
{
	int arr[9][9];
	int i, j;
	int max=0;
	int x, y; // 행과 열 값을 받기 위함.
	for(i=0;i<9;i++) // 값을 입력받고,
	{
		for (j = 0; j < 9; j++)
		{
			cin >> arr[i][j];
		}
	}
	max = arr[0][0];
	for (i = 0; i<9; i++) // 값을 입력받고,
	{
		for (j = 0; j < 9; j++)
		{
			if (max < arr[i][j])
			{
				max = arr[i][j];
				y = i + 1;
				x = j + 1;
			}
		}
	}
	cout << max << endl;
	cout << y << " " << x;


	return 0;
}