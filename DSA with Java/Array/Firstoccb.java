// Given an array in the ascending order find 
// the first occurance of the targeted value 
// using the linear search

import java.util.*;
public class Firstoccb {
   
    public static void main(String [] args){
        Scanner sc =new Scanner(System.in);
        int size =sc.nextInt();
        int [] arr =new int[size];
        for (int i = 0; i < size; i++) {
             arr[i] = sc.nextInt();
        }

        int target =sc.nextInt();
        int index=0;
        int start=0,end=size-1;
        while(start<end){
            int mid=(start+end)/2;

            if(arr[mid]==target){
                index=mid;
                end=mid-1;
            }
            else if(arr[mid]>target){
                end=mid-1;
            }
            else
                start=mid+1;
        }
        System.out.println(index);
    }
} 

