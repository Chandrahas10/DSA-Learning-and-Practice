    import java.util.ArrayList;
    import java.util.Scanner;

    class Linersearch {
        public static void main(String [] args){
            Scanner sc =new Scanner(System.in);
            int n= sc.nextInt();
            ArrayList<Integer>nums =new ArrayList<>();
            for(int i=0;i<n;i++){
                nums.add(sc.nextInt());
            }
        
            int target =sc.nextInt();
            //  input is ready 
            int s=LinearSearchfun(n,nums,target);
            System.out.println("element is present at "+s);
        
        }
        
        private static int LinearSearchfun(int n,ArrayList<Integer>nums ,int target){
        for(int i=0;i<n;i++){
                if(nums.get(i)==target){
                    return i;
                }
            }
            return 0;
        }
    }
