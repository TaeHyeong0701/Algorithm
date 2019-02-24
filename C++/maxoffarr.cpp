#include <iostream>
using namespace std;

int main()
{
	int arr[9][9];
	int i, j;
	int max, maxx, maxy;
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			cin >> arr[i][j];
		}
	}
	max = arr[0][0];
	maxx = 0;
	maxy = 0;
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (max < arr[i][j])
			{
				max = arr[i][j];
				maxy = i;
				maxx = j;
			}
		}
	}
	cout << arr[maxy][maxx] << "\n";
	cout << maxy + 1 << " " << maxx + 1;
	return 0;
	
}