#include<iostream>
using namespace std;

int main()
{
	int i, j, n;
     
    cout << "Enter the number to print Triangle Star pattern Rows = ";
    cin >> n;

    cout << "Triangle Star Pattern\n"; 

    for(i =1; i<=n; i++)
    {
    	for(j = 1; j <=(n-i); j++) //spaces
		{
            cout << " ";
        }
        for (int j = 1; j<=(2*i-1); j++) //stars
        {
            cout<<"*";
        }
        
        cout <<endl;
    }		
 	return 0;
}