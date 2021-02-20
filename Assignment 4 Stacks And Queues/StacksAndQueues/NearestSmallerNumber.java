//package StacksAndQueues;

import java.util.Stack;


public class NearestSmallerNumber {

   
    static void printSmaller(int arr[], int n) {

        Stack<Integer> S = new Stack<>();


        for (int i = 0; i < n; i++) {
        
            while (!S.empty() && S.peek() >= arr[i]) {
                S.pop();
            }


            if (S.empty()) {
                System.out.print("_, ");
            } 
            else 
            {
                System.out.print(S.peek() + ", ");
            }

           
            S.push(arr[i]);
        }
    }


    public static void main(String[] args) {
        int arr[] = {13, 3, 30, 2, 5};
        int n = arr.length;
        printSmaller(arr, n);
    }
}
