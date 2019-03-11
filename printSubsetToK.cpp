#include <iostream>
using namespace std;

void printSubsetSumToK1(int input[], int size, int k, int output[],int m) { 
    if(size==0) {
        if(k==0) {
            for(int i=0;i<m;i++)
                cout << output[i] << " "; 
            cout << endl;
            return;
        }
        else
            return;
    }
    
    int newoutput[1000];
    printSubsetSumToK1(input+1,size-1,k,output,m);
    int j=0;
    for(int i=0;i<m;i++) {
        newoutput[j++] = output[i];
    }
    newoutput[j] = input[0];    
    printSubsetSumToK1(input+1,size-1,k-input[0],newoutput,m+1);
}

void printSubsetSumToK(int input[], int size, int k) {
    // Write your code here
    int output[10000];
    printSubsetSumToK1(input,size,k,output,0);
}

int main() {
  int input[1000],length,k;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  cin>>k;
  printSubsetSumToK(input, length,k);
}
