// ���� ���� �ڵ�(seletion sort)

int Find_Min_index(int* arr, int s, int e) {
	// �κ� �迭���� �ּڰ� ������ �ε����� ��ȯ�ϴ� �Լ�(�ּڰ� ã��)
	int min_idx = s;	// �ּڰ� ���� = ���� �ε���

	// ���޹��� �迭���� �ּڰ��� ã�� ����
	for (int i = s+1; i <= e; i++) {
		if (arr[min_idx] > arr[i])
			min_idx = i;
	}

	// �ּڰ� �ε��� ��ȯ
	return min_idx;
}

void Selection_Sort(int arr[], int size) {
	int i;

	for (i = 0; i < size - 1; i++) {	// size-1 �� ����: �ּҰ��� �����Ǹ� �ڵ����� ������ ���Ұ� �ִ밪�� ��.
		swap(arr+Find_Min_index(arr, i, size - 1), arr+i);
		/*	������ ����Ǵ� ������ ���� ���� �ڵ�*/
		printf("showing process%d :\n", i);
		show(arr, size);
		/**/
	}
}