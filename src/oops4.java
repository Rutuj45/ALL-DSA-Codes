class virat{
	
	int num1;
	int num2;
	int ope;
	
	/*public virat() {
		num1=0;
		num2=0;
	}
	public virat(int i) {
		num1=i;
		num2=0;
	}
	public virat(int i,int j) {
		num1=i;
		num2=j;
	}
	*/
	
	public void perform(int i,int j) {
		System.out.println(i+j);
	}
	
	public void perform(int i,int j,int k) {
		System.out.println(i+j+k);
	}
	
}
public class oops4 {

	public static void main(String[] args) {
		virat obj = new virat();
		
		obj.perform(5,6,4);		

	}

}
