#include<iostream>
using namespace std;


 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* lt;
        ListNode* ans;
        ListNode* L;
        L=new ListNode(0);
        ans=L;
        while(l1||l2)
        {
            int a,b;
            if(l1!=NULL) a=l1->val;
            else    a=0;
            if(l2!=NULL) b=l2->val;
            else    b=0;
            lt=new ListNode(a+b);
            L->next=lt;
            L=lt;
            if(l1)  l1=l1->next;
            else    l1=NULL;
            if(l2)  l2=l2->next;
            else    l2=NULL;
        }
        L=ans;
        while(L->next)
        {
            if(L->next->val>9)
            {
                L->next->val-=10;
                if(L->next->next)L->next->next->val++;
                else{
                    L->next->next=new ListNode(1);
                }
            }
            L=L->next;
        }
        return ans->next;
        
    }
};


int main()
{
	ListNode *l1;
	ListNode *l2;
	ListNode *tl1;
	ListNode *tl2;
	ListNode *ans;
	tl1=new ListNode(0);
	tl2=new ListNode(0);
	l1=tl1;
	int a;
	tl1->next=NULL;
	
	tl1->next=new ListNode(2);
	tl1=tl1->next;
	tl1->next=new ListNode(4);
	tl1=tl1->next;
	tl1->next=new ListNode(3);
	tl1=tl1->next;
	
	l2=tl2;
	tl2->next=new ListNode(5);
	tl2=tl2->next;
	tl2->next=new ListNode(6);
	tl2=tl2->next;
	tl2->next=new ListNode(4);
	tl2=tl2->next;
	
	ans=Solution().addTwoNumbers(l1,l2);
	
	
	while(ans)
	{
		cout<<ans->val<<endl;
		ans=ans->next;
	}
	
	
	
	return 0;
}
