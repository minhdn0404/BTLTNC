
//A
//1.
//#include <iostream>
//
//using namespace std;
//
//void f(int xval)
//{
//   int x;
//   x = xval;
//   // in địa chỉ của x tại đây
//   cout << &x << endl;
//}
//void g(int yval)
//{
//   int y;
//   cout << &y << endl;
//   // in địa chỉ của y tại đây
//}
//int main()
//{
//   f(7);
//   g(11);
//   return 0;
//}


// 2. Tính kích thước biến
//#include <iostream>
//
//using namespace std;
//
//int main( )
//{
//   char a[4] = "abc";
//   for (char *cp = a; (*cp) != '\0'; cp+=1) {
//      cout << (void*) cp << " : " << (*cp) << endl;
//   }
//   return 0;
//
//}

//3. SwapPointer
//#include <iostream>
//
//using namespace std;
//
//void swap_pointers(char* &x, char* &y)
//{
//   char *tmp;
//   tmp = x;
//   x = y;
//   y = tmp;
//}
//int main()
//{
//   char a[] = "I should print second";
//   char b[] = "I should print first";
//
//   char *s1 = a;
//   char *s2 = b;
//   swap_pointers(s1,s2);
//   cout << "s1 is " << s1 << endl;
//   cout << "s2 is " << s2 << endl;
//   return 0;
//}

// 4.
//#include <iostream>
//
//using namespace std;
//
//int main()  {
//   char *s;
//   char foo[] = "Hello World";
//   s = foo;
//   cout << "s is " << s << endl;
//   //s[0] = foo;
//   cout << "s[0] is " << s[0] << endl;
//   return(0);
//}

// C
//1.
/*
#include <iostream>
#include <cstring>
using namespace std;

int length (char a[])
{
    int l;
    for (int i=0; a[i]!= '\0'; ++i) l = i;
    return l+1;
}

void print (char a[])
{
    for (int i=0; i<length(a); ++i) cout << a[i] ;
    cout << endl;
}

void reverse(char a[])
{
    char b[50];
    for (int i=0; i<length(a)/2; ++i)
    {
        swap(a[i],a[length(a)-1-i]);
    }
}

void erase (char a[], int index, int n)
{
    for (int i=index ; i<n-1; ++i)
    {
        a[i] = a[i+1];
    }
    a[length(a)-1] = '\0';
}

void str_copy (char a[], char b[])
{
    for (int i=0; i<length(a); ++i)
    {
        b[i] = a[i];
        b[i+1] = '\0';
    }
}

void connect (char a[], char b[])
{
    int n = length(a);
    int m = length(b);
    for (int i=n, j=0; i<m+n,j<m; ++i,++j)
    {
        a[i] = b[j];
        a[i+1] = '\0';
    }
}

void delete_char(char a[], char c)
{
    int i=0;
    while (i<length(a))
    {
        if (a[i]==c) erase(a,i,length(a));
        else ++i;
    }
}

void pad_right(char a[], int n)
{
    if (length(a) < n) {
        for (int i=length(a); i<n ;++i)
        {
            a[i] = ' ';
            a[i+1] = '\0';
        }
    }
}

void pad_left(char a[], int n)
{
  if (length(a) < n) {
    int temp = length(a);
    char b[100];
    for (int i=0; i<n-temp; ++i)
    {
        b[i]=' ';
        b[i+1] = '\0';
    }
    char c[100];
    str_copy(a,c);
    str_copy(b,a);
    connect(a,c);
  }
}

void truncate(char a[], int n)
{
    if (length(a) > n)
    {
        a[n] = '\0';
    }
}

bool is_palindrome(char a[])
{
    char b[100];
    str_copy(a,b);
    reverse(b);
    for (int i=0; i<length(a); ++i)
    {
        if (a[i] != b[i] ) return false;
    }
    return true;
}

void trim_left(char a[])
{
   while (a[0] == ' ')
   {
       erase(a,0,length(a));
   }
}

void trim_right(char a[])
{
    while (a[length(a)-1] == ' ')
    {
        a[length(a)-1] = '\0';
    }
}

int main ()
{
    char a[100];
    int n;
    cin.getline(a,100);
    print(a);
    cout << length(a) << endl;

//    reverse(a);
//    print(a);

//    delete_char(a,'n');
//    print(a);

//    cin >> n;
//    pad_right(a,n);
//    cout << length(a) << endl;

//    cin >> n;
//    pad_left(a,n);
//    cout << length(a) << endl;

//      cin >> n;
//      truncate(a,n);
//      cout << length(a) << endl;
//      print(a);

//     cout << is_palindrome(a);

//     trim_left(a);
//     print(a);

//    trim_right(a);
//    print(a);
//    cout << length(a);


}
*/
