#include <iostream>
using namespace std;
int main()
{
	int i=0, j=0;
	int k, l, m = 0; // for�� ������ ����.
	int c, r; // �� ����, �� ���� ����
	cin >> c; // ���α���
	cin >> r; // ���α���
	int arr[20][20];
	int clone_arr[20][20]; // ���� ��� �����ϱ� ����.
	int max = 0; // �ִ� ������.
	int score = 0; // �� ������ ����
	int scorei; // �� ������ ���� ����.
	int x = 0;
	int a, b;
	int distinct;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			cin >> arr[i][j];
		}
	}//���� ������.
    //��ü�� �����ϰ�,
	// ������.

	for(j=0;j<c;j++) // ���������� �ϳ���.
	{
		i = 0;
		for (a = 0; a < r; a++)
		{
			for (b = 0; b < c; b++)
			{
				clone_arr[a][b] = arr[a][b];
			}
		}
		while(1)
		{
			if (arr[i][j] == 0)
			{
				i++;
			}
			if (arr[i][j] == 1)
				break;
			if (i == r)
			{ 
				i = r;
				break;
			}
		}
		scorei = i; // ���� �غ� ����.
		//cout << scorei << endl;
		//if (scorei > 3) // scorei �غ��� 3���� Ŭ���� ���ӿ����� �ƴϹǷ� �����Ѵ�.
		//{
			if (scorei > 3) // ���ӿ����� �ƴҶ���!
			{
				for (a = scorei - 4; a < scorei; a++)
				{
					clone_arr[a][j] = 1;
				}//���� �װ��� 1�� ä���.
				/*
				for (a = 0; a < r; a++)
				{
					for (b = 0; b < c; b++)
					{
						cout << clone_arr[a][b] << " ";
					}
					cout << endl;
				}
				*/
				// ���.
				l = scorei-1;
				score = 0; // score�� �ʱ�ȭ
				while(1)
				{
					// ���.
					if (l == scorei-5)
						break;
					distinct = 1;
					for (m = 0; m < c; m++)
					{
						if (clone_arr[l][m] == 0)
							distinct = 0;
					}
					if (distinct == 1)
					{
						score++;
					}

					//cout << "l : " << l << " score : " << score << endl; // �Ǻ�
					l--;
				}
			}
			if (max < score)
			{
				max = score;
				x = j+1;
			}
		//}
	}
	cout << x << " " << max;
	return 0;
}