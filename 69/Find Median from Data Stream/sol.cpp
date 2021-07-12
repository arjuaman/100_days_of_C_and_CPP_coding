class MedianFinder {
public:
    priority_queue<int> maxheap;
    priority_queue<int,vector<int>,greater<int>> minheap;
    int tot=0;
    double median;
    bool nonzero=false;
    MedianFinder() {
        
    }
    
    void balance(){
        int maxsize = maxheap.size();
        int minsize = minheap.size();
        
        if(abs(maxsize-minsize)>1){
            if(maxsize>minsize){
                while(maxsize-minsize>1){
                    int x = maxheap.top();
                    maxheap.pop();
                    minheap.push(x);
                    maxsize = maxheap.size();
                    minsize = minheap.size();
                }
            }
            else{
                while(minsize-maxsize>1){
                    int x = minheap.top();
                    minheap.pop();
                    maxheap.push(x);
                    maxsize = maxheap.size();
                    minsize = minheap.size();
                }
            }
        }
    }
    
    void addNum(int num) {  
        if(num!=0)
            nonzero=true;
        
        int maxsize = maxheap.size();
        int minsize = minheap.size();
        
        if(!maxheap.empty() && num>maxheap.top()){
            minheap.push(num);
            cout<<"pushed to minheap\n";
        }
        else{
            maxheap.push(num);
            cout<<"pushed to maxheap\n";
        }
            
        tot++;
        balance();
    }
    
    double findMedian() {
        if(tot==1){
            cout<<"tot is 1";
            return (maxheap.size()>minheap.size())?(double)maxheap.top():(double)minheap.top();
        }
        
        if(tot%2!=0){
            //odd
            return maxheap.size()>minheap.size()?maxheap.top():minheap.top();
        }
        
        if(nonzero==false)
            return 0.0;
        
        median = ((double)minheap.top()+maxheap.top())/2;
        return median;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */