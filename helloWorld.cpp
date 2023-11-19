#include <iostream>
using namespace std;

int main(){
    cout<<"This is how to print hello world in c++ "<<endl;
    //this is also about how we can read data from the keyboard
    string username ;
    string email ;
    cout<<"Please enter your email : ";
    cin>> email;
    cout<<"Hello, Your email is  "<<email<<endl;
    
    //you have to note that cin >> reads until it encounters the space
    //to be able to read the line, we can use this 
    
        cin.ignore();
        cout<<"Please enter your username : ";
        getline(cin, username);
        cout<<"Hello Mr "<<username<<endl;

}
