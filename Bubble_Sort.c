// ���� ���� �ڵ�(bubble sort)

void swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void BubbleSort(int *arr, int size) {
	int i, j;

	for (i = 0; i < size - 1; i++) {
		for (j = size - 1; j > i; j--) {
			if (arr[j] < arr[j - 1])
				swap(arr+j, arr+(j-1));
			/*	������ ����Ǵ� ������ ���� ���� �ڵ�*/
			printf("showing process%d :\n", i);
			show(arr, size);
			/**/
		}
	}
}

