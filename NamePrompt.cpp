
#include<iostream>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
using namespace std;

int main()
{
  
  
      for(i=0;i<len;i++)
    {
        if(i==0)
        {
            if(islower(name[i]))
            name[i]=toupper(name[i]);
        }
        else
        {
            if(name[i]!=' ')
            {
                if(isupper(name[i]))
                    name[i]=tolower(name[i]);
            }
            else
            {
                i++;
                if(islower(name[i]))
                    name[i]=toupper(name[i]);
            }
        }
    }
  
  
  
    system("pause");
    return 0;
}
  
  
  
  
  
  
  
  
  
