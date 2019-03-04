#include <iostream>
using namespace std;

int subsequence(string input, string output[]) {
	//base case
	if(input.empty()) {
		output[0] = "";
		return 1;
	}
	string smallString = input.substr(1);
	int smallOutputSize = subsequence(smallString,output);
	for(int i=0; i<smallOutputSize; i++) {
		output[i+smallOutputSize] = input[0] + output[i]; //That's the beauty of dynamic arrays.. size is automatically increased. :)
	}
	return 2 * smallOutputSize;
}

int main() {
	string input;
	cin >> input;

	//creating an output string array for storing the subsequences of input string.
	int len = input.size();
	string* output = new string[len];

	int size = subsequence(input,output);

	for(int i=0;i<size;i++) {
		cout << output[i] << endl;
	}

	return 0;
}