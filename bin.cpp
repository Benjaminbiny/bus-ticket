#include<iostream>
#include <string>
#include <cctype>

using namespace std;

struct customer{
    char firstname[20];
    char lastname[20];
    int age,phone_number;
    
};

void  choose_destination() {
    start:
    int choice1,choice2,choice3,choice4,choice5;
    cout <<"choose your starting place number"<<endl;
    cout<<"1.Bahirdar\n";
    cout<<"2.Adiss abeba\n";
    cout<<"3.gonder\n";
    cin>>choice1;
    cout<<"choose your  destination"<<endl;
    switch (choice1){
    case 1: {
        cout<<"1.adiss abeba\n";
        cout<<"2.gonder\n";
        cin>>choice2;
        if(choice2==1)
            cout<<"price = 1000";
        else 
            cout<<"price = 300";
        break;
    }
    case 2:{
        cout<<"1.Bahirdar\n";
        cout<<"2.gonder\n";
        cin>>choice3;
    if(choice3==1)
        cout<<"price = 1000";
    else
        cout<<"price = 300";
    break;

    }  
    case 3:{
        cout << "1.Bahirdar\n";
        cout << "2.Addis Ababa\n";
        cin >> choice4;
        if(choice4 == 1)
            cout<<"Price = 300";
        else
            cout<<"Price = 1300";
        break;
    }
    default:{
        cout << "You entered the wrong choice please start again!\n";
        goto start;
    }
}
}

bool contdigit(string n){
     for(char c : n){
        if(isdigit(c)){
            return true;
            break;
        }
    }
    return false;
}

int main()
{

    customer x;

for(int i = 0; i <= 3; i++){
    cout<<"enter your firstname\n";
    cin.getline(x.firstname, 20);
    if(contdigit(x.firstname)){
        cout << "enter valid first name you have left "<<3-i<<" chances"<<endl;
    }else
        break;
}
 
for (int j=0;j<=3;j++){
 cout<<"enter your lastname\n"; 
 cin.getline(x.lastname, 20);
if(contdigit(x.lastname)){
     cout << "enter valid last name you have left "<<3-j<<" chances"<<endl;

}else
    break;
}
cout <<"enter your phone number"<<endl;
cin>>x.phone_number;
cout <<"Name :"<<x.firstname<<" "<<x.lastname<<endl;
cout<<"phone_number :"<<x.phone_number<<endl;
choose_destination();

return 0;
}