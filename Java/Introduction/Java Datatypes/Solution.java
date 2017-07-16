import java.util.Scanner;

public class Solution{
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);

		int T = input.nextInt();

		for(int i = 0; i < T; i++){
			try{
				long a = input.nextLong();
				System.out.println(a + " can be fitted in:");
				if(a >= -128 && a <= 127)
					System.out.println("* byte");
				if(a >= -Math.pow(2, 15) && a <= Math.pow(2, 15) - 1)
					System.out.println("* short");
				if(a >= -Math.pow(2, 31) && a <= Math.pow(2, 31) - 1)
					System.out.println("* int");
				if(a >= -Math.pow(2, 63) && a <= Math.pow(2, 63) - 1)
					System.out.println("* long");
			}catch(Exception e){
				System.out.println(input.next() + " can't be fitted anywhere.");
			}
		}
	}
}
