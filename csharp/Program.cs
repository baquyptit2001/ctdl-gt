using System;
using System.Text;

namespace csharp
{
    class Program
    {
        static void Main(string[] args)
        {
            int t = Convert.ToInt32(Console.ReadLine());
            while(t>0){
                int n = Convert.ToInt32(Console.ReadLine());
                string begin="", end="";
                for(int i=0;i<n;i++){
                    begin+='A';
                    end+='B';
                }
                Console.Write(begin+' ');
                while(begin!=end){
                    for(int i=begin.Length-1;i>=0;i--){
                        if(begin[i]=='A'){
                            StringBuilder tmp = new StringBuilder(begin);
                            tmp[i] = 'B';
                            begin = tmp.ToString();
                            break;
                        }
                        if(begin[i]=='B'){
                            StringBuilder tmp = new StringBuilder(begin);
                            tmp[i] = 'A';
                            begin = tmp.ToString();
                            continue;
                        }
                    }
                   Console.Write(begin+' ');
                }
                Console.WriteLine();
                t--;
            }
        }
    }
}
