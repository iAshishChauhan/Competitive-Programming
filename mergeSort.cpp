#include <iostream>
using namespace std;

void merge(int input[],int si, int mid, int ei) {
    
    int n1 = mid - si + 1; 
    int n2 = ei - mid;
    
    int L[n1], R[n2];
    int i,j,k;
    for(i=0;i<n1;i++) {
        L[i] = input[si+i];
    }
    for(j=0;j<n2;j++) {
        R[j] = input[mid+1+j];
    }
    
    i=0;
    j=0;
    k=si;
    
    while(i<n1 && j<n2) {
        if(L[i]<=R[j]) {
            input[k] = L[i];
            i++;
        }
        else {
            input[k] = R[j];
            j++;
        }
        k++;
    }
    
    while(i<n1) {
        input[k] = L[i];
        i++;
        k++;
    }
    
    while(j<n2) {
        input[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int input[], int si, int ei) {
	// Write your code here
	if(si>=ei) {
        return;
    }
    int mid = (si+ei)/2;
    
    mergeSort(input,si,mid);
    mergeSort(input,mid+1,ei);
    
    merge(input,si,mid,ei);
}

int main() {
	int input[1000],length;
  	cin >> length;
  	for(int i=0; i < length; i++)
    cin >> input[i];
  	mergeSort(input, 0,length-1);
  	for(int i = 0; i < length; i++) {
   	 	cout << input[i] << " ";
  	}
	
}