#include <iostream>
using namespace std;
int main()
{
	int number;
	cin >> number;
	int answer = 123; // ������ ������ �� �� �ִ� ��.
	int i; // 100���ڸ� ��
	int j; // 10�� �ڸ� ��
	int k; // 1�� �ڸ� ��
	int l,m,n; // ���������� ����.
	int arr[100][5];
	int ball;
	int strike;
	int answer1[1000]; // ���� ���䰪
	int cnt = 0; //ī��Ʈ ���� ����.
	int cnt2 = 0;
	int result = 0;
	int a, b, c;
	for (l = 0; l < number; l++)
	{
		for (m = 0; m < 3; m++)
		{
			cin >> arr[l][m];
		}
	}
	while (1)
	{
		cnt2 = 0;
		i = answer / 100;
		j = (answer / 10) % 10;
		k = answer % 10;
		if (i == 0 || j == 0 || k == 0 || i == j || i == k || j == k)
		{ 
			answer++;
			continue;
		}
		for(l=0;l<number;l++)
		{
			strike = 0;
			ball = 0;
			a = arr[l][0] / 100;
			b = (arr[l][0] / 10) % 10;
			c = (arr[l][0] % 10);
			if (a == i)
				strike++;
			else if (a == j||a==k)
				ball++;
			if (b == j)
				strike++;
			else if (b == i || b == k)
				ball++;
			if (c == k)
				strike++;
			else if (c == i || c == j)
				ball++;
			if (arr[l][1] == strike && arr[l][2] == ball)
			{
				cnt2++;/*
				if (l == 0)
				{
					answer1[cnt] = answer;
					cnt++;
				}
				else
				{ 
					for(n=0;n<cnt;n++)
					{ 
						if(answer1[n]==answer)
						{ 
						answer1[cnt] = answer;
						cnt++;
						}
					}
				}
				*/
				
			}
		}
		if (cnt2 == number)
			cnt++;
		answer++;
		if (answer > 987)
			break;
	}
	cout << cnt;
	return 0;
}