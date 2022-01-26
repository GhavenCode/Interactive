#include<string>
#include<iostream>

using namespace std;

int main()
{
    string name;
    char option;
    string fail ="Incorrect!";
    string pass = "Correct";
    
     cout<<"Choose the correct answer or enter 'E' to exit<<endl;
        <<"Which company do we work for?"<<endl
        <<"A Nedbank"<<endl
        <<"B ABSA"<<endl
        <<C "Tech Mahindra"<<endl
        <<D "FNB"<<endl;
        cin>>option;

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
            //Please we give you a try or press E to exit
                cout<<"Please we give you a try or press 'E' to exit:";
                cin>>option; 
        
        }while(option!='E');
    
    system("pause");
    return 0;
}
