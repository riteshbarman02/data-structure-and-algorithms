#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n ; i++){
        
        for (int j = 0; j<n; j++)
        {
            if (j+i == n-1)
            {
                cout<<"*";

            }
            else{
                cout<<" ";
            }
                  
        }
        for (int j = 1; j <= i+1; j++)
        {
            if (i==j)
            {
                cout<<"*";
                
            }
            else{
                cout<<" ";
            }
            
        }
        
        
        cout<<endl;
        
    }
    
    for (int i = 0; i < n ; i++){
        
        for (int j = 1; j<n-1; j++)
        {
            if (i==j)
            {
                cout<<"*";
                
            }
            else{
                cout<<" ";
            }
            
                  
        }
        // for (int j = 1; j <= i+1; j++)
        // {
        //     if (j+i == n-1)
        //     {
        //         cout<<"*";

        //     }
        //     else{
        //         cout<<" ";
        //     }
            
        // }
        
        
        cout<<endl;
        
    }
    
    

    return 0;
}