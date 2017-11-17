#include <iostream>
using namespace std;

class Node{
    public:
		int data;
		Node *next;
};

class linkedList{
	public:
		Node *head;
		Node *tail;
		
		linkedList(){
			head=NULL;
			tail=NULL;
		}
		
	void addNode(int value){
		Node *temp=new Node;
		temp->data=value;
		temp->next=NULL;
		if(head==NULL){
			head=temp;
			tail=temp;
		}
		else{
			tail->next=temp;
			tail=temp;
		}
	}
	
	void insertNode(int val,int pos){
		Node *bef=NULL,*aft=head;
		for(int i=1;i<pos;i++){
			bef=aft;
			aft=aft->next;
		}
		Node *temp=new Node;
		temp->data=val;
		bef->next=temp;
		temp->next=aft;
	}
	
	void deleteNode(int pos){
		Node *bef=NULL;
		Node *aft=head;
		for(int i=1;i<pos;i++){
			bef=aft;
			aft=aft->next;
		}
		bef->next=aft->next;
	}
	
	void display(){
		Node *disptr=head;
		while((disptr!=NULL)){
			cout<<disptr->data<<" ";
			disptr=disptr->next;
			cout<<"\n";
		}
	}
		
};

int main() {
		linkedList ll1;
		int temp,temp1;
		for(int i=1;i<=5;i++){
			cout<<"Enter a number:";
			cin>>temp;
			ll1.addNode(temp);
	}
		ll1.display();
		cout<<"Enter number to be inserted:";
		cin>>temp;
		cout<<"Enter position at which number is to be inserted:";
		cin>>temp1;
		ll1.insertNode(temp,temp1);
		ll1.display();
		cout<<"Enter position at which number is to be deleted:";
		cin>>temp;
		ll1.deleteNode(temp);
		ll1.display();
		return 0;
}
