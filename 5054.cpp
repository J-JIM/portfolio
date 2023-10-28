#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    int t;
    cin >> t;
    for(int i = 0 ; i < t; i++){
        int n;
        int arr[20];
        cin >> n;
        for(int j = 0; j < n; j++){
            cin >> arr[j];
        }
        sort(arr, arr + n);
        cout << (arr[n-1] * 2) - (arr[0] * 2) << '\n';

    }
}
