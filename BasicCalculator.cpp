#include <iostream>
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

	InputData();//�Է�

	//���⼭���� �ۼ�

	cout << ans << "\n";

	return 0;
}
