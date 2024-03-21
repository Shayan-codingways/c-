#include<iostream>
#include<stack>
using namespace std;

//head poointer points to top node
// in last node we have null stored

/*Create node*/
class node{

   public:
      int val;
      node* next; // node type (datatype is node so pointer would be its own.) 
};

class mystack{

   // object of node class
   // initially top is null
   node* top=0; 
   
   public:
   
      // push function for creating nodes.
      void push(int a){
         // new node created and its address is stored in ptr pointer of type node
         node* ptr=new node();

         // the node ptr value section holds value 
         ptr->val = a;

         // the node ptr next section holds the address of next node
         // initially top is null. 1st node has null in next. 
         ptr->next= top;
          
         top=ptr; // top has address of newly created node
      }

      bool isEmpty(){
			return top==NULL;    //it is the most necessary
		}

      void show(){

			if (isEmpty()) {
              cout << "Stack is empty." << endl;
              return;
         }

         node* current = top;  // Start from the top

         cout << "Stack elements: ";
         while (current != nullptr) {
              cout << current->val << " ";  // Print the value
              current = current->next;      // Move to the next node
         }

         cout << endl;
      }
      

      void pop(){
         // new object created ptr pointing to top node.
         node* ptr =top;

         // the second topmost address in top->next is stored in top next
         // initially we pointed ptr to top node, then we used its next to store it in top so thatnow top changes  
         top=top->next;
         delete (ptr);

      } 


};

int main(){

   mystack obj;

   obj.push(2);
   obj.push(3);
   obj.push(10);
   obj.show();
   obj.pop();
   obj.show();
}