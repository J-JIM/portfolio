#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int A, P;
vector<int> num;
vector<int> check;
int cnt = 0;

void DFS(int v){
    int tmp = v;
    int sum = 0;
    while(tmp != 0){
        sum += pow(tmp % 10, P);
        tmp /= 10; //한자리수 씩 가지기.
    }

}

int main(){
    cin >> A >> P;
    num.push_back(A); //첫번째 수 넣기.
    DFS(A); 
    
    int idx = num.back();
    auto it = find(num.begin(), num.end(), idx) - num.begin();
    
    for(int i = it; i < num.size(); i++){
        check.push_back(num[i]);
    }
    for(int i = 0; i < check.size(); i++){
        if(binary_search(num.begin(), num.end(), check[i])){
            num.pop_back();
        }
    }
    for(int i = 0; i < num.size(); i++){
        cout << num[i]<< '\n';
    }
}
