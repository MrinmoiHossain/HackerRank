import java.util.Scanner;

public class Solution{
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);

		int a = input.nextInt();

		if(a % 2 == 1)
			System.out.println("Weird");
		else{
			if(a >= 6 && a <= 20)
				System.out.println("Weird");
			else
				System.out.println("Not Weird");
		}
	}
}
