// Given a binary array nums, return the maximum number of consecutive 1's in the array.
import java.util.*;
public class Maximumones {
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int [] arr =new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }

        int count = ones(arr);
        System.out.print(count);
    } 
    private static int ones(int [] arr){
        int max =0;
        int count =0;
        for(int i=0;i<arr.length;i++){
            if(arr[i]==1){
                count++;
                max=Math.max(max,count);
            }
            else
                count=0;
        }
        return max;
    }
}
