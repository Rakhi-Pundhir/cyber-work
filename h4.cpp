#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,j,n;char s[20];
    cout<<"Enter the string :";
    cin.getline(s,20);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        n=s[i]-64;
        else
        {
            n=s[i]-96;
        }
        for(j=1;j<=n;j++)
        {
            if(i%2==0)
            cout<<"#";
            else
            {
                cout<<"$";
            }
            
        }
        
    }
    return 0;
}