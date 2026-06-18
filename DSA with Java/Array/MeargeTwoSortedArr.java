import java.util.*;
public class MeargeTwoSortedArr {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        int size =sc.nextInt();
        int []arr1=new int[size];
        for(int i=0;i<size;i++){
            arr1[i]=sc.nextInt();
        }
        int size2 =sc.nextInt();
        int []arr2=new int[size2];
        for(int i=0;i<size2;i++){
            arr2[i]=sc.nextInt();
        }
        int [] sortarr=new int[size+size2];
        int i=0,j=size2-1,k=0;
        while(i<size && j<size2){
            if(arr1[i]<=arr2[j]){
                 sortarr[k]=arr1[i];
                 k++;
                 i++;
            }
                   
            else{
                sortarr[k]=arr2[i];
                k++;
                j++;
            }
                
        }
        for(int z=0;z<size+size2 ;z++){
            System.out.print(sortarr[z]);
        }

    }
}
