#include<iostream>
#include <string>
#include <cctype>

using namespace std;

struct customer{
    char firstname[20];
    char lastname[20];
    int age,phone_number;
    
};

void  choosestartpt()
{
    int choice1,choice2,choice3,choice4,choice5;
    cout <<"choose your starting place number"<<endl;
    cout<<"1.Bahirdar\n";
    cout<<"2.Adiss abeba\n";
    cout<<"3.gonder\n";
    cin>>choice1;
    cout<<"choose your  destination"<<endl;
     switch (choice1) {
         case 1: {
             cout<<"1.adiss abeba\n";
             cout<<"2.gonder\n";
             cin>>choice2;
             if(choice2==1)
                 cout<<"price=1000";
             else 
              cout<<"price==300";

  }
  }
}