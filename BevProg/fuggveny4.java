package fuggvenyek;
import java.util.Scanner;

public class fuggveny4 {
	
	public static StringBuffer beker() {
		Scanner sc = new Scanner (System.in);
		StringBuffer str = new StringBuffer(sc.nextLine());
		sc.close();
		return str;
	}
 
	
	public static StringBuffer vissza(StringBuffer str) {
		return (str).reverse();
	}
	public static void megforditoMetodus(StringBuffer str) {
		System.out.println((str).reverse());
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		System.out.println("Adj meg egy mondatot megford�tom");
		
//		System.out.println("A f�ggv�nnyel ez egy �gy volt: "+vissza(beker()));
		megforditoMetodus(beker());
	

	}

}
