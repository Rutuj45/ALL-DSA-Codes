
import java.util.Arrays;

public class CopyArr {

	public static void main(String[] args) {
		
		int intArr[] = {10,20,15,22,35};
		
		System.out.println("Integer Array:" + Arrays.toString(intArr));
		
		System.out.println("New Array by copyof:");
		
		System.out.println("Integer Array:" + Arrays.toString(Arrays.copyOf(intArr, 10)));
		
		
		
		

	}

}
