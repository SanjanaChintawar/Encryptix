#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    

    cout<<"\n\t\t\tWelcome to GuessTheNumber game!"<<endl;

    while(true){
        cout << "\nEnter the difficulty level: \n";
        cout << "1 for easy!\t";
        cout<<"2 for medium!\t";
        cout<<"3 for difficult!\t";
        cout<<"0 for ending the game!\n"<<endl;

        int difficultyChoice ;
        cout<<"Enter the number: ";
        cin>>difficultyChoice;

        srand(time(0));
        int secretNumber = 1 + (rand()% 100);
        int playerChoice;

        if(difficultyChoice==1){
            cout << "\nYou have 10 choices for finding the number between 1 and 100.";
            int choicesLeft=10;
            for(int i=1;i<=10;i++){
                cout << "\n\nEnter the number: ";
                cin>>playerChoice;
                if(playerChoice==secretNumber){
                    cout << "Well played! You won, " << playerChoice << " is the number" << endl;
                    cout << "\n Thanks for playing...." << endl;
                    cout<<"Play the game again with us!!\n\n"<<endl;
                    break;
                }else{
                    cout << "Nope, " << playerChoice << "\n";
                    if(playerChoice>secretNumber){
                        cout << "It's TOO High" << endl;
                    }
                    else{
                        cout << "It's TOO Low" << endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << " choices left. " << endl;
                    if(choicesLeft==0){
                        cout << "\nIt was "<<secretNumber<<", You lose!!\n";
                        cout<<"Play the game again to win!!!\n\n";
                    }
                }

            }
        }
        else if(difficultyChoice==2){
            cout << "\nYou have 7 choices for finding the number between 1 and 100.";
            int choicesLeft=7;
            for(int i=1;i<=7;i++){
                cout << "\n\nEnter the number: ";
                cin>>playerChoice;
                if(playerChoice==secretNumber){
                    cout << "Well played! You won, " << playerChoice << " is the number" << endl;
                    cout << "\nThanks for playing...." << endl;
                    cout<<"Play the game again with us!!\n\n"<<endl;
                    break;
                }else{
                    cout << "Nope, " << playerChoice << "\n";
                    if(playerChoice>secretNumber){
                        cout << "It's TOO High" << endl;
                    }
                    else{
                        cout << "It's TOO low" << endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << " choices left. " << endl;
                    if(choicesLeft==0){
                        cout << "\nIt was "<<secretNumber<<", You lose!!\n";
                        cout<<"Play the game again to win!!!\n\n";
                    }
                }

            }
        }
        else if(difficultyChoice==3){
            cout << "\nYou have 5 choices for finding the number between 1 and 100.";
            int choicesLeft=5;
            for(int i=1;i<=5;i++){
                cout << "\n\nEnter the number: ";
                cin>>playerChoice;
                if(playerChoice==secretNumber){
                    cout << "Well played! You won, " << playerChoice << " is the  number" << endl;
                    cout << "\nThanks for playing...." << endl;
                    cout<<"Play the game again with us!!\n\n"<<endl;
                    break;
                }else{
                    cout << "Nope, " << playerChoice << " \n";
                    if(playerChoice>secretNumber){
                        cout << "It's TOO high" << endl;
                    }
                    else{
                        cout << "It's TOO Low" << endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << " choices left. " << endl;
                    if(choicesLeft==0){
                        cout << "\nIt was "<<secretNumber<<", You lose!!\n";
                        cout<<"Play the game again to win!!!\n\n";
                    }
                }

            }
        }
        else if(difficultyChoice==0){
            exit(0);
        }
        else{
            cout << "Wrong choice, Enter valid choice to play the game! (0,1,2,3)"<<endl;
        }

    }
    return 0;
}