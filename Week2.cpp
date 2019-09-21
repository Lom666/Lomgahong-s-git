#include<iostream>
using namespace std;

struct ListNode{
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(NULL){}
}; 

void Print(ListNode *head){
	cout<<head->val;
	while(head->next!=NULL){
		head=head->next;
		cout<<head->val;
	}
}; 

ListNode* addTwoNumbers(ListNode* l1,ListNode* l2){
	ListNode *p=new ListNode(0);
	ListNode *result=p;
    ListNode *p1=l1;
    ListNode *p2=l2;
    
    int flag=0;
    while (p1!=NULL||p2!=NULL||flag==1){
        int temp=flag;
        if (p1!=NULL) {
            temp+=p1->val;
            p1=p1->next;
        }
        if (p2!=NULL){
            temp+=p2->val;
            p2=p2->next;
        }
        if(temp>9){
            temp-=10;
            flag=1;
        } 
		else{
            flag=0;
        }
        if(p1==NULL&&p2==NULL&&flag==0)
        	p->next=NULL;
        else
        	p->next=new ListNode(0);
        p->val=temp;
		p=p->next;  	
    }
    return result;
};

int main(){
	ListNode a(1),b(2),c(3),d(4),e(9),f(7),g(6);
	a.next=&b;
	b.next=&c;
	//c.next=&d;
	
	e.next=&f;
	f.next=&g;
	
	Print(&a);
	cout<<endl;
	Print(&e);
	cout<<endl;
	
	ListNode *result=addTwoNumbers(&a,&e);
	Print(result);

	return 0;
}


