import java.util.*;
class Largestele{
    public static void main(String [] args){
        Scanner sc =new Scanner(System.in);
        int n= sc.nextInt();
        ArrayList<Integer>nums =new ArrayList<>();
        for(int i=0;i<n;i++){
            nums.add(sc.nextInt());
        }
    
        //  input is ready 
        int s=LinearSearch(n,nums);
        System.out.println("largest element "+s);
       
    }
    
    public static int LinearSearch(int n,ArrayList<Integer>nums ){
        int max=nums.get(0);
          for(int i=1;i<n;i++){
            if(nums.get(i)>max)
                    max=nums.get(i);
        }
        return max;
}
}
