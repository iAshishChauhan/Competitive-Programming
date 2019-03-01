#include <cstring>
#include <iostream>
using namespace std;
void helper(char input[], int start, int end) {
    int j=0;
    for(int i=start; i<=end; i++) {
        input[j++] = input[i]; 
    }
    input[j] = '\0';
    cout << input << endl;
}

bool checkPalindrome(char input[]) {
    // Write your code here
    int size = strlen(input);
    if(size==0 || size==1) {
        return true;
    }
    
    if(input[0]!=input[size-1])
        return false;
    
    int start=0, end=size-1;
    
    helper(input,start+1,end-1);
    bool ans = checkPalindrome(input);
    return ans;

}

int main() {
    char input[50];
    cin >> input;
    bool ans = checkPalindrome(input);
    if(ans) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}



