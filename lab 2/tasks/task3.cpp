#include <iostream>
#include <string>
using namespace std;

class Book
{

private:
  // variables
  string title;
  int code;
  float price;
  float grade;
  int n;

public:
  // constuctor
  Book(string t, int c, float p)
  {
    title = t;
    code = c;
    price = p;
  }

  // setter functions
  void review(float grd)
  {
    grade = grade + grd;
    n = n + 1;
  }

  int getCode(){
    return code;
  }

  float getScore(){
    if (n == 0){
      return 0;
    }
    else{
      return grade / n;
    }
  }

  float getPrice()
  {
    return price;
  }

};

int main()
{

  // object array instantiation
  Book books[5] = {
      Book("The C++ Programming Language", 1, 60),
      Book("The Mythical Man-month", 2, 40),
      Book("The Pragmatic Programmer: Your Journey to Mastery", 3, 50),
      Book("The Art of Computer Programming", 4, 50),
      Book("C++ For Dummies", 5, 30)};

  // calling class public function review
  books[0].review(5);
  books[0].review(4);
  books[1].review(4);
  books[2].review(2);
  books[3].review(5);

  // taking input of code for validation
  int code;
  cout << "Enter code: ";
  cin >> code;

  // validation check for code
  for (int i = 0; i < 5; i++)
  {
    if (books[i].getCode() == code)
    {
      if (books[i].getScore() == 0)
      {
        cout << "The book has not been graded yet" << endl;
      }
      else
      {
        cout << "The book has score " << books[i].getScore() << " and price " << books[i].getPrice() << endl;
      }
      return 0;
    }
  }
  cout << "The book does not exist" << endl;

  return 0;
}