public class ContainsCycle {
    public static void main(String[] args){
        /*
        1->2->3->1 -> true (3 points back to 1)
        1->2->3 -> false
        1->1 true (1 points to itself)
        */
        LinkedList head = new LinkedList();
        head.append(1);
        head.append(2);
        head.append(3);
        //head.append(1);
        if(head.hasCycle()==true){
            System.out.println("Yes!");
        }
        else{
            System.out.println("No!");
        }
    }
}
