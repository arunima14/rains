//code
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, max_a=0, max_b=0;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    vector<int> arr;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    vector<int> a;
    vector<int> b;
    //left array, i.e. filling the elements from left to right in ascending order
    for(int i=0;i<n;i++){
        for(int j=0; j<i; j++){
            max_a = max(arr[i], arr[j]);
        }
        
        a.push_back(max_a);
        max_a=0;
        
    }

    //right array, i.e. filling the elements from right to left in ascending order
    for(int i=n-1;i>=0;i--){
        for (int j = n-1; j > i; j--)
        {
            max_b = max(arr[i], arr[j]);
        }

        b.push_back(max_b);
        max_b = 0;
    }

    //printing both the arrays
    //left array
    cout<<"Left array: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    //right array
    cout<<"\nRight array: ";
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }

    return 0;
}