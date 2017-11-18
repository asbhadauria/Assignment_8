#include <iostream>
using namespace std;

class array_stack{
	public:
		void add(int arr[],int index,int val){
		arr[index]=val;
		}
		void del(int arr[],int index){
			arr[index-1]='\0';
		}
		void display(int arr[],int index){
			for(int i=0;i<index;i++)
			    if(arr[i]!='\0')
				    cout<<arr[i]<<" ";
		}
};

int main() {
	array_stack as1;
	int size,temp;
	cout<<"Enter the max size size of the stack";
	cin>>size;
	int arr[size];
	int index=0;
	cout<<"Enter the number of elements";
	cin>>size;
	for(int i=0;i<size;i++){
		cout<<"Enter a Number:";
		cin>>temp;
		as1.add(arr,index,temp);
		index++;
	}
	as1.display(arr,size);
	as1.del(arr,size);
	cout<<"After Pop"<<"\n";
	as1.display(arr,size);
	return 0;
}
