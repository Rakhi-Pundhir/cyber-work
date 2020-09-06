#include<iostream>
using namespace std;
int main()
{
    int i;char s[20];int ch;
    cout<<"Enter 1 to encrypt and 2 to decrypt the string\n";
    cout<<"Enter your choice:";
    cin>>ch;
    if(ch==1)
    {
        cout<<"Enter the string : "<<endl;
        cin.getline(s,20);
        for(i=0;s[i]!='\0';i++)
        s[i]=s[i]+5;
        cout<<"The encrypted string is : "<<s<<"\n";
    }
    else if(ch==2)
    {
        cout<<"Enter the string :"<<endl;
        cin.getline(s,20);
        for(i=0;s[i]!='\0';i++)
        s[i]=s[i]-5;
        cout<<"The decrypted string is : "<<s<<"\n";
    }
else
{
    cout<<"Invalid choice";
    return 0;
}


}