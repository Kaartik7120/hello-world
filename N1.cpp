#include<iostream>
using namespace std;

int main()
{
    int n;
    std::cout<<"Enter the value of a number\n";
    cin>>n;
    int i=1;int sum=0;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    cout<<sum<<endl;
    return 0;

    
}