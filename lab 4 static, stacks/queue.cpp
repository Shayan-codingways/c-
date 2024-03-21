#include<iostream>
#include<stack>
#include<queue>
using namespace std;

//enqueue() same as push but is mn wala error nhi ayy ga function is with parameter, means is mn koi value jayy gii to inject element in the fixed array
//dequeue()same as pop to retrieve the elements from the same dynamic array
//empty()
//front() to return from top, stack ki value ko
//size()
//end() 
// objects are also known as instanse variables...
//queue mn aap ko dynamically memory mil rhi hoti hyy
//stack waly mn aap sab sy most recent wala  pehly uthaty hn
// queue mn jis order mn data ayy us hi order mn data retrieve krty hn.....


class myqueue{

    // declared stack as mstc
    queue<int > mque;

    public:

        void push(int value){
                mque.push(value);
        }

        int pop(){

            if (!isEmpty()){
                mque.pop();   //agar stack empty hy to pop sy underflow ka error ayy ga...
            }
            else{
                cout << "UnderFlow" ;
                
            }

        }

        bool isEmpty(){
            return mque.empty();   // this line is a must
        }


        int top(){

            if(!mque.empty()){
                return mque.front();
            }
            else{
                cout << "UnderFlow" ;
            }
            
        }

        size_t size(){
            return mque.size();
        }

        
};
int main(){

	myqueue m_obj;

    m_obj.push(10);
    m_obj.push(56);
    m_obj.push(46);
    m_obj.size();
    cout<<m_obj.top();
    m_obj.pop();
    cout<<m_obj.top();

}