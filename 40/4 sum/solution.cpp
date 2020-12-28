class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        vector<vector<int>> out;
  int len = nums.size(),left,right,temp,var=0,x;
  sort(nums.begin(),nums.end());
  for(int i=0;i<len;i++){
    for(int j=i+1;j<len;j++){
      left=j+1;
      right=len-1;
      temp=target-nums[i]-nums[j];
      while(left<right){
        var = nums[left]+nums[right];
        if(var==temp){
          vector<int> quad(4,0);
          quad[0] = nums[i];
          quad[1] = nums[j];
          quad[2] = nums[left];
          quad[3] = nums[right];
          out.push_back(quad);
          
          while(left<right && nums[left]==quad[2])
            ++left;
          while(left<right && nums[right]==quad[3])
            --right;
        }
        else{
          if(var<temp)
            left++;
          else if(var>temp)
            right--;
        }
      }
      while(j+1<len && nums[j+1]==nums[j])
        ++j;
    }
    while(i+1<len && nums[i+1]==nums[i])
      ++i;
  }
        return out;
    }
};