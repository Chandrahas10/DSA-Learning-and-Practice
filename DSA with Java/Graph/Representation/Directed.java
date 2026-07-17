package Representation;
import java.util.*;
public class Directed {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);

        System.out.println("Enter the edges");
        int E =sc.nextInt();

        System.out.println("Enter the vertex");
        int ve =sc.nextInt();

        int [][]graph =new int[ve][ve];

        for(int i=0;i<ve;i++){
            int u=sc.nextInt();
            int v=sc.nextInt();
            int w=sc.nextInt();
            graph[u][v]=w;
        }

        for(int i=0;i<ve;i++){
            for(int j=0;j<ve;j++){
                System.out.print(graph[i][j] + " ");
            }
            System.out.println();
        }
    }
}
