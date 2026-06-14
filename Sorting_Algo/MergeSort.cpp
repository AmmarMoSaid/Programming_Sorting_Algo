#include <iostream>
using namespace std;
// دالة الدمج: تدمج arr[l..m] مع arr[m+1..r]
void merge(int a[], int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    int *L = new int[n1];
    int *R = new int[n2];

    // انسخ البيانات إلى المصفوفتين المؤقتتين
    for (int i = 0; i < n1; i++) L[i] = a[l + i];
    for (int j = 0; j < n2; j++) R[j] = a[m + 1 + j];

    // ادمج النصفين بالترتيب الصحيح
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
        a[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
    while (i < n1) a[k++] = L[i++];
    while (j < n2) a[k++] = R[j++];
}

void mergeSort(int a[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(a, l, m);          // رتّب النصف الأيسر
        mergeSort(a, m + 1, r);     // رتّب النصف الأيمن
        merge(a, l, m, r);           // ادمج النصفين
    }
}
int main() {
    int arr[] = {11, 2, 4, 20, 1};
    mergeSort(arr, 0, 4);
    for (int i = 0; i < 5; i++) {
        cout << arr[i]<<"\t";
    }
	return 0;
}