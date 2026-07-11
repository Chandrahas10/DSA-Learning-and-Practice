package Representation;
import java.util.*;
public class AdjancyMatrix {
    public static void main(String[] args) {
        
        // ArrayList<ArrayList<Integer>> graph =new ArrayList<>();
        Scanner sc =new Scanner(System.in);

        System.out.print("Enter number of vertices: ");
        int vertices = sc.nextInt();

        System.out.print("Enter number of edges: ");
        int edges = sc.nextInt();

        int[][] graph =new int[vertices][vertices];
        System.out.println("Enter the vertices");

        for(int i=0;i<edges;i++){
            int u=sc.nextInt();
            int v=sc.nextInt();
           

            graph[u][v]=1;
            graph[v][u]=1;
        }

        System.out.print("Adajancy matrix ");

        for(int i=0;i<vertices;i++){
            for(int j=0;j<vertices;j++){
                System.out.print(graph[i][j] +" ");
            }
            System.out.println();
        }
        sc.close();
    }
}
