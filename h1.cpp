#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string";
    cin>>s;
    int l=s.length();
    int c=0,f=0,b=l-1;
    while(f<=b)
    {
        if(s[f]!=s[b])
        {

        
        c=c+1;
        break;}
        else
        {
            c=0;
        }
        f=f+1;
        b=b-1;

        
    } 
 if(c==0)
 cout<<"Palindrome";
 else
 {
     cout<<"Not Palindrome";
 }
 return 0;
}