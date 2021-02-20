//package StacksAndQueues;

import java.util.Stack;

public class NextGreaterElement {

    public static void printGreater(int arr[])
    {
        Stack<Integer> s = new Stack<>();
        int temp[] = new int[arr.length];

      
        for (int i = arr.length - 1; i >= 0; i--)
        {
			
            if (!s.empty())
            {
                while (! (s.empty()) && (s.peek() <= arr[i]) )
                {
                    s.pop();
                }
            }
            temp[i] = s.empty() ? -1 : s.peek();
            s.push(arr[i]);
        }
        for (int i = 0; i < arr.length; i++)
            System.out.println(arr[i] + " --> " + temp[i]);
    }


    public static void main(String[] args)
    {
        int arr[] = { 3, 10, 10, 17, 30, 25 };
        printGreater(arr);
    }
}
