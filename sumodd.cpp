#include<iostream>
using namespace std;

int main(){
    int sum=0,n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        if (i%2!=0)
        {
            cout<<i<<"+";
            sum+=i;
        }
        
    }
    cout<<sum;
    

    return 0;
}