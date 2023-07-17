/* search if a given element is present in the array or not.
if it is not present then return -1 else return the index.
*/
#include<iostream>
using namespace std;
int main(){
    int array[]={1,5,3,7,5,9};
    int key=5;
    int ans=-1;
    for(int i=0;i<5;i++){
        if(array[i]==key){
            ans=i;
            break;
        }

    }
    cout<<ans<<endl;
    return 0;
}