import java.util.*;
class Arrayinput{
    public static void main(String [] args){
        Scanner sc =new Scanner(System.in);
        int n=sc.nextInt();
        int [] arr =new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        for(int n1:arr){
            System.out.print(" "+n1);
        }
    }
}