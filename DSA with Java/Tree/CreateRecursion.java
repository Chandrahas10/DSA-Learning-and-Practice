import java.util.*;

class Node{
    int data;
    Node left,right;

    Node(int value){
        data=value;
        left=right=null;
    }
}



public class CreateRecursion {
     static Scanner sc =new Scanner(System.in);
    public static void main(String[] args) {

        Node root;
        root=BinaryTree();
        System.out.println("Inorder traversal  ");
        Inorder(root);
        System.out.println("Postorder traversal  ");
        Postorder(root);
        System.out.println("Preorder traversal  ");
        Preorder(root);
    }
public static Node BinaryTree(){
   
    int x =sc.nextInt();
    if(x==-1) return null;

    Node temp =new Node(x);
    System.out.println("Enter the left child"+x+":");
    temp.left =BinaryTree();
    System.out.println("Enter the right child"+x+":");
    temp.right=BinaryTree();

    return temp;
}
public static void Inorder(Node root){
    if(root ==null) return ;
    Inorder(root.left);
    System.out.print(root.data+" ");
    Inorder(root.right);
}
public static void Preorder(Node root){
    if(root ==null) return ;
    System.out.print(root.data+" ");
    Preorder(root.left);
    Preorder(root.right);
}
public static void Postorder(Node root){
    if(root ==null) return ;
    Postorder(root.left);
    Postorder(root.right);
     System.out.print(root.data+" ");
}

}
