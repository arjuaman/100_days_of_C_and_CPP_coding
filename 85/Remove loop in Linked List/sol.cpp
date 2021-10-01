class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        if(head==NULL) return;
        if(head->next==NULL) return;
        if(head->next==head){
            head->next=NULL;
            return;
        }
        Node* fast = head, *slow = head;
        bool loopCheck= false;
        while(slow && fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                loopCheck = true;
                break;
            }
        }
        if(!loopCheck) return;
        
        fast = head;
        Node* prev = slow;
        while(slow!=fast && slow && fast){
            slow = slow->next;
            fast = fast->next;
        }
        // slow->next = NULL;
        // cout<<"Previous is: "<<prev->data<<" and Slow is: "<<slow->data<<"\n";
        while(prev->next!=slow){
            prev = prev->next;
            // cout<<prev->data<<" ";
        }
        // cout<<"\nPrevious is: "<<prev->data<<" and Slow is: "<<slow->data<<"\n";
        prev->next = NULL;
    }
};