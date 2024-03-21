
#include<iostream>
#include<vector>
using namespace std;

// passing vector int data type, refrence of vec1
void display(vector<int> &v){
    for(int i=0; i<v.size(); i++){ //v.size() method calculates size
        cout<<v[i]<<" ";
        cout << "{"<< v.at(i)<< "} ";
    }
    cout<< endl;
} 

int main(){

    // declaring vector   
   vector <int> vec1; // manages size itself.
   
   // entries taking 
   int element;
   
   // push method
    for(int i=0;i<4;i++){
        cout<<"Enter element for this vector " ;
        cin>> element;
        // method for entering element at the end of an element
        // at() method read/write existing element
        vec1.push_back(element);
    }
    
    // pop method
    //vec1.pop_back();
    
    
    //calling display function
    display(vec1);
    
    //insert method
    /*vector<int> :: iterator iteri= vec1.begin();
    vec1.insert(iteri, 566); // inserts 566 at start
    display(vec1);
    
    
    vector<int> :: iterator iter= vec1.end();
    vec1.insert(iter, 566); // inserts 566 at end
    display(vec1);*/
    
    /*vector<int> :: iterator itero= vec1.begin();
    vec1.insert(itero+1,5, 566); // inserts 566 before 1 and 5 times
    display(vec1);*/
    
    
   return 0;
}