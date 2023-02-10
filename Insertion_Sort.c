#include <stdio.h>

// 삽입 정렬 코드(insertion sort)

void show(int* arr, int size) {
	for (int i = 0;i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void insert(int* arr, int size, int insert_element) {
	int i, j;
	// 1. 삽입할 위치를 배열에서 찾기
	for (i = 0; i < size; i++) {
		if (insert_element < arr[i])	// 삽입할 원소(insert_element) 보다 큰 수 중 제일 작은 수
			break;
	}
	// 2. 삽입할 위치의 뒤에 있는 원소들 한칸씩 뒤로 미루기(미루는건 뒤에서부터 미룸)
	for (j = size - 1;j >= i; j--) {
		arr[j + 1] = arr[j];
	}
	// 3. 삽입
	arr[i] = insert_element;
	return;
}

void Insertion_Sort(int* arr, int size) {
	for (int i = 1; i < size; i++) {
		insert(arr, i, arr[i]);
	}
}



int main(void) {
	int arr[5] = { 5,2,4,3,1 };
	int size = 5;

	show(arr, size);

	// 삽입 정렬 함수 호출
	//Insertion_Sort(arr, size);
	// 버블 정렬 함수 호출
	//BubbleSort(arr, size);
	// 선택 정렬 함수 호출
	Selection_Sort(arr, size);

	show(arr, size);

	return 0;
}