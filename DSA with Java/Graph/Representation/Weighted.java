package Representation;
import java.util.*;

public class Weighted {
    public static void main(String [] args){

        Scanner sc =new Scanner(System.in);

        System.out.println("Enter the vertex");
        int V =sc.nextInt();

        System.out.println("Enter the edge");
        int e=sc.nextInt();

        int [][] graph=new int[V][V];

        for(int i=0;i<V;i++){
            int v =sc.nextInt();
            int u=sc.nextInt();
            int w =sc.nextInt();
            graph[u][v]=w;
            graph[v][u]=w;
        }

        System.out.println("Weighted graph adajancy matrix");

        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                System.out.print(graph[i][j]+ "  ");
              
            }
            System.out.println();
        }
    }
}
