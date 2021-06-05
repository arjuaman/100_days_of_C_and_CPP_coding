public class LinkedList{
    
    Node head;   
    class Node{
        int data;
        Node next;

        Node(int x){
            this.data = x;
            next = null;
        }
    }

    public void append(int val){
        Node newnode = new Node(val);
        if(head==null){
            head= newnode;
            return;
        }
        Node temp = head;
        while(temp.next!=null){
            temp = temp.next;
        }
        temp.next = newnode;
        return;
    }

    public void display(){
        if(head!=null){
            while(head!=null){
                System.out.print(head.data + ", ");
                head = head.next;
            }
        }
    }

    public boolean hasCycle(){
        if(head.next==head){
            return true;
        }

        if(head==null || head.next==null){
            return false;
        }

        Node slow = head;
        Node fast = head;
        while(fast!=null && fast.next!=null){
            fast = fast.next.next;
            slow = slow.next;
            if(slow==fast){
                return true;
            }
        }
        return false;
    } 
}