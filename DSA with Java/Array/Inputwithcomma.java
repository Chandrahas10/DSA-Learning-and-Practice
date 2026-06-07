import java.util.*;
class Inputwithcomma {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        String input =sc.nextLine();

        if(input.startsWith("[") && input.endsWith("]"))
            input =input.substring(1,input.length()-1);

        String [] s =input.split(",");
        ArrayList<Integer>arr =new ArrayList<>();
       
        for(String n:s){
            int num =Integer.parseInt(n);
            arr.add(num);
        }
        for(int a:arr){
            System.out.print(a+" ");
        }

    }
}
