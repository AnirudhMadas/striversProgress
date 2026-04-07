#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    //brute
    //sort and return last element
    //O(nlogn)
    //optimal
    //traverse the array and keep track of max element  
    //O(n)
    int maxElement = arr[0];
    for(int i=1; i<arr.size(); i++){
        if(arr[i] > maxElement){
            maxElement = arr[i];
        }
    }
    cout << "Largest element in the array is: " << maxElement << endl;
    return 0;
}
