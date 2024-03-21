
#include<iostream>
#include<vector>
using namespace std;

// passing vector int data type, refrence of vec1
template <class T>
void display(vector<T> &v){
    for(int i=0; i<v.size(); i++){ //v.size() method calculates size
        cout<<v[i]<<" ";
        
    }
    cout<< endl;
} 

int main(){

    // ways to create a vector
   vector <int> vec1; // 0 length vector
   display(vec1); // 0 size
  
  
   vector<char> vec2(4); // 4 element integer vector
   // push method
    vec2.push_back('5');
    vec2.push_back('5');
    vec2.push_back('5');
    vec2.push_back('5');
    // pop method
    //vec1.pop_back();
    
     display(vec2); // 4 size
     
     
   vector<char> vec3(vec2); // 4 eklement character vector from vec2
   display(vec3);
   
   vector <int> vec4(6,3); // 3 6 times displayed
    display(vec4);
    cout<< vec4.size();


    
   return 0;
}