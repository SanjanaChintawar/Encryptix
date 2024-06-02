#include<iostream>
#include<cmath>

using namespace std;

int main(){

    // deifine veriables
    char operation;
    double num1, num2;
    bool isOn = true;

    cout<<"\nCalculator with C++"<<endl;
    cout<<"Enter '000' to quit.";
    while (isOn){
    
        // get user input
        
        cout<<endl<<"\nEnter first number: ";
        cin>> num1;
        if(num1 == 000){
            isOn = false;
            break;
        }
        cout<<endl<<"Enter Operation (+, -, *, /): ";
        cin>> operation;
        cout<<endl<<"Enter second number: ";
        cin>> num2;

        // if else statement 
        if(operation == '+'){
            cout<<endl<< "Result: "<<num1 + num2;
        }
        else if(operation == '-'){
            cout<<endl<< "Result: "<<num1 - num2;
        }
        else if(operation == '*'){
            cout<<endl<< "Result: "<<num1 * num2;
        }
        else if(operation == '/'){
            cout<<endl<< "Result: "<<num1 / num2;
        }
        else
            cout << "unvalid operator !";
    }

    return 0;
}