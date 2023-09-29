import java.util.Stack;

public class Solution {
    
	public static void reverseStack(Stack<Integer> stack) {
		// write your code here
		
		// Base case 
		if(stack.isEmpty()){
			return;
		}
		// stack.peek() print the top element of the stack 
		System.out.print(stack.peek()+" ");
		stack.pop();
		reverseStack(stack);

		// Using Iteration 
		// Stack<Integer> ans = new Stack<>();
		// while(!stack.isEmpty()){
		// 	ans.push(stack.pop());
		// 	System.out.print(ans.peek()+" ");
		// }

	}

}
