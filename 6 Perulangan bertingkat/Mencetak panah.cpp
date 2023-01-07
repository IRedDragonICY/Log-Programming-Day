#include <iostream>
using namespace std;
int main()
{
      int i, j, n;
      cout << "Masukkan jumlah baris: ";
      cin >> n;  
      int num1 = n / 2 * 3;
      // right arrow
      cout << "Panah kanan" << endl;
      for (i = 0; i < n; i++)
      {
            for (j = 0; j < n; j++)
            {                 
                  if (i == n / 2 || j - i == n / 2 || i + j == num1)
                        cout << "*";
                  else
                        cout << " ";
            }
            cout << "\n";
      }
       
      cout << "Panah kiri" << endl;
      for (i = 0; i < n; i++)
      {
            for (j = 0; j < n; j++)
            {                 
                  if (i == n / 2 || i - j == n / 2 || i + j == n / 2)
                        cout << "*";
                  else
                        cout << " ";
            }
            cout << "\n";
      }
      return 0;
}