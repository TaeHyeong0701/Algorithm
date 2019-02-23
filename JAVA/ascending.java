import java.util.Scanner;
public class ascending {

	public static void main(String[] args) {
		// TODO 자동 생성된 메소드 스텁
		Scanner sc=new Scanner(System.in);
		int num = sc.nextInt();
		int[] arr=new int[num];
		int tmp=0;
		int i,j;
		for(i=0;i<num;i++)
		{
			arr[i]=sc.nextInt();
		}
		for(i=0;i<num;i++)
		{
			for(j=i+1;j<num;j++)
			{
				if(arr[i]<arr[j])
				{
					tmp=arr[i];
					arr[i]=arr[j];
					arr[j]=tmp;
				}
			}
			
		}
		for(i=0;i<num;i++)
		{
			System.out.print(arr[i]+" ");
		}
	}

}
