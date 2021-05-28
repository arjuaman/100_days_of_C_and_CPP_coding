public class Node{
    public int data;
    public Node next;

    Node head;

    public Node() {}
    public Node(int val) { this.data = val; }
    public Node(int val, Node next) { this.data = val; this.next = next; }


    public void add(int data){
        Node toAdd = new Node(data);
        if(isEmpty()){
            head = toAdd;
            return;
        }
        Node temp = head;
        while(temp.next!=null){
            temp = temp.next;
        }
        temp.next = toAdd;
    }

    public boolean isEmpty(){
        return head==null;
    }

    public void print(){
        if(isEmpty()){
            return;
        }
        while(head!=null){
            System.out.printf("%d ",head.data);
            head= head.next;
        }
    }
}
