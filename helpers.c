//
//  helpers.c
//
// Computer Science 50
// Problem Set 3
//
// Helper functions for Problem Set 3.
//
       
#include <cs50.h>
#include<stdio.h>
#include "helpers.h"
bool search(int value, int values[], int n);
void sort(int values[], int n);
int size, needle, min;
const int MAX = 65536;
int haystack[MAX];

//
// Returns true if value is in array of n values, else false.
//
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    
        while (MAX >= min);
        int mid = (MAX + min)/2;
        if(haystack[mid] < needle)
        {
            min = MAX + 1;
            printf("min < needle %d\n", min);
        }
        else if(haystack[mid] > needle)
        {   
            min = MAX - 1;
        }
        else
        {
        return true;
        }
    return false;    
}

//
// Sorts array of n values.
//
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    int i,j,temp;
    for(i = 0; i < n; i++)
     {
        for(j = i + 1; j < n; j++) 
       { 
            if(values[i] > values[j])
            {
                temp = values[i];
                values[i] = values[j];
                values[j] = temp;
            }
        }
        return;
      }
}
