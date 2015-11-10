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
int min = 0;
int max = 0;
//
// Returns true if value is in array of n values, else false.
//
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    
        while (max >= min);
        int mid = (max + min)/2;
        if(values[mid] < value)
        {
            min = max + 1;
            printf("min < value %d\n", min);
        }
        else if(values[mid] > value)
        {   
            min = max - 1;
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
