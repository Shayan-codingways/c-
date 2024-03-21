#include<iostream>
#include<string>
using namespace std;


class book{

    private:
       string name;
       string author;
       string publisher;
       string ISBN_no;

    public:
        book(string n, string a, string p, string no){
            name=n;
            author=a;
            publisher=p;
            ISBN_no=no;
        }


        // mutators
        void set_name(string n){
            name=n;
        }
        void set_author(string a){
            author=a;
        }
        void set_publisher(string p){
            publisher=p;
        }
        void set_ISBNno(string no){
            ISBN_no=no;
        }


        string get_name(){
            return name;
        }
        string get_author(){
            return author;
        }
        string get_publisher(){
            return publisher;
        }
        string get_ISBNno(){
            return ISBN_no;
        }

        string getbookinfo() {
            return "The book " + get_name() + " with ISBN no " + get_ISBNno() + " whose author and publisher are " + get_author() + " " + get_publisher() +" respectively";
         }


};

int main(){
    // object instantiate
    const int count=5;
    book books[count]={
    book("AB","978-0-19-953556-9","SH","hh"),
    book("BC","978-0-19-933453-9","SS","hh"),
    book("LJND","945-0-19-953556-9","SH","hh"),
    book("WED","948-0-19-455556-9","SH","hg"),
    book("AB","978-0-00-653156-9","S3","hdf")
    };

    // display
    for (int i = 0; i < count; i++) {
        cout << "Book[" << i+1 << "]: "<< books[i].getbookinfo()<<endl;
    }

}