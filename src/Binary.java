
import java.util.Arrays;

public class Binary {

	public static void main(String[] args) {
		
		int intArr[] = {10,700,30,40,50};
		
		Arrays.sort(intArr);
		
		System.out.println("elements are:"+Arrays.toString(intArr));
		
		int intKey = 40;
		
		System.out.println(intKey + " found at :" + Arrays.binarySearch(intArr, intKey));
	}

}
