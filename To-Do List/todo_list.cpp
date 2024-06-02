#include<iostream>
#include<string>
using namespace std;


const int MAX_TASKS = 100;

struct Task
{
    string descript;
    bool isDone;
};

    
int main()
{
    Task tasks[MAX_TASKS];
    int numTasks = 0;

    while(true)
    {
        cout<<"\nTo-Do List Application"<<endl;
        cout<<"1. Add Task"<<endl;
        cout<<"2. List Task"<<endl;
        cout<<"3. Mark Task as Done"<<endl;
        cout<<"4. Quit"<<endl;

        int choice;
        cin>>choice;

        if(choice == 1)
        {
            if(numTasks < MAX_TASKS)
            {
                cout<<"Enter Task Description: ";
                cin.ignore();
                getline(cin, tasks[numTasks].descript);
                tasks[numTasks].isDone = false;
                numTasks++;
                cout<<"Task Added."<<endl;
            }
            else 
            {
                cout<<"Task list is full. cannot add more tasks."<<endl;
            }
        }
        else if (choice == 2)
        {
            cout<<"Tasks: "<<endl;
            for(int i=0; i<numTasks; i++)
            {
                cout<<(i + 1)<<".";
                if(tasks[i].isDone)
                {
                    cout<<"[Done] ";
                }
                else
                {
                    cout<<"[] ";
                }
                cout<<tasks[i].descript<<endl;
            }
        }
        else if (choice == 3)
        {
            cout<<"Enter the task number to mark as done: ";
            int taskNumber;
            cin>>taskNumber;
            if(taskNumber > 0 && taskNumber <= numTasks)
            {
                tasks[taskNumber - 1].isDone = true;
                cout<<"Task marked as done. "<<endl;
            }
            else
            {
                cout<<"Invalid Task number !"<<endl;
            }
        }
        else if (choice == 4)
        {
            cout<<"GoodBye!"<<endl;
            break;
        }
        else
        {
            cout<<"Invalid choice. please try again."<<endl;
        }        
    }
    return 0;
}