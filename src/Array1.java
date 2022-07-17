
import java.util.Arrays;

public class Array1 {

	public static void main(String[] args) {
		
		int arr[]= {4,8,1,2,4,9,8,1,2};
		
		Arrays.sort(arr);
		
		
		for(int i=0;i<arr.length-1;i++) {
			System.out.println(arr[i]);
		}
		for(int i=0;i<arr.length-1;i++) {
			
			if(arr[i]==arr[i+1]) {
				System.out.println("duplicate is found");
			}
			
			else {
				System.out.println("no duplicate found");
     		}	

	    }
	}
}

