#include <map>
#include<iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    multimap<string, int> studentScores;
    string name;
    int score;

    // Read student names and scores from the user
    cout << "Enter student name and score (or 'end' to finish):" << endl;

    while (true)
    {
        cin >> name;
        if (name == "end")
            break;

        cin >> score;
        studentScores.insert({name, score});//enter in map
    }

    // Print student names and scores
    for (auto it = studentScores.begin(), end = studentScores.end(); it != end;)
    {
        cout << it->first << ": ";

        vector<int> scores;
        string currentName = it->first; // Store the current name
        // Collect all scores for this student

        while (it != end && it->first == currentName)
        {
            scores.push_back(it->second);
            ++it;
        }

        // Print all scores for this student
        for (size_t i = 0; i < scores.size(); ++i)
        {
            cout << scores[i];
            if (i != scores.size() - 1)
                cout << ", ";
        }

        cout << endl;
    }
    
}