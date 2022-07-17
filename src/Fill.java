
import java.util.Arrays;


public class Fill {

	public static void main(String[] args) {
		
		int Arr[]= {10,20,30,40,50};
		
		int key = 45;
		
		Arrays.fill(Arr, key);
		
		System.out.println("array is:" + Arrays.toString(Arr));
		

	}

}
