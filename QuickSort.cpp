#include<iostream>
#include "Solution.h"
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(int input[],int s, int e) {
    int x = input[s];
    int count = 0;
    for(int i=s;i<=e;i++) {
        if(x>input[i]) {
            count++;
        }
    }
    
    int pi = s+count;
    
    swap(input[s],input[pi]);
    
    int i=s;
    int j=e;
    
    while(i<pi && j>pi) {
        if(input[i]<input[pi])
            i++;
        else if(input[j]>=input[pi]) {
            j--;
        }
        else {
            swap(input[i],input[j]);
        }
    }
    return pi;
}

void quickSort1(int input[], int s, int e) {
    if(s>=e) {
        return;
    }
    
    int pi = partition(input,s,e);
    quickSort1(input,s,pi-1);
    quickSort1(input,pi+1,e);
    
}

void quickSort(int input[], int size) {
    quickSort1(input, 0, size-1);
}

int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    
    delete [] input;
}


