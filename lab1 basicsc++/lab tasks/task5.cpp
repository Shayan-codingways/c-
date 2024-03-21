#include <iostream>
#include <cstdio>
using namespace std;

struct BaseballPlayer
{
    string name;
    int home_run;
    int hits;
};

int main()
{

    BaseballPlayer players[10];

    int option;
    cout << "1. Add new Data " << endl
         << "2. Search Data \n"
         << "3. Update Data \n4. Exit\n";
    cout << "Enter 1 to add new data, 2 to search data and 3 to Update data and 4 to exit program " << endl;
    cin >> option;

    while (option != 4)
    {

        switch (option)
        {

        case 1:

            int opt;
            cout << "What data you want to add? 1 for name, 2 for home_run, 3 for hits and -1 to exit \n";
            cin >> opt;
            
            while(opt!=-1){
            if (opt == 1)
            {
                cout << "Enter Player name: \n";
                for (int i = 0; i < 5; i++)
                {
                    cin >> players[i].name;
                    printf("\n");
                }
            }

            if (opt == 2)
            {
                cout << "Enter Home runs: \n";
                for (int i = 0; i < 5; i++)
                {
                    cin >> players[i].home_run;
                    printf("\n");
                }
            }

            if (opt == 3)
            {
                cout << "Enter hits: \n";
                for (int i = 0; i < 5; i++)
                {
                    cin >> players[i].hits;
                    printf("\n");
                }
            }
            
            }
            break;

        case 2:
            int search;
            cout << "What data you want to Search? 1 for search by name, 2 for search by home_run, 3 for search by hits and -1 for exit \n";
            cin >> search;
            while(search==-1){
            if (search == 1)
            {
                int no;
                cout << "How many players to serach? ";
                cin >> no;

                string name;
                string searched[no];
                int index[no];

                printf("\n");
                for (int i = 0; i < no; i++)
                {
                    cout << "Enter name to search: ";
                    cin >> name;
                    for (int j = 0; j < 10; j++)
                    {
                        if (name == players[j].name)
                        {
                            searched[i] = players[j].name;
                            index[i] = j;
                        }
                        else
                        {
                            break;
                        }
                    }
                }
                // Display
                for (int i = 0; i < no; i++)
                {
                    cout << endl
                         << "You searched results: " << index[i] << searched[i] << "\n";
                }
            }

            if (search == 2)
            {
                int no;
                cout << "How many players to serach? ";
                cin >> no;

                int home_runs;
                int searched[no];
                int index[no];

                printf("\n");
                for (int i = 0; i < no; i++)
                {
                    cout << "Enter home runs to search: ";
                    cin >> home_runs;
                    for (int j = 0; j < 10; j++)
                    {
                        if (home_runs == players[j].home_run)
                        {
                            searched[i] = players[j].home_run;
                            index[i] = j;
                        }
                        else
                        {
                            break;
                        }
                    }
                }

                // Display
                for (int i = 0; i < no; i++)
                {
                    cout << endl
                         << "You searched results: " << index[i] << searched[i] << "\n";
                }
            }

            if (search == 3)
            {
                int no;
                cout << "How many players to serach? ";
                cin >> no;

                int hits;
                int searched[no];
                int index[no];

                printf("\n");
                for (int i = 0; i < no; i++)
                {
                    cout << "Enter home runs to search: ";
                    cin >> hits;
                    for (int j = 0; j < 10; j++)
                    {
                        if (hits == players[j].hits)
                        {
                            searched[i] = players[j].hits;
                            index[i] = j;
                        }
                        else
                        {
                            break;
                        }
                    }
                }
                // Display
                for (int i = 0; i < no; i++)
                {
                    cout << endl
                         << "You searched results: " << index[i] << searched[i] << "\n";
                }
            }
            }
           
            break;
        /*
        case 3:

        cout<<"\n\n1. Change Data \n2.Delete Data\n";

        int choice;
        cout<<"Select 1 for modifications in data and 2 for Deleting data: ";
        cin >> choice;

        if (choice==1)
        {
            
        }
        if (choice==2){
            cout<<"\nTell me the name "
        }
        break;
        */
         
        case 4:
            cout<<"Thank You!";
            break;

        default:
            cout << "\n\nYour entered value is incorrect!";
            break;
        }
    }
}