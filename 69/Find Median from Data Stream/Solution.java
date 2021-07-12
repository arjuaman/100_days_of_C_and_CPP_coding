class MedianFinder {

    PriorityQueue<Integer> maxheap = new PriorityQueue<>((x, y) -> Integer.compare(y, x));
    PriorityQueue<Integer> minheap = new PriorityQueue<Integer>();
    int tot=0;
    double median=0.0;
    boolean nonzero=false;
    
    public MedianFinder() {
        
    }
    
    public void balance(){
        int maxsize = maxheap.size();
        int minsize = minheap.size();
        
        if(Math.abs(maxsize-minsize)>1){
            if(maxsize>minsize){
                while(maxsize-minsize>1){
                    int x = maxheap.poll();
                    minheap.offer(x);
                    maxsize = maxheap.size();
                    minsize = minheap.size();
                }
            }
            else{
                while(minsize-maxsize>1){
                    int x = minheap.poll();
                    maxheap.offer(x);
                    maxsize = maxheap.size();
                    minsize = minheap.size();
                }
            }
        }
    }
    
    public void addNum(int num) {
        if(num!=0)
            nonzero=true;
        
        int maxsize = maxheap.size();
        int minsize = minheap.size();
        
        if(maxheap.size()!=0 && num>maxheap.peek()){
            minheap.offer(num);
            // cout<<"pushed to minheap\n";
        }
        else{
            maxheap.offer(num);
            // cout<<"pushed to maxheap\n";
        }
            
        tot++;
        balance();
    }
    
    public double findMedian() {
        if(tot==1){
            // cout<<"tot is 1";
            return (maxheap.size()>minheap.size())?(double)maxheap.peek():(double)minheap.peek();
        }
        
        if(tot%2!=0){
            //odd
            return maxheap.size()>minheap.size()?maxheap.peek():minheap.peek();
        }
        
        if(nonzero==false)
            return 0.0;
        
        median = ((double)minheap.peek()+maxheap.peek())/2;
        return median;
    }
}

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder obj = new MedianFinder();
 * obj.addNum(num);
 * double param_2 = obj.findMedian();
 */