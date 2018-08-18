import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []args){
        Scanner in = new Scanner(System.in);
        int n=in.nextInt();
        in.nextLine();
        HashMap<String, Integer> hm = new HashMap<>();
        
        for(int i=0;i<n;i++){
            String name=in.nextLine();
            int phone=in.nextInt();
            hm.put(name, phone);
            in.nextLine();
        }
        while(in.hasNext()){
            String s = in.nextLine();
            try{
                int v = hm.get(s);
                System.out.println(s + "=" + v);
            }catch(NullPointerException e){
                System.out.println("Not found");
            }
        }
    }
}




