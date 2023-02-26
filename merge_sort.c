#include <stdio.h>
#define SIZE 8

void show(int* arr) {
	printf("\n\n[");
	for (int i = 0; i < SIZE;i++) {
		printf("%d ", arr[i]);
	}
	printf("]\n");
}

void merge_sort(int s, int e, int* arr) {
	int mid;
	if (s == e)
		return;

	mid = (s + e) / 2;
	merge_sort(s, mid, arr);
	merge_sort(mid + 1, e, arr);
	merge(s, mid, e, arr);
}

void merge(int ls, int mid, int re, int *arr) {
	int t_ls = ls, t_mid = mid + 1, temp_s = ls;
	int temp_arr[SIZE];
	
	while (t_ls <= mid && t_mid <= re) {
		if (arr[t_ls] <= arr[t_mid])	temp_arr[temp_s++] = arr[t_ls++];
		else temp_arr[temp_s++] = arr[t_mid++];
	}
	while(t_ls <= mid) temp_arr[temp_s++] = arr[t_ls++];
	while (t_mid <= re) temp_arr[temp_s++] = arr[t_mid++];
	for (int i = ls; i <= re; i++) arr[i] = temp_arr[i];
	show(arr);

	return ;
}

int main(void) {
	int arr[SIZE];
	int i;

	printf("배열 입력: ");
	for (i = 0; i < SIZE; i++) {
		scanf_s("%d", &arr[i]);
	}
	show(arr);

	merge_sort(0, SIZE-1, arr);
	
	printf("정렬이 완료된 배열:");
	show(arr);

}