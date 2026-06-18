import java.util.*;

class Node {
    int data;
    Node left, right;

    Node(int value) {
        data = value;
        left = right = null;
    }
}

public class Create {

    // Print Tree
    public static void printTree(Node root, int level) {
        if (root == null) {
            return;
        }

        printTree(root.right, level + 1);

        for (int i = 0; i < level; i++) {
            System.out.print("    ");
        }

        System.out.println(root.data);

        printTree(root.left, level + 1);
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the root element: ");
        int x = sc.nextInt();

        Queue<Node> q = new LinkedList<>();

        Node root = new Node(x);
        q.offer(root);

        // Build Binary Tree Level Wise
        while (!q.isEmpty()) {

            Node temp = q.poll();

            System.out.print("Enter the left child of " + temp.data + " : ");
            int first = sc.nextInt();

            if (first != -1) {
                temp.left = new Node(first);
                q.offer(temp.left);
            }

            System.out.print("Enter the right child of " + temp.data + " : ");
            int second = sc.nextInt();

            if (second != -1) {
                temp.right = new Node(second);
                q.offer(temp.right);
            }
        }

        System.out.println("\nTree Created Successfully!");

        System.out.println("\nTree Structure:\n");
        printTree(root, 0);

        sc.close();
    }
}