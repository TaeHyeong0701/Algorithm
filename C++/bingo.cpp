#include <iostream>
using namespace std;
int main(void)
{
	int arr[5][5]; // ö���� ���� ������.
	int ment[5][5]; // ��ȸ�� ��Ʈ ��.
	int i, j; // ö���� ������ for��
	int a, b = 0; // ��ȸ�� ��Ʈ�� for��
	int distinct=1; // �� ��, �밢��, ������ ���� �Ǻ�.
	int c, d; // �Ǻ��� �ϱ� ���� for��
	int x=0; //��ü ���� Ż��. score3�̻� ���� �� Ż��.
	int score = 0;
	int result;
	for(i=0;i<5;i++)
	{
		for (j = 0; j < 5; j++)
		{
			cin >> arr[i][j]; //ö���� ���� ������
		}
	}
	for (i = 0; i < 5; i++)
	{
		for(j=0;j<5;j++)
		{
			cin >> ment[i][j]; // ��ȸ�� ��Ʈ ��.
		}
	}
	a = 0;
	while(1)
	{
		b = 0;
		if (x == 1)
		{
			break;
		}
		if (a == 5) // ����� �� ���� Ż��.
		{
			break;
		}
		while (1)
		{
			if (x == 1)
			{
				break;
			}
			if (b == 5) // ������ �ٵ��� Ż��.
			{
				break;
			}
			for (i = 0; i < 5; i++)
			{
				for (j = 0; j < 5; j++)
				{
					if (ment[a][b] == arr[i][j])
					{
						arr[i][j] = 0; // ö���� �������� 0���� ��ȯ�Ѵ�.

					}
				}
			}
			distinct = 1;
			score = 0;
			for (c = 0; c < 5; c++) // / �Ǻ�
			{
				if (arr[4 - c][c] != 0)
					distinct = 0;
			}
			if (distinct == 1)
			{
				score++;
			}
			distinct = 1;
			for (c = 0; c < 5; c++) // \ �Ǻ�
			{
				if (arr[c][c] != 0)
					distinct = 0;
			}
			if (distinct == 1)
			{ 
					score++;
			}
			distinct = 1;
			for (c = 0; c < 5; c++)// ���� �Ǻ�.
			{
				distinct = 1;
				for (d = 0; d < 5; d++)
				{
					if (arr[c][d] != 0)
						distinct = 0;
				}
				if (distinct == 1)
				{
					score++;
				}
			}
			for (d = 0; d < 5; d++)// ���� �Ǻ�.
			{
				distinct = 1;
				for (c = 0; c<5; c++)
				{
					if (arr[c][d] != 0)
					   distinct = 0;
				}
				if (distinct == 1)
				{
					score++;
				}
			}
			if (score >= 3)
			{ 
				cout << a * 5 + b + 1 << endl;
				x = 1;
			}
			//cout << a << " " << b << " " << score << endl;
							//result = (a + 1) * 5 + (b + 1);
				

			
			/*
			if (score == 3)
			{
				result = (a + 1) * 5 + (b + 1);
			}
			*/


			 //���
			b++;
		}
		a++;
	}
	return 0;
}