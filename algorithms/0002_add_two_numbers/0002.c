#include <stdio.h>


struct ListNode {
   int val;
   struct ListNode *next;
};





struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    int first=0;
    struct ListNode firstNode;
    int carrybit =0;

    
    while (l1->next != NULL && l2->next != NULL)
    {
       int val =  l1->val + l2->val;
       
       if (val/10 > 9)
       {
           val = val%10;
           carrybit = 1
       }
       firstNode.val = val;
       l1 = l1->next;
       l2 = l2->next;
    }
    
     
    
}

int main()
{


}