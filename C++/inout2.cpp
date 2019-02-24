#include <iostream>
using namespace std;

int main(void)
{
	int arr[10][10];
	int i, j;
	int N;
	int a = 0;
	cin >> N; // 몇번 뒤집을지 받아온다.
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j<10; j++)
		{
			cin >> arr[i][j];//반드시 초기화 시켜줘야한다.
		}
	}
	while (1)
	{
		if (a == N)
		{
			break;
		}
		for (i = 0; i < 10; i++)// 세로(열) 뒤집기
		{
			if (arr[i][a] == 0)
			{
				arr[i][a] = 1;
			}
			else if (arr[i][a] == 1)
			{
				arr[i][a] = 0;
			}
		}
		for (j = 0; j < 10; j++)
		{
			if (a != j)
			{
				if (arr[a][j] == 0)
				{
					arr[a][j] = 1;
				}
				else if (arr[a][j] == 1)
				{
					arr[a][j] = 0;
				}
			}
		}
		a++;
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j<10; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}