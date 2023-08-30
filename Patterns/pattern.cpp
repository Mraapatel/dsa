#include <iostream>
using namespace std;
int main()
/*{
       // pattern: * * * *
       //          * * * *
       //          * * * *
       //          * * * *..
       int n;
       cout << "Enter number of rows " << endl;
       cin >> n;
       int i = 1;
       while (i <= n)
       {
           int j = 1;
           while (j <= n)
           {
               cout << " * ";
               j = j + 1;
           }
           cout << endl;
           i = i + 1;
       }
   }*/

/*{
     // pattern: 1111
     //          2222
     //          3333
     //          4444..
    int n;
    cout << "Enter number of rows " << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}*/

/*{
    // pattern: 1234
    //          1234
    //          1234
    //          1234..
    int n;
    cout << "Enter number of rows " << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j;
            j++;
        }
        cout << endl;
        i = i + 1;
    }
}*/

/*{
    // pattern: 321
    //          321
    //          321...
    int n;
    cout << "Enter number of rows " << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout <<n-j+1;
            j++;
        }
        cout << endl;
        i = i + 1;
    }
}*/

/*{
    // pattern: 1 2 3
    //          4 5 6
    //          7 8 9...
    int n;
    cout << "Enter number of rows " << endl;
    cin >> n;
    int i = 1;
    int count = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i = i + 1;
    }
}*/

/*{
    // pattern: *
    //          * *
    //          * * *
    //          * * * * ...
    int n;
    cout << "Enter number of row" << endl;
    cin >> n;
    int row = 1;

    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << row;
            col++;
        }
        cout << endl;
        row++;
    }
}*/

/*{
    // pattern: 1
    //          2 3
    //          4 5 6...
    int n;
    cout << "enter a number of rows" << endl;
    cin >> n;
    int row = 1;
    int count = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << count<<" ";
            count++;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}*/

/*{
    // pattern: 1
    //          2 3
    //          3 4 5
    //          4 5 6 7
    int n;
    cout << "Enter a number of rows" << endl;
    cin >> n;
    int row = 1;
    while (row <= n)
       {
        int col = 1;
        int count = row;
        while (col <= row)
        {
            cout << count << " ";
            count++;
            col++;
        }
        cout << endl;
        row++;
        }

    //  O R

   /*int num;
     cout << "Enter a number of row" << endl;
     cin >> num;
     int row = 1;
     while (row <= num)
        {

         int col = 0;
         while (col < row)
         {
             cout <<row+col;
             col++;
         }
         cout<<endl;
         row++;
        }
    */

/*{
     // pattern: 1
     //          2 1
     //          3 2 1
     //          4 3 2 1
int num;
cout << "enter a number of rows" << endl;
cin >> num;
int row = 1;
while (row <= num)
{
    int col = 1;
    while (col<= row)
    {
      cout<<row-col+1<<" ";
      col++;

    }
    cout << endl;
    row++;
}
return 0;
}*/

/*{
    // pattern: A A A
    //          B B B
    //          C C C
    //
    int num;
    cout << "Enter a number of rows" << endl;
    cin >> num;
    int row = 1;
    char alpha = 'A';
    while (row <= num)
    {
        int col = 1;
        while (col <= num)
        {
            cout << alpha << " ";
            col++;
        }
        cout << endl;
        row++;
        alpha++;
    }
    return 0;
}*/

/*{
    // pattern: A B C
    //          A B C
    //          A B C
    //
    int num;
    cout << "Enter a number of rows" << endl;
    cin >> num;
    int row = 1;
    while (row <= num)
    {
        int col = 1;
        while (col <= num)
        {
            char alpha = 'A' + col - 1;
            cout << alpha << " ";
            col++;
        }
        cout << endl;
        row++;
        }
    return 0;
}*/

/*{
    // pattern: A B C
    //          D E F
    //          G H I
    //
    int num;
    cout << "Enter a number of rows" << endl;
    cin >> num;
    int row = 1;
    char alpha = 'A';
    while (row <= num)
    {
        int col = 1;
        while (col <= num)
        {
            cout << alpha <<" ";
            col++;
            alpha++;
        }
        cout << endl;
        row++;
    }
    return 0;
}*/

/*{
    // pattern: A B C
    //          B C D
    //          C D E
    int num;
    cout << "Enter a number of rows" << endl;
    cin >> num;
    int row = 1;
    while (row <= num)
    {
        int col = 1;
        while (col <= num)
        {
            char alpha = 'A' + row + col - 2;
            cout << alpha << " ";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}*/

/*{  
        // pattern: A
        //          B C
        //          C D E
    int num;
    cout << "Enter row number";
    cin >> num;
    int row = 1;
    while (row <= num)
    { int col = 1;
        while (col <= row)
        {
            char alpha = 'A' + col + row - 2;
            cout << alpha;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}*/

/*{
    // pattern: A
    //          B B
    //          C C C
    int num;
    cout << "Enter row number" << endl;
    cin >> num;
    int row = 1;
    while (row <= num)
    {
        int col = 1;
        while (col <= row)
        {
            char alpha = 'A' + row - 1;
            cout << alpha;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}*/

/*{ 
    //          pattern: A
    //                   B C
    //                   D E F
    //                   G H I J
    int num;
    cout << "Enter a row number" << endl;
    cin >> num;
    int row = 1;
    char ch = 'A';
    while (row <= num)
    {
        int col = 1;
        while (col <= row)
        {
    cout << ch << " ";
            ch++;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}*/
/*{   
    //          pattern: D
    //                   C D
    //                   B C D
    //                   A B C D
    int num;
    cout << "Enter a row number" << endl;
    cin >> num;
    int row = 1;
    while (row <= num)
    {
        int col = 1;
        char ch = 'D' - row + col + 1 - 1;  //OR We can also write [char ch='A'+num-1; ]and   in inner while loop  [ch++;]
        while (col <= row)
        {
            cout << ch << " ";
            ch++;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}*/

/*{
    //    pattern:    * * * *
    //                * * *
    //                * *
    //                *
    int num;
    cout << "Enter a number of rows" << endl;
    cin >> num;
    int row = 1;

    while (row <= num)
    {
        int col = 1;
        while (col <= num - row + 1)
        {
            cout << "*"
                 << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}*/

/*{ //   pattern:     *
  //                 **
  //                ***
  //               ****
    int num;
    cout << "Enter a number of rows" << endl;
    cin >> num;
    int row = 1;

    while (row <= num)
    {
        int space = num - row;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        int col = 1;
        while (col <= row)
        {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}*/
/*{
       //     pattern: * * * *
       //                * * *
       //                  * *
       //                    *
    int num;
    cout << "Enter a row number " << endl;
    cin >> num;
    int row = 1;
    while (row <= num)
    {
        int space =  row - 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        int col = 1;
        while (col <= num - row + 1)
        {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }
}*/

/*{
        //  pattern:     1111
        //                222
        //                 33
        //                  4
    int num;
    cout << "Enter a row number " << endl;
    cin >> num;
    int row = 1;
    while (row <= num)
    {
        int space =  row - 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        int col = 1;
        while (col <= num - row + 1)
        {
            cout << row;
            col++;
        }
        cout << endl;
        row++;
    }
}*/

/*{
        //  pattern:        1
        //                 22
        //                333
        //               4444
    int num;
    cout << "Enter a row number " << endl;
    cin >> num;
    int row = 1;
    while (row <= num)
    {
        int space = num- row;
        while (space)
        {
            cout << " ";
            space--;
        }
        int col = 1;
        while (col <=row )
        {
            cout << row;
            col++;
        }
        cout << endl;
        row++;
    }
}*/

/*{
    //  pattern:12345
    //           2345
    //            345
    //             45
    //              5
    int num;
    cout << "Enter a number of row" << endl;
    cin >> num;
    int row = 1;
    while (row <= num)
    {
        int space = row - 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        int col = 1;
        while (col <= num - row + 1)
        {
            cout << row + col - 1;
            col++;
        }
        cout << endl;
        row++;
    }
}*/

/*{        
            //      pattern:    1
            //                 121
            //                12321
            //               1234321
    int num;
    cout << "Enter a number of row" << endl;
    cin >> num;
    int row = 1;
    while (row <= num)
    {
        int space = num - row;
        while (space)
        {
            cout << " ";
            space--;
        }
        int col = 1;
        while (col <= row)
        {
            cout << col;
            col++;
        }
        int start = row - 1;
        while (start)
        {
            cout << start;
            start--;
        }

        cout << endl;
        row++;
    }
}*/
/*{
    // pattern: 1234554321
    //          1234**4321
    //          123****321
    //          12******21
    //          1********1
    int num;
    cout << "Enter a number of rows" << endl;
    cin >> num;
    int row = 1;
    while (row <= num)
    {
        int col = 1;
        while (col <= num - row + 1)
        {
            cout << col;
            col++;
        }
        int star = row - 1;
        while (star)
        {
            cout << "*";
            star--;
        }
        int star2 = row - 1;
        while (star2)
        {
            cout << "*";
            star2--;
        }
        int revnum = num - row + 1;
        while (col <= 2 * num - 2 * row + 2)
        {
            cout << revnum;
            revnum--;
            col++;
        }
        revnum--;

        cout << endl;
        row++;
    }
}*/
{
    
}
