#include<string>
#include<iostream>

using namespace std;

int main()
{
    string name;
    char option;
    

    
            if(option=='A')
            {
                cout<<"incorrect"<<endl;
            }
           else if(option=='B')
            {
                cout<<"incorrect"<<endl;
            }
            else if(option=='C')
            {
                cout<<"correct"<<endl;
                cout<<"Please Enter your name:";
                cin>>name;
                cout<<"Hello "<<name<<"!"<<endl;
            }
            else
            {
                cout<<"incorrect"<<endl;
            }

    
    system("pause");
    return 0;
}
