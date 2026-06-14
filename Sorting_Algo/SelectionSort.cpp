//#include<iostream>
//#include<algorithm>
//using namespace std;
//void Selectionsort(int arr[], int size) {
//	for (int i = 0; i < size-1; i++)
//	{
//		int minindex = i;
//		for (int j = i+1; j < size; j++)
//		{
//			if (arr[j] < arr[minindex])
//				minindex = j;
//		}
//		swap(arr[i], arr[minindex]);
//
//	}
//}
//void display_array(int arr[],int size) {
//	
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//int main() {
//	int arr[] = {10,2,1,5,6};
//	Selectionsort(arr, 5);
//	int size = sizeof(arr) / sizeof(arr[0]);
//	display_array(arr,size);
//	return 0;
//}