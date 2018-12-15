/*
 * Created by SharpDevelop.
 * User: Lenovo
 * Date: 2018.12.15.
 * Time: 8:30
 * 
 * To change this template use Tools | Options | Coding | Edit Standard Headers.
 */
using System;
using System.IO;

namespace kapcsolo
{

	class Program
	{
		public static void Main(string[] args)
		{
			string szin = "";
			
			Console.WriteLine("Adj meg egy színt!");
			
			szin = Console.ReadLine();
			
			switch(szin)
			{
				case "piros":
					Console.WriteLine("Amegadott szín piros.");
					
					break;
					case "kék":
					Console.WriteLine("A megadott szín kék.");
					
						break;
						
					case "zöld":
						Console.WriteLine("A megadott szín zöld");
			
					break;
						
				default:
					Console.WriteLine("A megadott színt nem ismerem");
						break;
					
			}
			
			StreamWriter sw = new StreamWriter("szinek.txt", true);
			sw.WriteLine(szin);
			sw.Close();
			
			Console.Write("Press any key to continue . . . ");
			Console.ReadKey(true);
		}
	}
}

	