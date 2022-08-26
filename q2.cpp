/* 
Name - Nandni Garg
Roll no - 2010990482
Set no - 03
Q2 - Find pair with the given sum in an array
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	cout<<"Enter size of array: ";
    int n, k;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    //Enter the sum
    cout<<"Enter the sum: ";
    cin>>k;
    
    //sorting the array
    sort(arr, arr + n);
    
    int low = 0;
    int high = n - 1;
    int flag = 0;

	//Finding sum
    while (low < high){
        // sum found
        if (arr[low] + arr[high] == k){
            cout << "Pair found (" << arr[low] << ", " << arr[high] << ")\n";
            low++;
            flag = 1;
        }
 
        (arr[low] + arr[high] < k)? low++: high--;
    }
    
    if(flag == 0){
    	cout<<"Pair not found"<<endl;
	}
}