#include <iostream>
#include <string>
using namespace std;

void printKeypad(int num,string output, string options[]) {
    if(num==0) {
        cout << output << endl;
        return;
    }
    
    int smallNum = num/10;
    int lastDigit = num%10;
    string op = options[lastDigit];
    
    for(int i=0;i<op.size();i++) {
        printKeypad(smallNum,op[i]+output,options);
    }
}

void printKeypad(int num){
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */
    string options[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string output;
    return printKeypad(num, output, options);
}
