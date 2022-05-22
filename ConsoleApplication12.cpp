#include <iostream>
using namespace std;




int main()
{

  //1

   int Width;
   cout << "Width = ";
   cin >> Width;


   int Height;
   cout << "Height = ";
   cin >> Height;


   int N;
   cout << "On 1m2 of wall have to = ";
   cin >> N;


   int M;
   cout << "Occupy windows and doors = ";
   cin >> M;


   int R;
   cout << "One liter of paint = = ";
   cin >> R;


   int CorrectSizeOfRoom = (Width * Height - M) / N;
   cout << "The paint will go away = " << CorrectSizeOfRoom << "\nTotal paint cost = " << CorrectSizeOfRoom * R << "\n";


  //2

   int a, b, c;
   cout << "Enter a ";
   cin >> a;
   cout << "Enter b ";
   cin >> b;
   cout << "Enter c ";
   cin >> c;

   if (a > b)
   {
       if (b > c)
           cout << c;
       else
           cout << b;
   }
   else
   {
       if (a < b && a < c)
           cout << a;
   }

  //3

   int num;

   cin >> num;
   if (num == 0)
       cout << "Your number is 0\n";
   else 
       if (num < 0)
       cout << "Your number is negative\n";
   else
       cout << "Your number is positive\n";


    //4

    //я позже добавлю


}

