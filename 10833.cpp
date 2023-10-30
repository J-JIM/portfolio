#include <iostream>
using namespace std;

int main(void){
    int n;
    cin >> n;
    int s, a, result = 0;
    for(int i = 0; i < n; i++){
        cin >> s >> a;
        result += (a % s);
    }
    cout << result << endl;
}
