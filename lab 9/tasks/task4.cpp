#include <iostream>
#include <map>
#include <string>
using namespace std;

//map is an associative array
class StudentScores {
private:
    map<string, int> scores;

public:
    void addStudent(const string& name, int score) {
        scores[name] = score; //stores value like an array
        cout << "Student added successfully." << endl;
    }

    void removeStudent(const string& name) {
        auto find = scores.find(name); //gives address

        if (find != scores.end()) {
            scores.erase(find);
            cout << "Student removed successfully." << endl;
        }
        else {
            cout << "Student not found." << endl;
        }
    }

    void displayScores() const {
        //cout << "Student Scores:" << endl;
        //for (const auto& pair : scores) {
        //    cout << pair.first << ": " << pair.second << endl;
        //}

        map<string, int> :: const_iterator i;
        for(i=scores.begin(); i!=scores.end(); i++ ){
            cout<<(*i).first << " " << (*i).second << "\n";
            //i.first --> first element of key value pair
        }
        /*In this function, const_iterator is used instead of iterator to indicate that the iterator i cannot be used to modify the elements of the scores map. This ensures that the displayScores() function does not unintentionally modify the contents of the scores map, which is consistent with the function's purpose of only displaying the scores.*/
    }
};

int main() {
    StudentScores s1;
    string name;
    int score;

    for(int i=0; i<3; i++){
    
        cout<<"Enter student name: ";
        cin>>name;

        cout<<"Enter student score: ";
        cin>>score;

        s1.addStudent(name, score);
    
    }

    s1.displayScores(); 

    string std;
    cout << "Remove student:" << endl;
    cout << "Enter student name to remove: ";
    cin >> std;
    s1.removeStudent(std);

    s1.displayScores();

    return 0;
}
