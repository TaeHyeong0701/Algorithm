#include <iostream>
using namespace std;

int main()
{
	int i, j;
	int king_x, king_y;
	int rook_x, rook_y; 
	int x, y;
	// ���� �� ���̱� ������ king�� �������� ��������.
	int arr[8][8];
	int result=0; // ������ �����.
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			cin >> arr[i][j];
		}
	}
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (arr[i][j] == 1)//king�� ��ġ �޾ƿ���.
			{
				king_x = j;
				king_y = i;
			}
		}
	}
	x = king_x; // �ʱ�ȭ
	y = king_y; // �ʱ�ȭ�ϱ� ����.
	while (1)// <- �� �̵�.
	{
		if (arr[king_y][king_x] == 3) // �⹰�� �����ٸ�.
		{
			break;
		}
		if (arr[king_y][king_x] == 2) // ���� ŷ�� ���� �� �ִٸ�
		{
			result = 1;
		}
		if (king_x == 0) // ���� �����Ѵٸ�.
		{
			break;
		}
		king_x--;
	}
	king_x = x;
	king_y = y;
	while (1)// -> �� �̵�.
	{
		if (arr[king_y][king_x] == 3) // �⹰�� �����ٸ�.
		{
			break;
		}
		if (arr[king_y][king_x] == 2) // ���� ŷ�� ���� �� �ִٸ�
		{
			result = 1;
		}
		if (king_x == 7) // ���� �����Ѵٸ�.
		{
			break;
		}
		king_x++;
	}
	king_x = x;
	king_y = y;
	while (1)// �� �� �̵�.
	{
		if (arr[king_y][king_x] == 3) // �⹰�� �����ٸ�.
		{
			break;
		}

		if (arr[king_y][king_x] == 2) // ���� ŷ�� ���� �� �ִٸ�
		{
			result = 1;
		}
		if (king_y == 0) // ���� �����Ѵٸ�.
		{
			break;
		}
		king_y--;
	}
	king_x = x;
	king_y = y;
	while (1)// �� �� �̵�.
	{
		if (arr[king_y][king_x] == 3) // �⹰�� �����ٸ�.
		{
			break;
		}
		if (arr[king_y][king_x] == 2) // ���� ŷ�� ���� �� �ִٸ�
		{
			result = 1;
		}
		if (king_y == 7) // ���� �����Ѵٸ�.
		{
			break;
		}
		king_y++;
	}
	cout << result;
	return 0;
}