#define ll long long
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& nums, int k) {
        for(int i=nums.size()-1; i>=0; i--){
            nums[i] += k;
            k = nums[i]/10;
            nums[i] = nums[i]%10;
        }
        while(k>0){
            nums.insert(nums.begin(),k%10);
            k/=10;
        }
        
//         ll num = 0, ex = 0;
//         reverse(nums.begin(), nums.end());
//         for(int i=0; i<nums.size(); i++){
//             num += nums[i]*pow(10, ex);
//             ex++;
//         }
//         cout<<num;
//         num += k;
        
//         ex=0;
//         nums.clear();
//         while(num){
//             int temp = num%10;
//             num /= 10;
//             nums.push_back(temp);
//         }
        
//         reverse(nums.begin(), nums.end());
        return nums;
    }
};