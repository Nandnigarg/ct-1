/* 
Name - Nandni Garg
Roll no - 2010990482
Set no - 03
Q1 - Rearrange an array with alternate high and low elements
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	cout<<"Enter size of array: ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    //Rearranging array with alternate high and low elements
    for (int i = 1; i < n; i += 2){
        if (arr[i - 1] > arr[i]) {
            swap(arr[i-1], arr[i]);
        }
        if (i + 1 < n && arr[i + 1] > arr[i]) {
            swap(arr[i+1], arr[i]);
        }
    }
    
    //Printing the output array
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
