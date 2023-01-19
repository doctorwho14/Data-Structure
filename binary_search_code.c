#include <stdio.h>
#define SIZE 8

void show_arr(int* arr, int s, int e) {
    for (int i = s; i <= e;i++) {
        printf("----");
    }
    printf("\n|");
    for (int i = s; i <= e; i++) {
        printf(" %d |", arr[i]);
    }
    printf("\n");
    for (int i = s; i <= e;i++) {
        printf("----");
    }
    printf("\n");
}

int binary_search(int* arr, int s, int e, int key) {
    int mid = (s + e) / 2;

    // 예외처리
    if (s == e) {
        return (arr[s] == key) ? s : -1;
    }

    // 재귀적인 방법으로 분할정복(divide and conquer)
    if (arr[mid] == key) {
        show_arr(arr, mid, mid);
        return mid;
    }
    else if (arr[mid] < key) {
        show_arr(arr, mid+1, e);
        return binary_search(arr, mid + 1, e, key);
    }
    else if (arr[mid] > key) {
        show_arr(arr, s, mid-1);
        return binary_search(arr, s, mid - 1, key);
    }
    else
        return -1;
}

int main(void) {
    int arr[SIZE] = { 1,3,4,5,6,7,8,9 };
    show_arr(arr, 0, SIZE-1);

    printf("key element = 6\n이진검색 결과 몇 번째 인덱스에 있는가?: %d\n", binary_search(arr, 0, SIZE - 1, 6));
}