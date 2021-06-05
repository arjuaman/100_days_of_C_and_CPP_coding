public class LinkedList {
    Node head;

    public class Node{
        int data;
        Node next;

        Node(int d){
            data = d;
            next = null;
        }
    }

        public void push(int val){
            Node newNode = new Node(val);
            newNode.next = head;
            head = newNode;
        }

        public void append(int val){
            Node newNode = new Node(val);
            if(head==null){
                head = newNode;
                return;
            }
            newNode.next = null;
            Node temp = head;
            while(temp.next!=null){
                temp = temp.next;
            }
            temp.next = newNode;
            return;
        }

        public void display(){
            Node temp = head;
            while(temp!=null){
                System.out.print(temp.data+" ");
                temp = temp.next;
            }
        }

        public void printMiddle(){
            Node fast = head;
            Node slow = head;
            while(fast!=null && fast.next!=null){
                fast = fast.next.next;
                slow = slow.next;
            }
            System.out.print("The middle element is: "+slow.data);
        }
    }
