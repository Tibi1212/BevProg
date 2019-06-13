package fuggvenyek;
import java.util.InputMismatchException;
import java.util.Scanner;


public class fuggvenyek7 {
	public static int beker() throws InputMismatchException {
		
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
//		if(a==0) {
//			throw new InputMismatchException("0 val való osztás nem lehetséges");
//		}
		sc.close();
		return a;
	}
public static int PrimE(int a) {
	int osztoi = 0;
	for (int i = 1; i < a ; i++) {
		if(a%i==0 ) {
			osztoi++;
			}
		}
			return osztoi;
	
	}
		public static void kiir(int a) {
		if(a == 1)
	System.out.println("A szám prím");
		else 
			System.out.println("A szám nem prím");}
	

	public static void main(String[] args)    {
	
		try{// TODO Auto-generated method stub
int b = beker();
kiir(PrimE(b));
		}
		catch(InputMismatchException e) {
			System.out.println("Nem megfelelõ karakter");
		}
	}

}
