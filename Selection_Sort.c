// 선택 정렬 코드(seletion sort)

int Find_Min_index(int* arr, int s, int e) {
	// 부분 배열에서 최솟값 원소의 인덱스를 반환하는 함수(최솟값 찾기)
	int min_idx = s;	// 최솟값 변수 = 시작 인덱스

	// 전달받은 배열에서 최솟값을 찾는 과정
	for (int i = s+1; i <= e; i++) {
		if (arr[min_idx] > arr[i])
			min_idx = i;
	}

	// 최솟값 인덱스 반환
	return min_idx;
}

void Selection_Sort(int arr[], int size) {
	int i;

	for (i = 0; i < size - 1; i++) {	// size-1 인 이유: 최소값이 배정되면 자동으로 마지막 원소가 최대값이 됨.
		swap(arr+Find_Min_index(arr, i, size - 1), arr+i);
		/*	정렬이 진행되는 과정을 보기 위한 코드*/
		printf("showing process%d :\n", i);
		show(arr, size);
		/**/
	}
}