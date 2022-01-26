#include<string>
#include<iostream>

using namespace std;

int main()
{
    string name;
    char option;
    string fail ="Incorrect!";
    string pass = "Correct";
    

    do
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
            
                cout<<"Please try again or enter 'E' to exit:";
                cin>>option; 
        
        }while(option!='E');
    
    system("pause");
    return 0;
}
