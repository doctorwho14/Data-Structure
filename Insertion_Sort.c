#include <stdio.h>

// ���� ���� �ڵ�(insertion sort)

void show(int* arr, int size) {
	for (int i = 0;i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void insert(int* arr, int size, int insert_element) {
	int i, j;
	// 1. ������ ��ġ�� �迭���� ã��
	for (i = 0; i < size; i++) {
		if (insert_element < arr[i])	// ������ ����(insert_element) ���� ū �� �� ���� ���� ��
			break;
	}
	// 2. ������ ��ġ�� �ڿ� �ִ� ���ҵ� ��ĭ�� �ڷ� �̷��(�̷�°� �ڿ������� �̷�)
	for (j = size - 1;j >= i; j--) {
		arr[j + 1] = arr[j];
	}
	// 3. ����
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

	// ���� ���� �Լ� ȣ��
	//Insertion_Sort(arr, size);
	// ���� ���� �Լ� ȣ��
	//BubbleSort(arr, size);
	// ���� ���� �Լ� ȣ��
	Selection_Sort(arr, size);

	show(arr, size);

	return 0;
}