
// A
// 1.
/*
#include <iostream>

using namespace std;

struct Point
{
    int x;
    int y;

    Point () {};
    Point (int _x, int _y)
    {
        x = _x;
        y = _y;
    }
    void print() {
      cout << x << " " << y << endl;
    }
};

void print (Point p)
{
    cout << p.x << " " << p.y << endl;
}

int main()
{
    Point p(4,5);
    p.print();
    print(p);
}
*/

// 2 truyền thanm trị và biến
/*
#include <iostream>

using namespace std;

struct Point
{
    int x;
    int y;

    Point () {};
    Point (int _x, int _y)
    {
        x = _x;
        y = _y;
    }
    void print() {
      cout << x << " " << y << endl;
    }
};

void print_add1 (Point p)
{
    cout << &p << endl;
}

void print_add2 (Point &p)
{
    cout << &p << endl;
}

int main ()
{
    Point p(2,3);
    cout << &p << endl;
    print_add1(p);
    print_add2(p);

}
*/

//3
/*
#include <iostream>

using namespace std;

struct Point
{
    double x;
    double y;

    Point () {};
    Point (int _x, int _y)
    {
        x = _x;
        y = _y;
    }
    void print() {
      cout << x << " " << y << endl;
    }
};

Point mid_point (const Point p1,const Point p2)
{
    Point mid;
    mid.x = (p1.x+p2.x)/2;
    mid.y = (p1.y+p2.y)/2;
    return mid;
}

int main ()
{
    Point p1(2,3);
    Point p2(4,6);
    p1.print();
    p2.print();
    Point mid = mid_point(p1,p2);
    mid.print();
}
*/

//4
/*
#include <iostream>

using namespace std;
struct Point
{
    double x;
    double y;

    Point () {};
    Point (int _x, int _y)
    {
        x = _x;
        y = _y;
    }
    void print() {
      cout << x << " " << y << endl;
    }
};

int main ()
{
    Point p1(2,3);
    cout << &p1 << endl;
    cout << &p1.x << endl;
    cout << &p1.y << endl;

}
*/

//5
/*
#include <iostream>

using namespace std;

struct Point
{
    double *x;
    double a[10];
};

int main ()
{
   Point p1;
   Point p2 = p1;
   cout << p1.x << endl;
   cout << p2.x << endl;

   cout << p1.a << endl;
   cout << p2.a << endl;

}
*/


// C
/*
#include <iostream>
#include <cstring>

using namespace std;

struct String
{
    int n;
    char *p;
    String (const char *a)
    {
        n = strlen(a);
        p = new char [n];
        for (int i=0; i<n; ++i)
        {
            p[i] = a[i];
        }
    }
    void print ()
    {
        cout << p << endl;
    }

    char* temp;
    void append(const char* u)
    {

        temp = new char [n+strlen(u)];
        for (int i=0; i<n; ++i) temp[i] = p[i];
        for (int i=n,j=0; i<n+strlen(u),j<strlen(u); ++i,++j) temp[i] = u[j];
        n+=strlen(u);
        p = temp;
    }

    ~String ()
    {
        delete [] p;
        delete [] temp;
    }
};

int main ()
{
   String a("Hello");
   char b[100] =" Peter";
   a.append(b);
   a.print();
   return 0;
}
*/
