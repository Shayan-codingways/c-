#include<iostream>
#include<stack>

using namespace std;

class Mystack{
    static const int max_size=5;
    int arr[max_size];
    int top=-1;

    public:  
        bool isFull(){
            if(top==max_size-1){
                    return true;
            }
            else{
                    return false;
            }
        } 

        bool is_empty(){
            if(top==-1){
                    return true;
            }
            else{
                 return    false;
            }
        } 
        
        void push(int val){
            if(isFull()){
                throw overflow_error("full");
            }
                arr[++top]=val;// storing value in arr through stack

        }

        void pop(){
            if(is_empty()){
                throw underflow_error("Empty");
            }
                top--;
        }
        
        int front(){
            if(is_empty()){
                throw underflow_error("Empty");
            }
            return arr[top];
        }

        int size(){
            return top+1;
        }



};

int main(){

    Mystack obj;

   // obj.pop();
    cout<<endl;
    obj.push(10); //takes input in stack and then puts in arr
    obj.push(234);
    obj.push(34);
    obj.push(24);
    obj.push(23);


    cout<<endl<<"size: "<<obj.size()<<endl;
    cout<<"front: "<<obj.front()<<endl;
    obj.pop();
    cout<<endl<<"front after pop: "<<obj.front()<<endl;


}