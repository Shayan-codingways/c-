/*   heirarichal  */

#include<string>
#include <iostream>
#include <vector>
using namespace std;

class Books{
    
    string genre;
    
    public:
    void setGenre(string g){
        genre=g;
    }
    
    
};

class Novel: public Books{

    vector <string> title;
    vector <string> author;
    vector <string> output;
    
    public:
    void novel(string t, string a, string g){
        title.push_back(t);
        author.push_back(a);
        setGenre(g);
    }
    
    // function is string to output string
    vector<string> Display(){
        for(int i=0;i<title.size();i++){
            output.push_back("Book: " + title[i] + " genre: Novel " + " author: " + author[i]);
            
        }
        return output;
    }
    
};

class Mystery: public Books{

    vector <string> title;
    vector <string> author;
    vector<string> output;//this is an array of output used in Display()
    
    public:
    void mystery(string t, string a, string g){
        title.push_back(t);
        author.push_back(a);
        setGenre(g);
    }
    
    vector<string> Display(){
        for(int i=0;i<title.size();i++){
            output.push_back("Book: " + title[i] + " genre: Mystery " + " author: " + author[i]);
            
        }
        return output;
    }
};


int main(){
    
    
    string author, title;
    string genre;
    int n;
    
    Novel n1;
    Mystery m1;
    
    cout<<"How many books you want to place: "<<endl;
    cin >> n;
    
    for(int i=0; i<n; i++){
        cout<<"Enter your genre Novel/Mystery: " <<endl;
        cin >> genre;
             
            if(genre=="Novel"){
        
                cout<<"Enter author and title of Book: ";
                cin>> author;
                cin>> title;
                n1.novel(title, author, genre);
                cout<<endl;
            }
     
            else if(genre=="Mystery"){
                
                cout<<"Enter author and title of Book: ";
                cin>> author >> title;
                m1.mystery(title, author, genre);
                cout<<endl;
        
            }
    
    }
    
    cout<<"The Mystery genre books: "<< endl;
    vector<string> str = m1.Display();
    int i=0;
    for(i=0; i<str.size();i++){
        cout<<str[i]<<endl;
    }
    
    cout<<endl<<"The Novel genre books: "<< endl;
    vector<string> strr = n1.Display();
    for(i=0; i<strr.size();i++){
        cout<<strr[i]<<endl;
    }
   
    
}