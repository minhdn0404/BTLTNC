
// A.
// 1 Trả về mảng động
/*
#include <iostream>
#include <cstring>

using namespace std;

char* concat(const char* a, const char* b)
{
    int n = strlen(a) + strlen(b);
    char *c = new char[n+3];
    strcat(c,a);
    strcat(c,b);
    char *p = c;
    return p;
}

int main()
{
    char a[100];
    char b[100];
    cin.getline(a,100);
    cin.getline(b,100);

    char *p = concat(a,b);
    int n = strlen(a) + strlen(b);

    for (int i=3; i<n+3; ++i) cout << p[i];

    delete [] p;
}
*/



// 2. Lỗi delete quá sớm
/*
#include <iostream>

using namespace std;

int main ()
{
  int* p = new int;
  int* p2 = p;
  *p = 10;
  delete p;
  *p2 = 100;
  cout << *p2;
  delete p2;

}
*/


// 3.
//#include <iostream>
//
//using namespace std;
//
//int main ()
//{
//  char* a = new char[10];
//  char* c = a + 3;
//  for (int i = 0; i < 9; i++) a[i] = 'a';
//  a[9] = '\0';
//  cerr <<"a: " << "-" << a << "-" << endl;
//  cerr <<"c: " << "-" << c << "-" << endl;
//  delete c;
//  // lỗi do
//  cerr << "a after deleting c:" << "-" << a << "-" << endl;
//
//}


// C
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

char* reverse(const char* a)
{
   char* b = new char[100];
   for (int i=0, j=strlen(a)-1; i<strlen(a),j>=0; ++i,--j)
   {
       b[i] = a[j];
   }
   char *p = b;
   return p;

}

char* delete_char(const char* a, const char c)
{
    int n = strlen(a);
    char *b = new char[n];
    int j=0;
    for (int i=0; i<n; ++i)
    {
        if ( *(a+i) != c)  {
            b[j] = a[i];
            ++j;
        }
    }
    return b;
}

char* pad_right(const char* a, int n)
{
    char* b = new char [100];
    strcpy(b,a);
    if (strlen(a) < n) {
        for (int i=strlen(a); i<n ;++i)
        {
            b[i] = ' ';
            b[i+1] = '\0';
        }
    }
    return b;
}

char* pad_left(const char* a, int n)
{
  char* b = new char[100];
  if (strlen(a) < n) {
    int temp = strlen(a);
    for (int i=0; i<n-temp; ++i)
    {
        b[i]=' ';
        b[i+1] = '\0';
    }
   strcat(b,a);
  }
  else strcpy(b,a);
  return b;
}

char* truncate(const char* a, int n)
{
    char* b = new char [100];
    if (strlen(a) > n)
    {
        for (int i=0; i<n; ++i)
        {
            b[i] = a[i];
        }
    }
    else strcpy(b,a);
    return b;
}

char* trim_left(const char* a)
{
   char* b = new char [100];
   int j = 0;
   for (int i=0; i<strlen(a); ++i)
   {
       if (a[i] != ' ' || (a[i]==' ' && a[i-1]!=' ') ) {
          b[j] = a[i];
          ++j;
       }
   }
   return b;
}

char* trim_right(const char* a)
{
    char* b = new char [100];
    int j=0;
    for (int i = strlen(a)-1; i>=0 ; --i)
    {
        if (j ==0 && a[i]!=' ') {
            b[j] = a[i];
            ++j;
        }
        else if (j!=0) {
            b[j] = a[i];
            ++j;
        }
    }
    return reverse(b);
}

int main ()
{
    char a[100];
    cin.getline(a,100);
    cout << strlen(a) << endl;

    // reverse
//    int n = strlen(a);
//    char* p = reverse(a);
//    for (int i=0; i<n; ++i) cout << *(p+i);
//    delete [] p;

     // delete_char
//      int n = strlen(a);
//      char* p = delete_char(a,'n');
//      for (int i=0; i<n ; ++i) cout << *(p+i);
//      delete [] p;


      // pad_right
//    int n;
//    cin >> n;
//    char* p = pad_right(a,n);
//    cout << p << endl;
//    cout << strlen(p);
//    delete [] p;


      // pad_left
//      int n;
//      cin >> n;
//      char* p = pad_left(a,n);
//      cout << p << endl;
//      cout << strlen(p);
//      delete [] p;


       // truncate
//      int n;
//      cin >> n;
//      char* p = truncate(a,n);
//      cout << p << endl;
//      delete [] p;


      // trim_left
//     char* p = trim_left(a);
//     cout << p << endl;
//     delete [] p;


      // trim_right
//     char* p = trim_right(a);
//     cout << p << endl;
//     cout << strlen(p);
//     delete [] p;

}
*/
