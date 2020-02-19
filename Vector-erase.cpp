#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int>arr(n);

    for (int i=0; i<n; i++){ //inserting value of vector
        cin >> arr[i]; 
    }
    int t;
    cin >>t ;
    arr.erase(arr.begin()+(t-1)); //removing value of vector based on 3rd input

    int f1,f2;
    cin >> f1 >> f2;
    arr.erase(arr.begin()+(f1-1),arr.begin()+(f2-1)); //removing value of vector based on 4rd input

    int size = arr.size();
    cout << size << endl; //output size
    for (int j=0; j<size; j++){ //output result array
        cout << arr[j] <<" ";
    }
    return 0;
}
