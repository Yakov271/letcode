**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
private:
    int GetSize(ListNode* head)
        {
        int size = 0;
        if (head != NULL)
        {
        size = 1 + GetSize(head->next);
        }
        return size;
        }
    void Print(ListNode* a)
    {       int m;
         for(m=0;m<GetSize(a)+1;m++){

                     cout<<a->val<<"  <<  ";
                     a=a->next;
                 }
    }
    ListNode* reversePart(ListNode* head, int k)
    {
            ListNode  *b=head,  *temp, *a=NULL;
            int s,i,l, j,m;
            s=GetSize(b);
           
        
                j=0;
                
                 while(j<k){
                     
                 temp=b->next;
                 
                 b->next=a;
                 a=b;
                 j++;
                 if(j<k){
                 b=temp;}
                 
                 
                 }
            
            if(GetSize(temp)>=k){a=additem(b, reversePart(temp, k));}  
            else{
               a= additem(b,temp);} 
              return a;  
                            
            
            
    }
    ListNode* additem(ListNode* a,ListNode* b)
    {
        if(a==NULL){a=b;}
      else {
          //a->next=b;
        ListNode *end=a;
        while(end->next!=nullptr){end=end->next;}
        end->next=b;
      
          }
     
      return a;
    }
    

public:
    ListNode* reverseKGroup(ListNode* head, int k) {
         ListNode *b;      
                    
       int s,i,l, j,m;
       s=GetSize(head);
       vector<ListNode*> v(s);
       
       i=0;
        b=reversePart(head, k);
                 
                 
                 
        
        
    return b;
      
    }
};
