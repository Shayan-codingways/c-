#include <iostream>
using namespace std;



class Student{
    
    private:
    float scores[5];
    
    public:

        void input(float n[5]){
            for(int i=0;i<5;i++){
                scores[i]=n[i];
            }
        }
        
        int Total_score(){
            float sum=0;
            for(int i=0;i<5;i++){
                sum=sum+scores[i];
            }
            return sum;
        }
    
};

int main()
{
    Student obj;
    
    int i;
    float n[5];
    
    cout<<"Enter 5 scores: " << endl;
    for(i=0; i<5; i++){
       cin >> n[i];    
    }
    obj.input(n);

    
    int sum;
    sum=obj.Total_score();
    
    cout<<"Sum = "<< sum;
}


