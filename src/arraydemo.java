
public class arraydemo {

	public static void main(String[] args) {
		
		int a[][]={
				{1,2,3,4,5},
				{6,7,9,10},
				{11,12,13}
				
		};
		
		for(int k[] : a) {
			
			for(int j : k) {
			  System.out.print(" " + j);
			}
			System.out.println();
		}

	}

}
