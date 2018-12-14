/*
 * Created by SharpDevelop.
 * User: Lenovo
 * Date: 2018.12.14.
 * Time: 21:20
 * 
 * To change this template use Tools | Options | Coding | Edit Standard Headers.
 */
using System;
using System.IO;

namespace nyuszi
{
	class Program
	{
		public static void Main(string[] args)
		{
			int tojas = 0;
			int suti = 0;
			int csoki = 0;
			string sor = " ";
			int i = 0;
			
			string[] nevek = new string[100];
			
			StreamReader sr = new StreamReader("nyuszi.txt");
			
			while(!sr.EndOfStream)
			{
				sor = sr.ReadLine();
				
				nevek[i] = sor;
				i++;
				sor = sr.ReadLine();
				tojas += Convert.ToInt32(sor);
				sor = sr.ReadLine();
				csoki += Convert.ToInt32(sor);
				sor = sr.ReadLine();
				suti += Convert.ToInt32(sor);
				
			
			}
			Console.WriteLine("A meglocsolt hölgyek neve: ");
			for(int j = 0;j<=i; j++)
			{
				Console.WriteLine(nevek[j]);
				
			}
		
			Console.WriteLine("tojások száma: {0}", tojas);
			                  
			Console.WriteLine("csokik száma: {0}", csoki);
			                  
			Console.WriteLine("sütik száma: {0}", suti);
			
			Console.Write("Press any key to continue . . . ");
			sr.Close();
			Console.ReadKey(true);
		}
	}
}