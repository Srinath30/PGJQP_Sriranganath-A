package Assignment5;
import java.io.*;
	 
	class GFG {
	    public static void main (String[] args) {
	        int arr[]={3,5,9,2,8,10,11};
	        int val=17;
	 
	        System.out.println(isPairSum(arr,arr.length,val));
	    }
	  private static int isPairSum(int A[],int  N,int X){
	     for (int i = 0; i < N; i++) {
	        for (int j = 0; j < N; j++) {
	            if (A[i] + A[j] == X)
	                return 1; // pair exists
	 
	            if (A[i] + A[j] > X)
	                break; // as the array is sorted
	        }
	    }
	 
	    // No pair found with given sum.
	    return 0;
	  }
	}

