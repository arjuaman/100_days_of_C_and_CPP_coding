class Solution {
public:
    int rob(vector<int>& nums) {
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<nums.size();i++){
            pq.push({nums[i],i});
        }
        
        int alt_sum=0;
        for(int i=0;i<nums.size();i+=2){
            alt_sum+=nums[i];
        }
        int sum = accumulate(nums.begin(),nums.end(),0);
        alt_sum = max(alt_sum, sum-alt_sum);
        
        
        priority_queue<pair<int,int>> dummy = pq;
        // while(!dummy.empty()){
        //     pair<int,int> x = dummy.top();
        //     dummy.pop();
        //     cout<<x.first<<" "<<x.second<<"\n";
        // }
        
        int cond;
        if(nums.size()%2==0)
            cond = nums.size()/2;
        else
            cond = ceil((float)nums.size()/2);
        
        int money=0;
        int ele_added=0;
        vector<bool> vis(nums.size(),false);
        // (!vis[pq.top().second+1] && !vis[pq.top().second-1] )
        while(ele_added<=cond && !pq.empty()){
            if(ele_added==cond)
                break;
            if(nums.size()==3 && vis[1])
            {
                return max(money, nums[0]+nums[2]);
            }
            if(pq.top().second == 0){
                if(!vis[pq.top().second+1]){
                    ele_added++;
                    if(ele_added>cond)
                        break;
                    cout<<"\n1.money added is: "<<pq.top().first<<" at "<<pq.top().second;
                    money += pq.top().first; 
                    
                    vis[pq.top().second] = true;
                    // pq.pop();
                    // continue;
                }
            }
            
            else if(pq.top().second == nums.size()-1){
                if(!vis[pq.top().second-1]){
                    ele_added++;
                    if(ele_added>cond)
                        break;
                    money += pq.top().first; 
                    cout<<"\n2.money added is: "<<pq.top().first<<" at "<<pq.top().second;
                   
                    vis[pq.top().second] = true;
                    // pq.pop();
                    // continue;
                }
            }
            
            else if(!vis[pq.top().second-1] && !vis[pq.top().second+1])
            {
                ele_added++;
                if(ele_added>cond)
                        break;
                money += pq.top().first;   
                cout<<"\n3.money added is: "<<pq.top().first<<" at "<<pq.top().second;
                
                vis[pq.top().second] = true;
            }
            
            pq.pop();
        }
        cout<<"\nelements added: "<<ele_added;
        
        
        return max(money,alt_sum);
    }
};