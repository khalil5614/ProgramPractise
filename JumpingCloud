//https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem

import java.util.Scanner;

public class JumpingCloud {
    static int jumpingOnClouds(int[] c) {
        int jump=0;
        int i,n;
        n=c.length;
        for( i=0;i<n;i++){
           if(i+2<n&& c[i+2]==0){
            jump++;
            i++;
            }
            else if(i+1<n&& c[i+1]==0){
            jump++;
            }
        }

    return jump;
    }
    
     public static void main(String[] args) {
        // TODO code application logic here
         
         Scanner scanner = new Scanner(System.in);
                int n = scanner.nextInt();

        int[] c = new int[n];


        for (int i = 0; i < n; i++) {
            c[i] = scanner.nextInt();
        }

        int result = jumpingOnClouds(c);
         System.out.println("jump=" +result);
          
    }
}
