using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace nyuszi
{
    class Program
    {
        static void Main(string[] args)
        {
            StreamReader sr = new StreamReader("nyuszi.txt");

            int tojas = 0;
            int csoki = 0;
            int suti = 0;

            string sor = "";

            Console.WriteLine("A hölgyek neve: ");
            Console.WriteLine();

            while (!sr.EndOfStream)
            {
                Console.WriteLine(sr.ReadLine());
                sor = sr.ReadLine();
                tojas += Convert.ToInt32(sor);
                sor = sr.ReadLine();
                csoki += Convert.ToInt32(sor);
                sor = sr.ReadLine();
                suti += Convert.ToInt32(sor);
            }
            Console.WriteLine();
            Console.WriteLine("Tojások száma: {0}", tojas);
            Console.WriteLine("Csokik száma: {0}", csoki);
            Console.WriteLine("Sütik száma: {0}", suti);

            sr.Close();

            //filekiiratás
            StreamWriter sw = new StreamWriter("osszeg.txt", true);
            sw.WriteLine("Tojások száma: {0}", tojas);
            sw.WriteLine("Sutik száma: {0}", suti);
            sw.WriteLine("Csokik száma: {0}", csoki);

            sw.Close();
            Console.ReadKey(true);

        
        }
    }
}
