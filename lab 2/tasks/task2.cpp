#include<iostream>
#include<vector>
using namespace std;

class WareHouse{

private:
   // declaring vectors
   vector<int> productcodes;
   vector <int> productquantities;

public:

    // part 1
    void stock(int c, int q){
        
        bool codeexist=false;

            for(int j=0; j<productcodes.size(); j++){

                if(productcodes[j] == c){
                    productquantities[j]=productquantities[j]+q;
                    codeexist=true;
                    
                }
            
            }
            
            if(codeexist==false){
                    productcodes.push_back(c);
                    productquantities.push_back(q);
            }
            
        }
        
    //part 2
    void order(int c, int q){
        
        bool correct_code=false;
        
             for(int j=0; j<productcodes.size();j++){
                 
                if(productcodes[j]==c){
                    if(productquantities[j]>=q){
                         productquantities[j] = productquantities[j]-q;
                         correct_code=true;
                    }
                    else{
                         cout<<"This much quantity unavailable!"<< endl;
                         correct_code=true;
                    }
                    
                }
                
            }
             
            // cant write within loop as for every entry it may print
            if(correct_code==false){
                cout<<"Incorrect code no "<<c<<endl;
            }
        }
        
    // part 3
    void show(int c){
        
        bool true_code=false;
        
            for(int j=0; j<productcodes.size();j++){
                 
                if(productcodes[j]==c){
                    cout<<"available quantity: "<<productquantities[j]<<endl;
                    true_code=true;
                }
            
            }
            
            if(true_code==false){
                cout<<"Invalid code: " << c << endl;
            }
                
    }
    
    

        // display
        void display_stock(){
                 
            for(int i=0; i<productcodes.size(); i++){ 
                cout<<productcodes[i]<<" ";
            }
            cout << endl;
            
            for(int i=0; i<productquantities.size(); i++){ 
                cout<<productquantities[i]<<" ";
            }
            cout << endl;
            
        }



};


    




int main(){
   WareHouse w;
        w.stock(1, 10); // print "10 items with code 1 added"
        w.stock(2, 20); // print "20 items with code 2 added"
        w.stock(3, 30); // print "30 items with code 3 added"
        w.stock(1, 5); // print "5 more items with code 1 added, total 15"
        
        cout<<endl;
        w.order(1, 3); // print "3 items delivered with code 1"
        w.order(2, 25); // print "the requested quantity is not available"
        w.order(2, 11); // print "11 items delivered with code 2"
        w.order(4, 5); // print "Code 4 not found"
        
        cout<<endl;
        w.show(1); // print "12 items are stored with code 1"
        w.show(2); // print "9 items are stored with code 2"
        w.show(3); // print "30 items are stored with code 3"
        w.show(4); // print "Code 4 not found"

        cout<<endl;
        cout<<"Display -->"<<endl;
        w.display_stock();
        return 0;
  
}