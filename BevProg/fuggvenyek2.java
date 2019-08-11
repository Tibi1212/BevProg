package fuggvenyek;
import java.util.InputMismatchException;
import java.util.Scanner;

public class fuggvenyek2 {

	
	public static double beker() throws InputMismatchException {
		Scanner sc = new Scanner(System.in);
		double a = sc.nextDouble();
		sc.close();
		return a;
	}
	public static double negyzet(double a) {
		return Math.pow(a, 2);
	}
	public static void negyzetMetodus(double a) {
		System.out.println(Math.pow(a, 2));
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
double a =beker();
System.out.println("A szám négyzete függvénnyel: "+negyzet(a));
negyzetMetodus(a);
	}

}
