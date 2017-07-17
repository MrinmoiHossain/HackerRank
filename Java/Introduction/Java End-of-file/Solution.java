import java.util.Scanner;

public class Solution{
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);

		int testCase = 0;
		while(input.hasNext())
			System.out.println(++testCase + " " + input.nextLine());
	}
}
