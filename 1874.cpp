#include <iostream>
#include <stack>
#include <vector>

using namespace std;
int main(){
	vector<char> result; //스택 s에 넣음과 동시에 push를 입력하기 위함.
	stack<int> s; // C++에 stack 라이브러리가 있었음.
	int n;
	cin >> n;
	int cnt = 1;

	
	for(int i = 0; i < n; i++){
		int num;
		cin >> num;
		
		while(cnt <= num)
		{
			s.push(cnt);
			cnt += 1;
			result.push_back('+');
		}
		
		if(s.top() == num)
		{
			s.pop();
			result.push_back( '-' );
		}
		else
		{
			cout << "NO";
			return 0;
		}
	}
	for(int i = 0; i < result.size(); i++)
	{
		cout << result[i] << '\n';
	}
	
}

/*
C++에 스택 라이브러리가 잇다는 것을 알게 되었고, 간단한 문제를 해결하는 방안을 알게 되었다
*/
