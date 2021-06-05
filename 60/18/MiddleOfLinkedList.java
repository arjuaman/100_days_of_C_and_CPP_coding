public class MiddleOfLinkedList {
    public static void main(String[] args){
        LinkedList ahead = new LinkedList();
        /*
        1->2->3->null, return 2
        1->2->3->4->null, return 3
        1->null, return 1
        */
        ahead.append(1);
        ahead.append(2);
        ahead.append(3);
        ahead.append(4);
        System.out.println("\nCreated Linked list is: ");
            ahead.display();
        
        ahead.printMiddle();
    }
}
