#include<iostream>
#include<stack>
using namespace std;

class mystack{
    
    stack<char> input;
    int top=0;
    
    public:

    void push(){
        string n;
        cout<<"enter string of parantheses/braces and brackets.: "<<endl;
        cin >> n;
       

            
            for(int i=0; i<n.length();i++){
                char current=n[i];
                input.push(n[i]);
                top=top+1;
            }
        

    }

    bool check(){

        stack<char> temp=input;
        int top_temp=top-1;
        bool chck=false;
        
    if(!input.empty()){

    
        while(top!=0){
            char a=input.top();
            char b =temp.top();


            if(a=='}' && a!='{'){
                if(b=='[' || b=='('){
                    return false;
                    break;
                }
                 chck=true;
            }
            else if(a==']' && a != '['){
                
                if(b=='{' || b=='('){
                    return false;
                    break;
                }
                 chck=true;
                
            }
            else if(a==')' && a!='('){
                
                if(b=='{' || b=='('){
                    return false;
                    break;
                }
                chck=true;
            }
            
            top=top-1;
            top_temp=top_temp-1;

        } 

        if(chck){
            return true;
        }
        
    }


    }


       

};

int main(){

   mystack obj;
   
   obj.push();

   if(obj.check()){
      cout<<endl<<"true!";
   }
   else{
    cout<<endl<<"False!";
   }

   

   

}