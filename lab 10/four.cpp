#include<iostream>
#include<list>
using namespace std;


int main(){
// splice(): This function is used to transfer elements from one list to another or within the same list.
list<int> myList1 = {1, 2, 3};
list<int> myList2 = {4, 5, 6};
auto it = next(myList1.begin(), 2); // Iterator to the third element
myList1.splice(it, myList2); // Move all elements from myList2 to myList1 at position pointed by ’it’ 

//output -->1 2 4 5 6 3(list 1)
// list 2 gets emptied



//merge(): This function is used to merge two sorted lists into a single sorted list
list<int> myList1 = {1, 3, 5};
list<int> myList2 = {2, 4, 6};
myList1.merge(myList2); // Merge myList2 into myList1, both lists must be sorted

//unique(): This function is used to remove consecutive duplicate elements from the list.
list<int> myList = {1, 1, 2, 2, 3, 4, 4, 4, 5};
myList.unique(); // Removes consecutive duplicate elements, resulting in {1, 2, 3, 4, 5}


// resize(): This function is used to change the size of the list. If the new size is larger than thecurrent size, new elements are default-inserted at the end. If the new size is smaller, elements are removed from the end.
list<int> myList = {1, 2, 3, 4, 5};
myList.resize(3); // Resize to 3 elements, resulting in {1, 2, 3}

}