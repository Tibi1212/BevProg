package fuggvenyek;
import java.util.InputMismatchException;
import java.util.Scanner;


public class fuggvenyek7 {
	public static int beker() throws InputMismatchException {
		
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
//		if(a==0) {
//			throw new InputMismatchException("0 val val� oszt�s nem lehets�ges");
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
	System.out.println("A sz�m pr�m");
		else 
			System.out.println("A sz�m nem pr�m");}
	

	public static void main(String[] args)    {
	
		try{// TODO Auto-generated method stub
int b = beker();
kiir(PrimE(b));
		}
		catch(InputMismatchException e) {
			System.out.println("Nem megfelel� karakter");
		}
	}

}
