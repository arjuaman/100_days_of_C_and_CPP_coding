import java.util.*;
public class StackUsingQueue {
    Queue<Integer> q = new LinkedList<Integer>();
    
    boolean isEmpty(){
        return q.isEmpty();
    }

    void push(int item){
        int n = q.size();
        q.add(item);
        for(int i=0;i<n;i++){
            q.add(q.peek());
            q.poll();
        }    
    }

    int pop(){
        //1 2 3 4 5
        return q.poll();
    } 

    int peek(){
        return q.peek();
    }
    public static void main(String[] args){
        StackUsingQueue stack = new StackUsingQueue();
        stack.push(6);
        stack.push(9);
        stack.push(15);
        System.out.println(stack.pop());
        System.out.println(stack.peek());
    }
}
