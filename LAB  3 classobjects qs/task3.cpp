#include<iostream>
using namespace std;

class Book{

   private:
        string author;
        string title;
        string publisher;
        float price;
        int stock;

   public:
        Book(string a, string p, string t, float pr, int s){
            author=a;
            publisher=p;
            title=t;
            price=pr;
            stock=s;
        }
    
        bool Search_book(string tit, string au){
            return (author==au && title==tit);
                
        }
        void display_details(){
            cout<<"Avaialble"<< endl<< "    --> Book Details "<< endl<<"Author: "<< author<<endl<< "Publisher: "<<publisher<< endl<< "Title: " <<title << endl<< "Price: "<< price << endl << "Stock: " <<stock<<endl<<endl; 
        }

        float stock_check(int st){
            if(stock>=st){
                return price*st;
            }
            else{
                return -1;
            }

        }

};

int main(){

    Book books[5] = {
        Book("Shayan","DDF","The C++ Programming Language", 1, 60),
        Book("Abdur Rehman","GGf","The Mythical Man-month", 2, 40),
        Book("Yahya","GGG","The Pragmatic Programmer: Your Journey to Mastery", 3, 50),
        Book("Einstein","JHJ","The Art of Computer Programming", 4, 50),
        Book("Kamal","ABC","C++ For Dummies", 5, 30)
    };
    
    int no, stc;
    string tit, au;
    cout<<"Enter the title of Book to search! "<<endl;
    getline(cin, tit);  // Use getline to read the entire line, including spaces
    
    cout<<"Enter the Author of Book to search! "<<endl;
    getline(cin, au); 



    int i=0,a=0;
    for (i=0;i<5;i++){
        
        if(books[i].Search_book(tit, au)){
            books[i].display_details();
            cout<<"Enter the number of books you want? ";
            cin >> no;
            stc = books[i].stock_check(no);
            break;
        }
    
    }
    if(i==5){
        cout<<"unavailable Book!";
    }
    else if(stc!=-1){
        cout<<"The total cost: " << stc;
    }
    else{
        cout<<"stock unavailable!";
    }

    
}