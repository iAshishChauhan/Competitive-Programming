#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {

	for(int i=0;i<n-1;i++) //Loop for number of Rounds.
	{
		//Find min element.
		int min = arr[i];
		int minIndex = i;

		for(int j=i+1;j<n;j++)
		{
			if(min>arr[j]) {
				min = arr[j];
				minIndex = j;
			}
		}

		//Now we have to swap min number with index i i.e 0;

		int temp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = temp;
	}

}

int main() {
	int arr[6] = {6,5,4,3,2,1};
	selectionSort(arr,6);

	for(int i=0;i<6;i++)
		cout << arr[i] << " ";

	cout << endl;

	return 0;
}