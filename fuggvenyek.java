package fuggvenyek;
import java.util.InputMismatchException;
import java.util.Scanner;

public class fuggvenyek {

	public static double terulet(double a, double b) {
		return a*b;
		
	}
	public static void teruletMetodus(double a, double b) {
		System.out.println("A ter�let met�dussal: "+a*b);
	}
	public static double kerulet(double a, double b) {
		double c = 2*a+2*b;
		return c;
	}
	public static void keruletMetodus(double a, double b) {
		System.out.println(2*a+2*b);
	}
	public static void main(String[] args) throws InputMismatchException {
		// TODO Auto-generated method stub
		try {
		Scanner sc = new Scanner(System.in);
		double a = sc.nextDouble();
		double b = sc.nextDouble();
		sc.close();
		System.out.println("A ter�let f�ggv�nnyel: "+terulet(a, b));
		teruletMetodus(a, b);
		System.out.println("A ker�let f�ggv�nnyel: "+ kerulet(a, b));
		keruletMetodus(a, b);
		}
		catch(InputMismatchException e){
			System.err.println("nem a megfelel� form�tum");
		}

	}

}
