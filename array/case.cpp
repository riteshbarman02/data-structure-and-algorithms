#include<iostream>
using namespace std;

int main(){
    char a ;
    cin >> a ;
    if (a >= 'a' && a <= 'z'){
        cout << "lowercase" ;
    }
    else if (a >= 'A' && a <= 'B'){
        cout << "uppercase" ;
    }
   

    return 0;
}