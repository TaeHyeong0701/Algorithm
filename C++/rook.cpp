#include <iostream>
using namespace std;

int main()
{
	int i, j;
	int king_x, king_y;
	int rook_x, rook_y; 
	int x, y;
	// 룩이 두 개이기 때문에 king의 관점에서 생각하자.
	int arr[8][8];
	int result=0; // 게임의 결과값.
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
			if (arr[i][j] == 1)//king의 위치 받아오기.
			{
				king_x = j;
				king_y = i;
			}
		}
	}
	x = king_x; // 초기화
	y = king_y; // 초기화하기 위함.
	while (1)// <- 로 이동.
	{
		if (arr[king_y][king_x] == 3) // 기물을 만난다면.
		{
			break;
		}
		if (arr[king_y][king_x] == 2) // 룩이 킹을 잡을 수 있다면
		{
			result = 1;
		}
		if (king_x == 0) // 끝에 도달한다면.
		{
			break;
		}
		king_x--;
	}
	king_x = x;
	king_y = y;
	while (1)// -> 로 이동.
	{
		if (arr[king_y][king_x] == 3) // 기물을 만난다면.
		{
			break;
		}
		if (arr[king_y][king_x] == 2) // 룩이 킹을 잡을 수 있다면
		{
			result = 1;
		}
		if (king_x == 7) // 끝에 도달한다면.
		{
			break;
		}
		king_x++;
	}
	king_x = x;
	king_y = y;
	while (1)// ↑ 로 이동.
	{
		if (arr[king_y][king_x] == 3) // 기물을 만난다면.
		{
			break;
		}

		if (arr[king_y][king_x] == 2) // 룩이 킹을 잡을 수 있다면
		{
			result = 1;
		}
		if (king_y == 0) // 끝에 도달한다면.
		{
			break;
		}
		king_y--;
	}
	king_x = x;
	king_y = y;
	while (1)// ↓ 로 이동.
	{
		if (arr[king_y][king_x] == 3) // 기물을 만난다면.
		{
			break;
		}
		if (arr[king_y][king_x] == 2) // 룩이 킹을 잡을 수 있다면
		{
			result = 1;
		}
		if (king_y == 7) // 끝에 도달한다면.
		{
			break;
		}
		king_y++;
	}
	cout << result;
	return 0;
}