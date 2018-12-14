/*
 * Created by SharpDevelop.
 * User: Lenovo
 * Date: 2018.12.14.
 * Time: 20:45
 * 
 * To change this template use Tools | Options | Coding | Edit Standard Headers.
 */
using System;
using System.IO;


namespace balazs1
{
	class Program
	{
		public static void Main(string[] args)
		{
			int szam;
			int sor = 0;
			
			Console.WriteLine("Adj meg egy számot!: ");
			
			szam = Convert.ToInt32(Console.ReadLine());
			
			sor++;
			
			StreamReader sr = new StreamReader("szavak.txt");
			
			while(!sr.EndOfStream)
			{
				
				sr.ReadLine();
				
				if(sor%szam == 0);
				{
				Console.WriteLine(sr.ReadLine());
				}
				sor++;
				
			}
			
			Console.WriteLine(sr.ReadLine());
			
			
			Console.Write("Press any key to continue . . . ");
			
			sr.Close();
			Console.ReadKey(true);
		}
	}
}