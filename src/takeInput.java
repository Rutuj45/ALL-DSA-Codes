
import java.io.*;

public class takeInput {

	public static void main(String[] args) throws IOException {
		
		
		BufferedReader bfn = new BufferedReader(new InputStreamReader(System.in));
		
		System.out.println("Enter int");
		System.out.println("Enter string");
		
		int it = Integer.parseInt(bfn.readLine());
		
		String str = bfn.readLine();
		
		System.out.println("Entered int:"+ it);
		System.out.println("Entered string: "+ str);
		
		
				

	}

}
