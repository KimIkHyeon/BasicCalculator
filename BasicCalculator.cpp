#include <iostream>
#include <stack>

using namespace std;

#define MAX (20)
int N;
int M[MAX + 10];
char op[MAX + 10];

void InputData(){
	cin >> N;
	cin >> M[0];
	for(int i=1; i<N; i++){
		cin >> op[i] >> M[i];
	}
}

int main(){
	int ans = -1;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	InputData();//입력

	//여기서부터 작성
	stack<int> stk;
	ans = 0;
	int t;
	
	stk.push(M[0]);
	
	for (int i = 1; i < N; i++) {
		switch (op[i]) {
			case '+':
				stk.push(M[i]);
				break;
			case '-':
				stk.push(-M[i]);
				break;
			case '*':
				t = stk.top()*M[i];
				stk.pop();
				stk.push(t);
				break;
			case '/':
				t = stk.top()/M[i];
				stk.pop();
				stk.push(t);
				break;
		}
	}
	while (!stk.empty()) {
		ans += stk.top();
		stk.pop();
	}

	cout << ans << "\n";

	return 0;
}
