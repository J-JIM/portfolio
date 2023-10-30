#include <iostream>
using namespace std;

int main(void){
    int total;
    cin >> total;
    int book;
    for(int i = 0; i < 9; i++){
        cin >> book;
        total -= book;
    }
    cout << total << endl;
}
