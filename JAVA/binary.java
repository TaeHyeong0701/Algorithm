import java.util.Scanner;
public class binary {
	public static void main(String[] args) {
	Scanner sc= new Scanner(System.in);
	int num=sc.nextInt();
	int tmp;
	String result="";
	while(true)
	{
		tmp=num%2;
		result=tmp+result;
		if(num/2==0)
		{
			break;
		}
		num=num/2;
		
	}
	System.out.print(result);
	}
}