import java.util.*;

public class Findmissingele {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] nums = new int[n];

        for(int i = 0; i < n; i++) {
            nums[i] = sc.nextInt();
        }

        Arrays.sort(nums);

        ArrayList<Integer> arr = new ArrayList<>();

        int i = 0;
        int k = nums[0];

        while(i < n) {
            if(nums[i] != k) {
                arr.add(k);
                k++;
            } else {
                i++;
                k++;
            }
        }

        System.out.println(arr);
    }
}