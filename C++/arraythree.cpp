#include <iostream>
using namespace std;
int main()
{
	int num;
	int i = 0, j = 0;
	int k = 2;
	int l=1;
	int arr[100][100] = {0};
	cin >> num;
	while (1)
	{
		if (j < num)
		{
			if (j > 0)
			{

				arr[i][j] = l;
				i++;
				j--;
				l++;
			}
			else if (j == 0)
			{
				arr[i][j] = l;
				j = i + 1;
				i = 0;
				l++;
			}
		}
		else
			break;

	}

	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num-i; j++)
		{
				cout << arr[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}