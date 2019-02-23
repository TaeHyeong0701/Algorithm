import java.util.Scanner;
public class pyramid {

	public static void main(String[] args) {
		// TODO 자동 생성된 메소드 스텁
		Scanner sc= new Scanner(System.in);

		int n=sc.nextInt();

		int s=sc.nextInt();

		int i,j,k=0;

		for(i=0;i<n;i++)

		{

			for(k=0;k<(n-1-i);k++)

			{

				System.out.print(" ");

			}

			for(j=0;j<2*(i+1)-1;j++)

			{

				System.out.print(s);
	
			s++;

			}

			for(k=0;k<(n-1-i);k++)

			{

				System.out.print(" ");

			}

			System.out.print("\n");

		}

	}

}
