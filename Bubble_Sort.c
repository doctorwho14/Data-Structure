// 버블 정렬 코드(bubble sort)

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
			/*	정렬이 진행되는 과정을 보기 위한 코드*/
			printf("showing process%d :\n", i);
			show(arr, size);
			/**/
		}
	}
}

