/* 
Data Structures:
1. Searching Algorithms
	1.1 Linear search
	1.2 Binary Search
2. Sorting Algorithms
	2.1 Bubble sort
	2.2 Insertion Sort
	2.3 Selection Sort
	2.4 Quick Sort
	2.5 Merge Soert
	2.6 Heap Sort
	2.7 Shell Sort
	2.8 Coctail Sort
3. Stacks and Queues
	3.1 Array Representation
	3.2 Linked List Representation
4. Linked List
5. Graphs and Trees
*/
 
 /*
 Linear Search:
 --> Can be Applied on:	 
		1. Unique List
		2. Duplicate List
		3. Sorted List
		4. Unsorted List
 Time Complexity:
 Best Case - O(1)
 Worst Case - O(n)
 */
 
 #include<stdio.h>
 int main()
 {
	int a[7]={19,2,24,17,1,9,31};
	int i,flag=0,key=17;
	for(i=0;i<7;i++)
	{
		if(a[i]==key)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("Item Not Found");
	else
		printf("Item Found");
	return 0;
 }
