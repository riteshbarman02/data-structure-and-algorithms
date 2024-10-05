#include<iostream>
using namespace std;

int main(){
   int a=0, b=1 , c=0;
   int n=30;
   cout<<"Fabonacci"<<endl;
   for (int i = 0; i < 30; i++)
   {
    cout<<c<<endl;
    c=a+b;
    a=b;
    b=c;
   }
   cout<<"------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
   string arr[6][6]; 

   cout<<"2d array"<<endl;

	// Initialization 
	for (int i = 0; i < 6; i++) { 
		for (int j = 0; j < 6; j++) { 
			arr[i][j] = "*" ; 
		} 
	} 

	for (int i = 0; i < 6; i++) { 
		for (int j = 0; j < 6; j++) { 
			if(i>=j){
                cout << arr[i][j] << " "; 
            }
		} 
		cout << endl; 
	} 
   
   cout<<"------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;

   cout<<"2d array"<<endl;

	for (int i = 0; i < 6; i++) { 
		for (int j = 0; j < 6; j++) { 
			if(i<=j){
                cout << arr[i][j] << " "; 
            }
		} 
		cout << endl; 
	} 

   cout<<"------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;

   cout<<"2d array"<<endl;


	for (int i = 0; i < 6; i++) { 
		for (int j = 0; j < 6; j++) { 
			if(i==j){
                cout << arr[i][j] << " "; 
            }
            else{
                cout << "  ";
            }
		} 
		cout << endl; 
	} 

   cout<<"------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;

   cout<<"2d array"<<endl;


	for (int i = 0; i < 6; i++) { 
		for (int j = 0; j < 6; j++) { 
			if(i+j==5){
                cout << arr[i][j] << " "; 
            }
            else{
                cout << "  ";
            }
		} 
		cout << endl; 
	} 
   return 0 ;
}