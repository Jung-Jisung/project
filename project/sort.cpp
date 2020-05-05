#include "sort.h"

void swap(int *a, int *b)
{
  int temp = (*a);
  (*a) = (*b);
  (*b) = temp;
}


void selectionSort(int *arr, int num)
{
  // Implement here
  // 우선 두개의 sub-array를 만들어 보겠다. 그리고 right array만 initialization을 한다  
	int* left array = new int[0];
	int* right array = new int[num];
	  for( int i=0 ; i < num ; i++){
		  right array = arr[i];}
  // j번째 오른쪽 sub-array에서 최소값을 선택하겠다.
  // min variable의 초기 값이 right array의 첫번째 수라 가정하고, 반복문을 통해 진짜 min값과 index를 찾을 거다.
  // sub-array에서 최소값을 선택, 오른쪽 sub-array의 첫번째 수와 교환한다.
  		for( j = 0 ; j < num ; j++){
		int min = right array[0];
		int min_index = 0;
	  	for(int k=1 ; k< num-j ; k++){
			if(min> right array[k]){
				min = right array[k];
				min_index = k;}
			}
				swqp(right array, right array + min_index);
  // 위에서 교환한 수를 j번째 오른쪽 sub-array에서 빼서 j번째 왼쪽 sub-array의 마지막수로 넣는다.
  // j번째 left array에 right array의 첫번째 수를 넣는다.
		left array[j] = right array[0];
  // right array의 배열을 하나씩 줄인다.
		for( int l = 0 ; l < num-1-j ; l++){
		right array[l] = right array[l+1];}
		}
}
  // j= num-1이 되면 right array의 크기가 0이 되고 sort 종료.	
void bubbleSort(int *arr, int num)
{
  // Implement here
  // 반복문을 이용해 lv 0에서 num-1번, lv 1에서 num-2번... 마지막에 lv num-1에서 0번을 구현시킬 것이다.
  // i변수를 통해 lv.1~lv.num까지 반복문 구현.
	for(int i=0; i<num ; i++){
	// j변수를 통해 lv.i에서의 num-1-i번의 swap실행. 
	  for(int j=0; j<(num-1-i) ; j++){
	// j번째 배열의 크기가 j+1번째 보다 크거나 같으면 swap 실행.
		 if( arr[j] >=  arr[j+1])
			 swap(arr +j, arr + (j+1);
}
}


void insertionSort(int *arr, int num)
{
  // Implement here
	
}

void mergeSort(int* arr, int left, int right, int num) 
{
  // Implement here
}


void merge(int *arr, int left, int mid, int right, int num)
{
  // Implement here
}

