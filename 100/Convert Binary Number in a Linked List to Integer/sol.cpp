int getDecimalValue(ListNode* head) {
    int ans = 0;
	for(;head;head->next){
		ans = (ans<<1)+head->val;
	}
	return ans;
}