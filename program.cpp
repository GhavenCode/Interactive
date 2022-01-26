#include<string>
#include<iostream>

using namespace std;

int main()
{
    string name;
    char option;
    

    while(option!='E')
    {
    
            if(option=='C'|| option=='c')
            {
                cout<<pass<<endl;
                cout<<"Please Enter your name:";
                cin>>name;
                cout<<"Hello "<<name<<"!"<<endl;
            }
           else
            {
                cout<<fail<<endl;
            }
   cout<<endl;
   cout<<endl;
            
            cout<<"Please enter again:";
            cin>>option;
        
        }
    
    system("pause");
    return 0;
}
