#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the numbers : ";
    cin>>a>>b;cout<<"The numbers are :"<<endl;
    for(int i=a+1;i<b;i++)
    {
        int c=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            c=c+1;
        }
        if(c==0)
        cout<<i<<endl;
    }
    return 0;
}