package fuggvenyek;

import java.util.InputMismatchException;
import java.util.Scanner;

public class fuggveny5 {
	
	public static int bekeres() throws InputMismatchException {
		Scanner sc = new Scanner(System.in);
		int meret = sc.nextInt();
		sc.close();
		return meret;
	}

	public static int[] tombcsinalo(int a) {

		int[] adat = new int[a];
		for (int i = 0; i < adat.length; i++) {

			adat[i] = (int) (Math.random() * 10) + 1;

		}
		return adat;
	}

	public static void tombkiiro(int[] adat) {
 for(int element : adat)
	 System.out.print(element+" ");
	}
	
	public static void tombvarazslo(int [] adat) {
		
		int i = 0;
		System.out.println();
		while(i<adat.length) {
			
			System.out.print(adat[i]+" ");
			i++;
		}
		
	}
	
	public static int [] novekvo(int [] adat) {
		int csere;
		for (int i = 0; i < adat.length; i++) {
			for (int j = i+1; j < adat.length; j++) {
				if(adat[i]>adat[j]) {
					csere = adat [i];
					adat [i]= adat[j];
					adat [j]= csere;
					}
				}
		}
				return adat;
			}
			
		
	

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		try {
			System.out.println("Add meg a  tömb méretét");
int meret = bekeres();
tombkiiro(tombcsinalo(meret));

int [] adat =tombcsinalo(meret);
System.out.println("\n Az eredeti tömb: ");
tombvarazslo(adat);
System.out.println("\n A rendezett tömb: ");
tombvarazslo(novekvo(adat));
			
		} catch (InputMismatchException e) {
			System.err.println("Nem megfelelõ formátum");
		}
	}
}

	


