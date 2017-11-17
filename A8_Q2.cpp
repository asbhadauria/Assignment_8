#include <iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
};

class stack{
	public:
		Node *head=NULL,*tail=NULL;
		
		void push(int val){
			Node *temp=new Node;
			temp->data=val;
			temp->next=NULL;
			if(head==NULL)
				head=temp;
			else{
				temp->next=head;
				head=temp;
			}	
		}
		
		void pop(){
			Node *temp=new Node;
			temp=head;
			head=head->next;
			delete temp;
		}
		
		void display(){
			Node *temp=new Node;
			temp=head;
			while(temp!=NULL){
				cout<<temp->data<<" ";
				temp=temp->next;
			}
			cout<<"\n";
		}
};

int main() {
		stack s1;
		int temp;
		for(int i=1;i<=5;i++){
		cout<<"Enter a Number:";
		cin>>temp;
		s1.push(temp);
		}
		s1.display();
		cout<<"After Pop:";
		s1.pop();
		s1.display();
		return 0;
}
