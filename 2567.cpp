#include <iostream>
using namespace std;

int main(void){
    int n, check = 100;
    int cnt = 0, sum = 0;
    for(int i = 0; i < 7; i++){
        cin >> n;
        if( n % 2 != 0){
            cnt++;
            sum += n;
        }
        else continue;
        
        if(n < check){
            check = n;
        }
    }
    if(cnt == 0) cout << -1 << endl;
    else {
        cout << sum << endl;
        cout << check << endl;
    }
    
}
