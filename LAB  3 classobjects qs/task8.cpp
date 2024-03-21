#include<iostream>
#include<vector>
using namespace std;

class integerset{
   vector<bool> values;

   public:
   // constructor set to false
   integerset(bool set){
      for (int i=0; i<=100; i++ ){
         values.push_back(set);
      }
   }
   integerset(){
      for (int i=0; i<=100; i++ ){
         values.push_back(false);
      }
   }

    // integerset type to return it 
    //integerset x taken as an argument
   integerset unionofsets(integerset x){

      integerset uni_set; // wnat to return this object
      
      // values[i] already there for 1 object set
      // x. values access values for set 2 from constructor
      // uniset.values stores values
      for(int i =0; i<=100; i++){
         if(values[i]== false && x.values[i]==false){
            uni_set.values[i]=false;
         }
         else if(values[i]== true && x.values[i]==false){
            uni_set.values[i]=true;
         }
         else if(values[i]== false && x.values[i]==true){
            uni_set.values[i]=true;
         }
         else if(values[i]== true && x.values[i]==true){
            uni_set.values[i]=true;
         }

      }

      return uni_set;
   }

   integerset intersectionofsets(integerset x){

      integerset inter_set;

      for(int i =0; i<=100; i++){
         if(values[i]== false && x.values[i]==false){
            inter_set.values[i]=false;
         }
         else if(values[i]== true && x.values[i]==false){
            inter_set.values[i]=false;
         }
         else if(values[i]== false && x.values[i]==true){
            inter_set.values[i]=false;
         }
         else if(values[i]== true && x.values[i]==true){
            inter_set.values[i]=true;
         }

      }
      
      return inter_set;
      }

      // insert and delete
      void insertElement(int i) {

        if (i >= 0 && i <= 100) {
            values[i] = true;
        } else {
            cout << "Invalid element!" << endl;
        }
      }

      // Function to delete an element from the set
      void deleteElement(int i) {
        if (i >= 0 && i <= 100) {
            values[i] = false;
         } 
         else {
            cout << "Invalid element. P" << endl;
         }
      }

      // display
      string setto_string(){
         int i;
         for(int i=0; i<=100; i++){
         if(values[i]){
    
            return  "i ";
         }
         else {
            return " ";
         }
         
         }
      } 
    

      // is equal function 
      bool isequalto(integerset x){
         bool a=0;
         for(int i=0; i<=100; i++){
            if(values[i]==x.values[i]){
               a=a+1;
            }
         }
         if(a==100){
            return true;
         }
         else{
            return false;
         }
      }

      // array constructor
      integerset(int arr[100]){
         for (int i=0; i<=100; i++){
            if(arr[i]==i){
               values[i]=true;
            }
            else{
               values[i]=false;
            }
         }
      }



};

int main(){
   
   integerset s1(false);
   integerset s2(true);
   
   // check for union
   integerset uni =s1.unionofsets(s2);
   cout<<"display Union: " << endl;
   uni.setto_string();

   // check for intersection
   integerset inte  =  s1.intersectionofsets(s2);
   cout<<endl<<"display intersection: " << endl;
   inte.setto_string();


   // insert and delete

   s1.insertElement(7);
   s1.insertElement(12);
   cout<<endl<<"inseted at 7/12: " << endl;
   uni.setto_string();

   s2.deleteElement(7);
   cout<<endl<<"delted at 7: " << endl;
   uni.setto_string();

   //checking for equal or not?
   integerset x(true);
   integerset y(true);
   if(x.isequalto(y)){
      cout<<endl<<"x and y is equal" << endl;
   }
   else{
      cout<<endl<<"Unequal";
   }

   // array taking

   int arr[100]={1,2,3,4};
   integerset arry_check;
   cout<<endl<<"array_check: "<<arry_check.setto_string();


return 0;
}