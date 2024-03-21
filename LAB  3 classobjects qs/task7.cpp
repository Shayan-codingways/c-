#include<iostream>
using namespace std;

class TicTacToe{
    private:
    int board[3][3];

    public:
    // constructor
    TicTacToe(){
        for(int i=0; i<3;i++){
            for(int j=0; j<3;j++){
                 board[i][j]=0;
            }
        }
    }
    //clearing
    void Clear_Board(){ 
        for(int i=0; i<3;i++){
            for(int j=0; j<3;j++){
                 board[i][j]=0;
            }
        }
    }
    
    //dispaly array board
    void to_string()const{
        for(int i=0; i<3;i++){
            for(int j=0; j<3;j++){
                cout << board[i][j];
                if(j<2){
                cout << " | ";
                }
            }
            if(i<2){
            cout<<endl<<"__________"<<endl;
            }
        }
    }
   
    // the most important part
    int game_status()const{
            
            // taken for 3 differnet cases
            bool a=false;
            
            // 1/2 wins , bool true
            for(int i=0; i<3 ; i++){
                if((board[i][0] ==1 && board[i][1] ==1 && board[i][2] == 1) || (board[0][i] ==1 && board[1][i] ==1 && board[2][i] ==1)){
                    a=true;
                    return 1;
                }
                else if((board[i][0] ==2 && board[i][1] ==2 && board[i][2] == 2) || (board[0][i] ==2 && board[1][i] ==2 && board[2][i] ==2)) {
                    a=true;
                    return 2;
                }

            }

            // if bool isincorrect then maybe diagnols may lad to win
            //diagnolsw win check
            if(!a){
                if(board[1][1]==1 && board[2][2]==1 && board[0][0]==1 || board[0][2]==1 && board[1][1]==1 && board[2][0] ==1){
                    a=true;
                    return 1;
                }
                else if(board[1][1] ==2 && board[2][2] ==2 && board[0][0]==2
                || board[0][2] ==2 && board[1][1] ==2 && board[2][0] ==1){
                    a=true;
                     return 2;
                }

            }

            // agin if bool incorrect then check for draw, else return 0(game continued)
            //Draw
            if(!a){
                for (int i = 0; i < 3; i++) {
                   for (int j = 0; j < 3; j++) {
                        if (board[i][j] == 0) {
                            return 0;
                        }
                    }
                }
                return 3;
            }
            

    }
    
    // bool to re enable the user to make an entry
    bool move(int Player, int row, int col){
        
        // wrong entry check
        if (row < 0 || row >= 3 || col < 0 || col >= 3) {
             cout << "Invalid row or column! Please enter valid values." << endl;
             return false;
        }
       
        // space not occupied
        if(board[row][col]==0){

            if(Player==1){
                board[row][col]=1;
                return true;
            }
            else{
                board[row][col]=2;
                return true;
            }

        }

        // space occupied
        else{
            cout<<"Square is already Occupied"<<endl;
            return false;
        }

    }

      
};

int main(){
    // variables
    int row, col;
    
    //object instantiated
    TicTacToe g1;

    cout<<"Welcome to the Tic-Tac-Toe Game!"<<endl;

    while(g1.game_status()==0){
    
        cout<<"Player 1, enter the row and column you want to move on: ";
        cin>>row>>col;

        // checking for wrong entry
        while(!g1.move(1,row, col)){;
           cout<<endl; cout<<"Player 1, enter the row and column you want    to     move on: ";
           cin>>row>>col;
        }

        // display board
        cout<<endl;
        g1.to_string();
        
        // (if)--> checking whther game has not ended after player 1's input
        if(g1.game_status()==0){
            cout<<endl<<"Player 2, enter the row and column you want to move on:     ";
            cin>>row>>col;
                
                // wrong entry validation
                while(!g1.move(2,row, col)){
                    cout<<endl<<"Player 2, enter the row and column you want to move     on:     ";
                    cin>>row>>col;
                }

                //display board after input
                cout<<endl;
                g1.to_string();
        }
    
    cout<<endl;

    }
    
    //Display result
    if (g1.game_status()==1){
        cout<<endl<<"Player 1 wins!"<< endl;
    }
    else if(g1.game_status()==2){
        cout<<endl<<"Player 2 wins!"<< endl;
    }
    else if(g1.game_status()==3){
        cout<<endl<<"Draw!"<< endl;
    }

    g1.Clear_Board();
    cout<<endl;
    g1.to_string();
    
}
