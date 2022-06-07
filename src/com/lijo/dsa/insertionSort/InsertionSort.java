/**
 * Insertion Sort Algorithm 

To sort an array of size N in ascending order: 

    Iterate from arr[1] to arr[N] over the array. 
    Compare the current element (key) to its predecessor. 
    If the key element is smaller than its predecessor, compare it to the elements before. 
    	Move the greater elements one position up to make space for the swapped element.
 */

package com.lijo.dsa.insertionSort;

import java.util.Iterator;

public class InsertionSort {
	void sort(int arr[]) {
		int n = arr.length;
		for(int i = 0; i < n; i++) {
			int key = arr[i];
			int j = i - 1;
			
			while(j >= 0 && arr[j] > key) {
				arr[j + 1] = arr[j];
				j -= 1;
			}
			arr[j +1] = key;
		}
	}
	
}

/*
 * Practice question:
 * https://practice.geeksforgeeks.org/problems/insertion-sort/1
 */