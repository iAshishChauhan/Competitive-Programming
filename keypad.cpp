#include <iostream>
using namespace std;

int keypad(int num, string output[], string button[]) {
	if(num==0) {
		output[0] = "";
		return 1;
	}

	int lastDigit = num%10;
	int smallNum = num/10;
	string smallOutput[1000];

	int smallOutputSize = keypad(smallNum,smallOutput,button);
	string op = button[lastDigit];
	int k;
	for(int i=0;i<op.size();i++) {
		for(int j=0;j<smallOutputSize;j++) {
			output[k++] = smallOutput[j] + op[i];
		}
	}
	return k;
}

int keypad(int num, string output[]) {
	string button[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

	return keypad(num,output,button);
}

int main() {
	int num;
	cin >> num;

	string* output = new string[1000];

	int size = keypad(num,output);

	for(int i=0;i<size;i++) {
		cout << output[i] << endl;
	}
}