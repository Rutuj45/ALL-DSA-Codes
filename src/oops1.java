


class oop{
	
	int i;
	int j;
	
	public oop(){
		i=5;
		j=6;
		
	}
	
	public oop(int num){
		j = num;
	}
	
	public oop(int n,double m) {
		i=n;
		j=(int)m;
	}
}
public class oops1 {

	public static void main(String[] args) {
		
		oop obj = new oop(9);
		
		System.out.println(obj.i);
        System.out.println(obj.j);

	}

}
