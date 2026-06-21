// Given an array in the ascending order find 
// the first occurance of the targeted value 
// using the linear search
import java.util.*;
class Firstocc{
    public static void main(String [] args){
        Scanner sc =new Scanner(System.in);
        int size =sc.nextInt();
        int [] arr =new int[size];
        for (int i = 0; i < size; i++) {
             arr[i] = sc.nextInt();
        }

        int target =sc.nextInt();
        int index=0;
        for (int i = 0; i < size; i++) {
            if (arr[i] == target) {
                index = i;
                break;
            }
        }
        System.out.println(index);
    }
} 