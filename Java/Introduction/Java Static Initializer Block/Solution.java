import java.util.Scanner;

public class Solution{
	static Scanner input = new Scanner(System.in);

    public static boolean flag = false;
    public static int B = input.nextInt();
    public static int H = input.nextInt();

    static{
        if(B > 0 && H > 0)
            flag = true;
        else
            System.out.println("java.lang.Exception: Breadth and height must be positive");
    }

	public static void main(String[] args){
		if(flag){
			int area = B * H;
			System.out.print(area);
		}	
	}
}
