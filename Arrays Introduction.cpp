#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int ar[n];
    int arr[n];
    int x=(n-1);
    for (int i=0; i<n; i++){
        cin >> ar[i];
        arr[x]=ar[i];
        x=x-1;
    }
    for (int j=0; j<n; j++){
        cout << arr[j] << " ";
    }
    return 0;
}
