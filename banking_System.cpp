#include <bits/stdc++.h>
#include <conio.h>
#include <string>
using namespace std;

class Bank{

    private:
    
    int balance;
    int pin;

    public:
    
    long long int account_no;
    string  name;
    string branch;
    long long  int phone_no;
    
    void EnterDetails(){
        

        cout<<"Enter branch name: ";
        getline(cin, branch);
      
       
        cout<<endl;

        cout<<"Enter your account number: ";
        cin>>account_no;
        cout<<endl;

        cout<<"Enter name:";
        getline(cin, name);
        cout<<endl;
  
        cout<<"Enter phone number: ";
        cin>>phone_no;
        cout<<endl;

        cout<<"Set your 4 digit pin: ";
        cin>>pin;
        cout<<endl;

      
    }
    
    void show_details(){

      cout<<"Account number: "<<account_no<<endl<<endl;
      cout<<"Name: "<<name<<endl<<endl;
      cout<<"Phone number: "<<phone_no<<endl<<endl;
      cout<<"Branch: "<<branch<<endl<<endl;
      cout<<"pin: "<<pin;             

    }
};

int main(){

    Bank a[100];

    int i ,n ;
    
    cout<<"Enter the number of account you want to create: ";
    cin>>n;

    for(i = 0 ; i < n ; i ++){

        cout<<"enter details of "<<i+1<<" account : "<<endl;
        a[i].EnterDetails();

    }


    for(i = 0 ; i < n ; i ++){

        cout<<"Details of "<<i+1<<" account are : "<<endl;
        a[i].show_details();

    }


    getch();
    return 0;
}