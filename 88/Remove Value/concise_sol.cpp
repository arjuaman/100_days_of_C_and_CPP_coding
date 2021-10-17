int removeElement(vector<int>& nums, int val) {
    int cnt = 0;
    for(int i = 0 ; i < nums.size() ; ++i) {
        if(nums[i] == val)
            cnt++;
        else
            nums[i-cnt] = nums[i];
			/* nums = [0,1,2,2,3,0,4,2], val = 2
			
			nums[0-0] = nums[0]
			nums[1-0] = nums[0]
			cnt++ = 1
			cnt++ = 2
			nums[4-2] = nums[4] => nums[2] i.e. 2 = nums[4] i.e. 3 => swapped
			nums[5-2] = nums[5]
			nums[6-2] = nums[6]
			cnt++ = 3
			*/
    }
    return nums.size()-cnt;  //8-3 = 5
}