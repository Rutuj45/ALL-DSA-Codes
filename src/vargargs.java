
class vars{
	
	public int perform(int ... n) {
		
		int sum = 0;
		for(int i :n) {
			
			sum= sum + i; 
		}
		return sum;
	}
}

public class vargargs {
	
	public static void main(String[] args) {

     	vars obj = new vars();
	
	    System.out.println(obj.perform(1,2,3,4,5,8,9));
	}
	
}
