#include<iostream>
using namespace std;
int main(int argc,char*argv[])
{
    int c,sum=0;
    cout<<"Program name is : "<<argv[0]<<endl;
    if(argc==1)
    cout<<"No other argument passed xcept program name"<<endl;
    if(argc>=2)
    {
        cout<<"Number of arguments passed are :"<<argc<<endl;
        cout<<"following are the commands :"<<endl;
    }
    for(c=0;c<argc;c++)
    {
        cout<<argv[c]<<"\n";
    }
    int min=stoi(argv[1]);
    for(c=2;c<argc;c++)
    {
      if(min>stoi(argv[c]))
      min=stoi(argv[c]);
    }
    cout<<"Minimum is : "<<min;
    return 0;
}