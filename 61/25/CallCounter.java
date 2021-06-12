/*
This question is asked by Google. Create a class CallCounter that tracks the number of calls a client has made
 within the last 3 seconds. Your class should contain one method, ping(int t) that receives the current timestamp 
 (in milliseconds) of a new call being made and returns the number of calls made within the last 3 seconds.
Note: you may assume that the time associated with each subsequent call to ping is strictly increasing.

Ex: Given the following calls to ping…

ping(1), return 1 (1 call within the last 3 seconds)
ping(300), return 2 (2 calls within the last 3 seconds)
ping(3000), return 3 (3 calls within the last 3 seconds)
ping(3002), return 3 (3 calls within the last 3 seconds)
ping(7000), return 1 (1 call within the last 3 seconds)
*/
public class CallCounter {
    int num_calls;
    boolean[] diary = new boolean[10000000];
    CallCounter(){
        num_calls = 0;
    }
    int ping(int t){
        num_calls=0;
        diary[t] = true;
        for(int i=t;i>=0 && i>(t-3000);i--){
            if(diary[i]==true){
                num_calls++;
            }
        }
        return num_calls;
    }
    public static void main(String[] args){
        CallCounter c = new CallCounter();
        System.out.println(c.ping(1));
        System.out.println(c.ping(300));
        System.out.println(c.ping(3000));
        System.out.println(c.ping(3002));
        System.out.println(c.ping(7000));
    }
}

/*Other solution:

class RecentCounter {
 Queue<Integer> queue;
public RecentCounter() {
    queue = new LinkedList<>();
}

public int ping(int t) {
    queue.add(t);
    while (queue.peek() < t - 3000) {
        queue.remove();
    }

    return queue.size();
}
}

*/