import java.util.*;
/*
Design a class, MovingAverage, which contains a method, next that is responsible for returning the moving average 
from a stream of integers.
Note: a moving average is the average of a subset of data at a given point in time.

Ex: Given the following series of events...

// i.e. the moving average has a capacity of 3.
MovingAverage movingAverage = new MovingAverage(3);
m.next(3) returns 3 because (3 / 1) = 3
m.next(5) returns 4 because (3 + 5) / 2 = 4 
m.next(7) = returns 5 because (3 + 5 + 7) / 3 = 5
m.next(6) = returns 6 because (5 + 7 + 6) / 3 = 6
*/

public class MovingAverage {
    
    Queue<Integer> q;
    int len;
    double avg;
    public MovingAverage(int size) {
        q = new LinkedList<Integer>();
        len=size;
        avg = 0;
    }

    public double next(int val) {
        if(q.size()==len){
            q.poll();
        }
        avg = 0;
        q.add(val);
        Queue<Integer> qcopy = new LinkedList<Integer>();
        qcopy.addAll(q);
        while(qcopy.size()!=0){
            avg += qcopy.poll();
        }
        return avg/q.size();
    }

    public static void main(String[] args){
        MovingAverage m = new MovingAverage(3);
        System.out.println(m.next(3)); 
        System.out.println(m.next(5)) ;  
        System.out.println(m.next(7));
        System.out.println(m.next(6)) ;
    }
}