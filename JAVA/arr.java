import java.util.Scanner;

public class arr {


	public static void main(String[] args) {
		// TODO �ڵ� ������ �޼ҵ� ����

		Scanner sc=new Scanner(System.in);

		int a=sc.nextInt();

		int b=sc.nextInt();

		int i,j;

		int sum=0; //����� �Է��� �ϱ� ���� ��.

		int[][] arr=new int[a][b];

		for(i=0;i<a;i++)

		{
			
			for(j=0;j<b;j++)
			
			{
				
				sum++;

				arr[i][j]=sum;

			
		}

		}

		for(i=0;i<a;i++)

		{
			
			for(j=0;j<b;j++)
			
		{

				System.out.print(arr[i][j]+" ");

		}

			System.out.print("\n");

		}

}
}