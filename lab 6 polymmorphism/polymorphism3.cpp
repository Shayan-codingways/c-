////Part of polymorphism     :: poly ...two types   1. compile time ....2. runtime poly....
// compile time :::  1. operator overloading,,,,,,,2. function overloading
// runtime.....1. function overloading
//#include<iostream>
//using namespace std;
//
//int main(){
//	int a;
//	float b = 3.5;
//	a = b; //implicit conversion
//	cout << a << endl;
//	a = static_cast<int>(b);   //Explicit conversion
//	cout << a;
//}



//#include<iostream>
//using namespace std;
//class Base{
//	public:
//		virtual void print(){}   // agar is ko = 0 likhein to ye nhi chaly ga, q k ye pure function ho jata hyy
//};                          // q k ye abstract class ban jayy ga, aur abstract class ka object nhi banta
//class Derived: public Base{
//	public:
//		void print(){
//			cout << "Derived";
//		}
//};
//int main(){
//	Base obj;
//}



//#include<iostream>
//using namespace std;
//class Base{
//	public:
//		 void print(){
//		cout << "Base";
//		}   
//};                         
//class Derived: public Base{
//	public:
//		void print(){
//			cout << "Derived";
//		}
//};
//int main(){
////	Derived obj;
////	obj.print();
//	Base* ptr;
//	Derived obj;
//	ptr = &obj;
//	obj.print();
//}
//// agar function same same hn gy child classes mn, tou virtual likhna zarory ho ga

