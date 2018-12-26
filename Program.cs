/*
 * Created by SharpDevelop.
 * User: Lenovo
 * Date: 2018.12.26.
 * Time: 11:13
 * 
 * To change this template use Tools | Options | Coding | Edit Standard Headers.
 */
using System;

namespace netacademia2
{
	class Program
	{
		public static void Main(string[] args)
		{
			
			if(DateTime.Today.DayOfWeek==DayOfWeek.Tuesday)
				
			{
				Console.WriteLine("Valamilyen halas recept hozzávalók");
			}
			else
			{
				
			
			Console.WriteLine("Marhahús");
			Console.WriteLine("Vöröshagyma");
			Console.WriteLine("Olaj");
			Console.WriteLine("Pirospaprika");
			
			Console.WriteLine("Hello World!");
			}
			// TODO: Implement Functionality Here
			
			Console.Write("Press any key to continue . . . ");
			Console.ReadLine();
		}
	}
}