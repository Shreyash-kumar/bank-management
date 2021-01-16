#include <bits/stdc++.h>
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
    
   
    
    void show_details();//For outputting details of the account 

    Bank(long long int account_no1 , string name1  , string branch1 , long long int phone_no1 , int pin1){
         
         name=name1;
         account_no=account_no1;
         branch=branch1;
         phone_no=phone_no1;
         pin=pin1;
    
    }// Parameterized constructor to initialize values  
  
};


void Bank::show_details(){

      cout<<"Account number: "<<account_no<<endl<<endl;
      cout<<"Name: "<<name<<endl<<endl;
      cout<<"Phone number: "<<phone_no<<endl<<endl;
      cout<<"Branch: "<<branch<<endl<<endl;
      cout<<"pin: "<<pin;             

}


int main(){

    long long int account_no , phone_no ; 
    string name , branch ;
    int pin ; 

    int i ,n ;

    cout<<"Enter the number of account you want to create: ";
    cin>>n;

    Bank* a = (Bank*)malloc(sizeof(Bank)*n) ;

    for(i = 0 ; i < n ; i ++){

        cout<<"enter details of "<<i+1<<" account : "<<endl<<endl;
        
        cout<<"Enter branch name: ";
        cin>>branch; 
        cout<<endl;

        cout<<"Enter your account number: ";
        cin>>account_no;
        cout<<endl;

        cout<<"Enter name(use  instead underscore '_' instead  of space ):";
        cin>>name;
        cout<<endl;
  
        cout<<"Enter phone number: ";
        cin>>phone_no;
        cout<<endl;

        cout<<"Set your 4 digit pin: ";
        cin>>pin;
        cout<<endl;
        
        a[i] = Bank(account_no , name, branch, phone_no, pin );

    }


    for(i = 0 ; i < n ; i ++){

        cout<<"Details of "<<i+1<<" account are : "<<endl<<endl;;
        a[i].show_details();

    }


   
    return 0;
}
