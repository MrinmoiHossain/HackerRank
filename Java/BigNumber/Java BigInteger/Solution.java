import java.math.BigInteger;
import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        String a = input.nextLine();
        String b = input.nextLine();
        input.close();
        
        System.out.println(new BigInteger(a).add(new BigInteger(b)));
        System.out.println(new BigInteger(a).multiply(new BigInteger(b)));
    }
}
