#include <bits/stdc++.h>

using namespace std;

int main()
{
   int s;
   cin >> s;
   int r, c;
   cin >> r >> c;
   for (int k = 0; k < s; k++)
   {
      cout << "case#" << (k + 1) << ":" << endl;
      for (int i = 0; i < 2 * r + 1; i++)
         for (int j = 0; j > 2 * c + 1; j++)
         {
            if (i % 2 == 0)
            {
               if ((i == 0 && j == 0) || (i == 0 && j == 1))
               {
                  cout << "."
                       << "";
               }
               else

                   if (j % 2 == 0)
               {
                  cout << "+"
                       << "";
               }
               else
               {
                  cout << "-"
                       << "";
               }
            }

            else
            {
               if ((i == 1 && j == 0) || (i == 1 && j == 1))
               {
                  cout << "."
                       << "";
               }

               else if (j % 2 == 0)
               {
                  cout << "|";
               }
               else
               {
                  cout << ".";
               }
            }
         }cout<<endl;
         
         }

     
      return 0;
   }
