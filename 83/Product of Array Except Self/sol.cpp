#define ll long long
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        ll prod=1, zeprod=1, cntZero=0;
        bool hasZero=false, hasNonZero=false, moreThanOneZero=false;
        for(int i:nums){
            if(i==0){
                hasZero=true;
                cntZero++;
            }
            else
                hasNonZero=true;
        }
        
        if(cntZero>1) moreThanOneZero=true;
        
        if(!hasNonZero) return nums;
        
        if(!hasZero){
            for(int &i:nums)
                prod*=i;
            for(int &i:nums){
                i = prod/i;
            }
            // return nums;
        }
        else if(moreThanOneZero){
            for(int &i:nums){
                i=0;
            }
        }
        else{
            for(int &i:nums){
                if(i!=0)
                    zeprod*=i;
            }
            for(int &i:nums){
                if(i!=0)
                    i=0;
                else
                    i=zeprod;
            }
        }
        
        return nums;
    }
};