void swap(int *a, int *b)
{
  int temp = (*a);
  (*a) = (*b);
  (*b) = temp;
}


void selectionSort(int *arr, int num)
{ // Implement here

		// i는 lv.0, lv.1 .... lv.i를 의미한다.
		for( int i=0 ; i<num ; i++){
			int min = arr[i];
			int min_index = i;
		// i번째 배열의 최소값을 찾아 그 값과 index를 min,min_index variable에 저장한다.
		// i번째 배열에서 최소값을 찾으려면 i번재 index부터 num까지 비교하면 된다.	
			for( int j=i+1 ; j<num ; j++){
			if( min > arr[j]){
			min = arr[j];
			min_index = j;
			}
			}
		// 찾은 최소값을 오른쪽 sub-array의 첫번째 수와 교환.
			swap((arr+i),(arr+min_index));
		// 교환한 수를 오른쪽 sub-array에서 빼서 왼쪽 sub-array의 마지막수로 넣는 것은 arr관점에서 자동 완료.
}
		// i=num이 되면 오른쪽 sub-array 의 크기가 0이 되면서 sorting 종료.
}


void bubbleSort(int *arr, int num)
{
  		// Implement here
  		// 반복문을 이용해 lv.0에서 num-1번, lv.1에서 num-2번... 마지막에 lv.num-1에서 0번을 구현시킬 것이다.
  		// i변수를 통해 lv.0~lv.num-1까지 반복문 구현.
		for(int i=0; i<num ; i++){
		// j변수를 통해 lv.i에서의 num-1-i번의 swap실행. 
	  	for(int j=0; j<(num-1-i) ; j++){
		// j번째 배열의 크기가 j+1번째 보다 크거나 같으면 swap 실행.
		if( arr[j] >=  arr[j+1])
		swap(arr +j, arr + (j+1));
}
}
}

void insertionSort(int *arr, int num)
{
  		// Implement here
  		// i는 lv.i+1의 i번째 index를 의미한다. 
		// j는 lv.i+1의 j번째 index를 의미한다. 
		// number는 j번째와 j+1번째의 index의 값을 바꾸기 위한 중간 유도체다.
		int i, j, number;
  		// lv.i+1번째 배열에서  
		for( i=0 ; i<num-1 ; i++){
		 j = i;
  		// lv.i+1번째 배열에서 처음에 i,i+1번째의 index수를 비교한 후,
		// i+1의 수가 더 작으면 두 index를 뒤집는다. 이 과정을 while문을 이용해 반복한다. 일종의 swap이 연속적으로 일어난다.
		while(arr[j] > arr[j+1]){
		number = arr[j];
		arr[j]= arr[j+1];
		arr[j+1]= number;
		j--;
}		//중간에 arr[j]< arr[j+1]이 되거나 j가 0이 되면 끝난다.
}
}

void merge(int *arr, int left, int mid, int right, int num)
{
 // Implement here
		// merge라는 함수에 left sub-array의 index가 left~mid가 주어지고,
		// right sub-array의 index가 mid+1~right까지 주어졌다고 생각하자.
		// 그리고 이 정렬된 두 sub-array를 하나의 배열로 통합시키겠다.
		// a는 왼쪽 sub-array의 index를 담당한다.
		int a = left;
		// b는 오른쪽 sub-array의 index를 담당한다.
		int b = mid+1;
		// c는 new_array라는 두 sub-array의 합병을 통해 assign 받을 새로운 배열로 이는 다시 arr에 할당해주는 역할을 한다.
		int c = left;
		// d는 new_array의 크기를 arr의 크기와 동일하게 해주기 위해 만든 크기 저장 variable이다.
		int d = sizeof(arr)/sizeof(int);
		// new_array는 입력마다 크기가 바뀌므로 동적 할당을 했다.
		int* new_array = new int[d];
		// 두 정렬된  sub-array의 index를 앞에서부터 차례대로 비교한 후 new_array배열에 대입한다.
		while( a <=mid && b <= right){
		if(arr[a] <= arr[b]){
		new_array[c] = arr[a];
		a++;
}
		else{
		new_array[c] = arr[b];
		b++;
}
		c++;
}		
		// 한 쪽 sub-array가 먼저 끝이난 후, 나머지 sub-array의 index를 그대로 new_array배열에 대입한다.
		if(a > mid){
		for(int d= b ; d <=right ; d++){
		new_array[c] = arr[d];
		c++;
}
}
		else{
		for(int e= a ; e <=mid; e++){
		new_array[c]= arr[e];
		c++;
}
}		// 위에서 assign받은 new_array를 우리가 원하는 arr배열에 할당시키면 완료가 된다.
		for (int f=left; f<=right; f++){
		arr[f] = new_array[f];
}		delete[] new_array;
}
void mergeSort(int* arr, int left, int right, int num) 
{
  // Implement here
		// left에는 arr와 sub-array들의 가장 왼쪽 index가 저장된다.
		// right에는 arr 및 sub-array들의 가장 오른쪽 index가 저장된다.
		// num은 각 과정에서의 전체 element의 개수이다.
		// 오른쪽 index가 왼쪽 index보다 크게 되면 재귀함수는 끝이난다.
		if(left<right){
		// mid는 각 단계의 divide나 comine에서 왼쪽 sub-array의 가장 오른쪽 index를 담당하게 된다.
		int mid = (left+right)/2;
		// 아래는 재귀호출 부분으로 왼쪽 정렬과, 오른쪽 정렬을 재귀적으로 호출한다.
		mergeSort(arr, left, mid, (mid-left+1)); // 왼쪽 정렬
		mergeSort(arr, mid+1, right, (right-mid)); // 오른쪽 정렬 
		merge(arr, left, mid, right, num); // 두 정렬을 합병하는 것으로 함수가 끝이난다.	
}
}
