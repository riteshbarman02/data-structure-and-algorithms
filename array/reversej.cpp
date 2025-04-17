#include<iostream>
using namespace std;

int main(){
    int n, sum=0;
    cin >> n;
    char ch = 'A';
    for (int i = 0; i<n; i++)
    {
     for (int j=0;j<n-(i+1);j++)
     {
        cout<<" ";
     }
     cout<<"*";
     for (int j=0 ;j<2*i ;j++)
     {
     cout<<" ";
     }
     cout<<endl;
    }


    return 0;
}