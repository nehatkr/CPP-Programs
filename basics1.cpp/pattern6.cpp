#include<iostream>
using namespace std;

int main()
{
	int i, j, n;
     
    cout << "Enter the number to print Triangle Star pattern Rows = ";
    cin >> n;

    cout << "Triangle Star Pattern\n"; 

    for(i =1; i<=n; i++) //rows
    {
    	for(j = i; j <=n; j++) //column
		{
            cout << j ;
        }
        for (int j = 1; j<=(i-1); j++) 
        {
            cout<<j;
        }
        
        cout <<endl;
    }		
 	return 0;
}