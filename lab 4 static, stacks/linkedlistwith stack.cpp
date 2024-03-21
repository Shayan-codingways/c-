#include<iostream>
using namespace std;

class node{
	// linked list has nodes
	// nodes have 2 partitions data and address of nxt pointer
	public:
		int data;
		node* link;     	
};

// made a stack class
class stack{     
     

	node* top;  // points to 1st node 

	public:
        
		//constructor initializes top
	    stack(){
			top=NULL;
		}

		///  functions for stack!
		void push(int a){
			node* ptr = new node(); 
			ptr->data = a;        
			ptr->link = top;      
			top = ptr;
		}

		void pop(){   //at the very end, we'll study pop
			node* ptr = top;  //1004
			top = top->link;  //1000
			//ptr mn para ab fazool 1000 wala top ka adress delete bhi krna hy
			delete(ptr);
		}
      

		void show(){

			if (isEmpty()){
				cout <<" Stack is Empty";
			}
			else{
			cout << top->link << endl; //next node k top ka address
			cout << top->data << endl; 
			cout << top; //node ka address
				
		}
		
		}
		bool isEmpty(){
			return top==NULL;    //it is the most necessary
		}
		//pop deletes the last data, also deletes the block
};  //we should call destructor at the end of the program, so that it could free the trash.


int main(){

	stack obj;

    //	obj.show();  
	// agar pehly likh dia to na koi address ay ga na value
	obj.push(10);
	obj.show();
}