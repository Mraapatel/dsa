#include <iostream>
using namespace std;

int main()
{
    /*
    int num = 3546 ;
    // int *p = &num ;
    int *p = 0;
    p = &num ;
    cout<<(*p)  << p <<endl ;
    cout<<&num <<endl ;
    int **q = &p ;

    cout<<**q<< q <<endl ;

    int ***s= &q ;
    cout<<***s<< s <<endl ;
    cout<<&q <<endl ;
    s++ ;
    cout<<&s ;

    int arr[10] = {50, 4, 0, 6, 8, 2, 00, 9, 3, 90};
    cout << "address of first index is " << arr << endl;
    cout << "address of first index is " << &arr[1] << endl;
    cout << *arr << endl;
    cout << *(arr + 1) << endl;
    cout << *(arr + 5) << endl;
    cout << *(arr + 5) << endl;
    cout << 4 [arr] << endl; //   MIMP  arr[i] ==  i[arr]  == *(arr + i )
    cout << 9 [arr] << endl;

    int *pt  = 0;
    pt = arr;
    cout << pt << endl;
    cout << &arr[0] << endl;
    cout << arr << endl;
    pt = pt + 4;
    cout<< *pt << endl ;
    */

    int a[10] = {1, 5, 8, 3, 4, 9, 2, 7, 6, 4};
    char ch[10] = "abcedfghi"; // char array ends wiht null character

    int *apointer = 0;
    apointer = &a[0];

    char *chp = &ch[0];

    cout << apointer << endl;
    cout << &apointer[0] << endl;

    cout << apointer[4] << endl;

    cout << apointer[0] << endl;
    cout << *apointer << endl;
    
    cout << chp << endl; //  it does not print address of ch array insted it will print values of entire array
    cout << chp[2] << endl; // it will print value present at specified index 

    cout << chp[0] << endl;  // it will print value present at specified index 
    cout << *chp << endl;
    return 0;
}