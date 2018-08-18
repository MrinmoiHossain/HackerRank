import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        LinkedList<Integer> list = new LinkedList<>();
        for(int i = 0; i < n; i++){
            int a = scan.nextInt();
            list.add(a);
        }
        
        int q = scan.nextInt();
        for(int i = 0; i < q; i++){
            String s = scan.next();
            if(s.equals("Insert")){
                int index = scan.nextInt();
                int v = scan.nextInt();
                list.add(index, v);
            }
            else{
                int index = scan.nextInt();
                list.remove(index);
            }
        }
        scan.close();
        
        for(Integer a : list){
            System.out.print(a + " ");
        }
        System.out.println();
    }
}
