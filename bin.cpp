#include<iostream>

using namespace std;
int main()
{
 char firstname[50],lastname[50],destination[50],starting_place[50];
 int day,month,year,phone_number,age;
 day=12,month=01,year=1983;
 cout<<"enter your firstname\n";
 cin>>firstname;
 cout<<"enter your lastname\n"; 
 cin>>lastname;
 cout<<"enter your age"<<endl;
 cin>>age;
 cout <<"enter yor phone number"<<endl;
 cin>>phone_number; 
 cout<< "enter your starting place\n";
 cin>>starting_place; 
 cout<<"enter your destination "<<endl;
 cin>>destination;
  cout<<"\t\t\t\t\t\t\tDate"<<day <<"/"<<month<<"/"<<year<<endl;
 cout<< "\tFirst name "<<firstname<<"\t\t\tLastname "<<lastname<<endl;
 cout<<"\tPhone Number +251"<<phone_number<<"\t\tAge "<<age<<endl;
 cout<< "\tStarting place "<<starting_place<<"\t\t\tDestination "<<destination;
return 0;	
}