#include <iostream>

using namespace std;
//Array left rotation by d Program

void reverseArray(int arr[],int s, int e) {
	while(s<e) {
		int temp = arr[s];
		arr[s] = arr[e];
		arr[e] = temp;
		s++;
		e--;
	}
}

void leftRotateArray(int arr[],int n,int d) {
	reverseArray(arr,0,d-1);
	reverseArray(arr,d,n-1);
	reverseArray(arr,0,n-1);
}

int main()
{
	int arr[] = {1,2,3,4,5,6,7};

	leftRotateArray(arr,7,2);

	for(int i=0;i<7;i++) {
		cout << arr[i] << " ";
	}

}