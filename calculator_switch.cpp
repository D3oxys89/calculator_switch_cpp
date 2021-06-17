/*
    Calculator using switch (C++);
    Thanks!
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main(void){

    system("clear"); // If you have windows operating system change "clear" to "cls" and compile again.

    double num1, num2;
    char type;

    cout << "Welcome to the calculator (using switch). Please, give me a number: ";
    cin >> num1;
    cout << "Please, give me another number: ";
    cin >> num2;
    cout << "Now, choose the case: + | - | / | *" << endl;
    cout << "Choose: ";
    cin >> type;

    system("clear"); // If you have windows operating system change "clear" to "cls" and compile again.

    switch(type){
        case '+':
            cout << "Here's the result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Here's the result: " << num1 - num2 << endl;
            break;
        case '/':
            cout << "Here's the result: " << num1 / num2 << endl;
            break;   
        case '*':
            cout <<  "Here's the result: " << num1 * num2 << endl;         
    }

}