#include <iostream>
using namespace std;

int main(void)
{
	int arr[10][10];
	int i, j;
	int N;
	int a = 0;
	cin >> N; // ��� �������� �޾ƿ´�.
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j<10; j++)
		{
			cin >> arr[i][j];//�ݵ�� �ʱ�ȭ ��������Ѵ�.
		}
	}
	while (1)
	{
		if (a == N)
		{
			break;
		}
		for (i = 0; i < 10; i++)// ����(��) ������
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