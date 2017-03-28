#include<iostream>

using namespace std;

int main(){
	int A, B, T;
	int caseNo = 0;
	cin >> T;
	while(T--){
		int count = 0;
		cin >> A >> B;
		count = (B - A + 1) / 3 * 2;
		if((B - A + 1) / 3 * 3 == B - A - 1){
			if(B % 3 == 0 || B % 3 == 2)
				count++;
			if((B - 1) % 3 == 0 || (B - 1) % 3 == 2)
				count++;
		}
		if((B - A + 1) / 3 * 3 == B - A){
			if(B % 3 == 0 || B % 3 == 2)
				count++;
		}
		cout << "Case " << ++caseNo << ": " << count << endl;
	}
}
