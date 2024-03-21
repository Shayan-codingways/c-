#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    string movie_name;
    float adult_ticket_price, child_ticket_price, gross, n_adult_t,n_child_t,percentage_charity;

    cout<< " Input movie name: ";
    cin >> movie_name;

    cout << "Enter adult ticket price and no of adult tickets sold: ";
    cin >> adult_ticket_price >> n_adult_t;

    cout << "Enter child ticket price and no of child tickets sold: ";
    cin >> child_ticket_price >> n_child_t;

    gross= (adult_ticket_price*n_adult_t) + (child_ticket_price * n_child_t );

    cout << "percentage of charity that applies? ";
    cin >> percentage_charity;

    float charity= (percentage_charity/100)*gross;


    //display:
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++\n");

    cout << "Movie Name:_____________ "<< setw(12)<< movie_name <<endl;
    cout << "No. of ticket sold:_____ " << setw(12)<< n_adult_t+n_child_t << endl;
    cout << "Gross Amount:___________  $ "<< setw(9) << printf("%0.2f",gross); cout<<endl;
    cout << "Percentage of Gross Amount donated:  $"<< setw(6) << printf("%.2f",charity); cout<<endl;

    cout << "Net Sale:________________ $ "<< setw(9) << printf("%.2f",gross-charity);





    return 0;
}