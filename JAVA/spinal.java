import java.util.Scanner;
public class spinal {

	public static void main(String[] args) {

		Scanner sc=new Scanner(System.in);

		int num=sc.nextInt();

		int i, j;//for�� ������ ����.

		int x,y;//�迭�� �ޱ� ����.

		int sum=1;//����� �ޱ� ����.

		int[][] arr=new int[num][num];

		int direct=1;

		int limit=num;

		x=0;

		y=-1;

		while(true)

		{

			for(i=0;i<limit;i++)
	
		{

				y=y+direct;

				arr[x][y]=sum;


				sum++;

			}

			limit--; //Ƚ�� ���̰�,

			if(limit<=0) break;
	
		for(i=0;i<limit;i++)
	
		{

				x=x+direct;

				arr[x][y]=sum;

				sum++;

			}

			direct=-direct;

			
		}

		for(i=0;i<num;i++)

		{

			for(j=0;j<num;j++)
	
		{

				System.out.print(arr[i][j]+" ");
	
		}
			System.out.print("\n");

		}

			
	}
}
