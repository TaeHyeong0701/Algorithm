#include <iostream>
using namespace std;
int main(void)
{
	int n, x, y;
	int r; // n=���� ũ��, x�� ��ġ(��), y�� ��ġ(��), r= ��Ÿ�.
	int i, j = 0; // �迭 ��ǥ�� (����� ��ǥ��-1)
	int temp_i, temp_j; // �迭 ��ǥ �ӽ� ���尪.
	int range=0; //  ��Ÿ��� ����� ����.
	cin >> n;
	cin >> y >> x >> r;
	int arr[100][100]; // �� �迭.
	temp_i = y - 1;
	temp_j = x - 1;
	int gap_i;
	int gap_j;
	int gap; // ���� ���� ������ ��
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i > y-1)
				gap_i = i - (y-1);
			else if (i < (y-1))
				gap_i = (y-1) - i;
			else if (i == (y-1))
			{
				gap_i = 0;
			}
			if (j > (x-1))
				gap_j = j - (x-1);
			else if(j<(x-1))
			{
				gap_j = (x-1) - j;
			}
			else if ((x-1) == j)
			{
				gap_j = 0;
			}
			gap = gap_i + gap_j;
			if(gap <= r)
			{
				arr[i][j] = gap;
			}
			else
			{
				arr[i][j] = 0;
			}
			if (gap == 0) // 0�̶�� ������ ����.
			{
				arr[i][j] = 210000000;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (arr[i][j] == 210000000)
			{
				cout << 'x' << " ";
			}
			else
			{ 
			cout << arr[i][j] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}