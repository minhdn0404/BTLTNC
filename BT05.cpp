
// 1. Địa chỉ các biến
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int a[5];
//    char b[5] = {'a','b','c'};
//    cout << a[0] << " " << a[1] << " " << a[2]  << endl;
//    cout << (void *)&b[0];
//
//}

// 2. Fucntion Call stack
//#include <iostream>
//
//using namespace std;
//
//int factorial (int n)
//{
//    if (n<=1) return 1;
//    else return n*factorial(n-1);
//}
//
//int main ()
//{
//    int n;
//    cin >> n;
//    cout << factorial(n);
//    cout <<
//}

// 6 binary search
//#include <iostream>
//
//using namespace std;
//
//int binary_search  (int key, int a[], int low, int high)
//{
//    if (low>high) return -1;
//    int mid = (low+high)/2;
//    if (a[mid] == key ) return mid;
//    else if (a[mid] > key) return binary_search(key,a,low,mid-1);
//    else return binary_search(key,a,mid+1,high);
//}
//
//int main ()
//{
//    int n;
//    cin >> n;
//    int a[n];
//    for (int i=0; i<n; ++i)
//    {
//        cin >>a[i];
//    }
//    int key;
//    cin >> key;
//    cout << binary_search(key,a,0,n-1);
//
//
//}

// B.
// 1
//#include <iostream>
//
//using namespace std;
//
//bool majority (bool a, bool b, bool c)
//{
//    return (a+b)/2;
//}
//
//int main ()
//{
//    bool a,b,c;
//    cin >> a >> b >> c;
//    cout << majority(a,b,c);
//}

//2
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//bool eq(int a[], int b[], int n)
//{
//    sort(a,a+n);
//    sort(b,b+n);
//    for (int i=0; i<n; ++i)
//    {
//        if (a[i]!=b[i]) return false;
//    }
//    return true;
//}
//
//int main ()
//{
//    int n;
//    cin >> n;
//    int a[n];
//    int b[n];
//    for (int i=0; i<n; ++i)
//    {
//        cin >> a[i];
//    }
//    for (int i=0; i<n; ++i)
//    {
//        cin >> b[i];
//    }
//    cout << eq(a,b,n);
//}

//3 5 lần
//4 17 17
//5
//6 ambigous
//7 D
//8 A
//9 D
//10 B
//11 C
//12 C
//13 D
//14 D
//15 B
//16 B
//17 A
//18 A
//19 B
//20 C
//21 B
//22 C
//23 A
//24 B
//25
//26 B

// C Bài tập
// 1. Dò mìn đơn giản
//#incldude <iostream>
//
//using namespace std;
//
//int main ()
//{
//    int m,n;
//    cin >> m >> n;
//    int k;
//    cin >> k;
//
//
//}


// 5.
//#include <iostream>
//
//using namespace std;
//
//bool snt (int n)
//{
//    int count =0;
//    for (int i=1;i<=n;++i)
//    {
//        if (n%i==0) ++count;
//    }
//    if (count>2) return false;
//    else return true;
//}
//
//int main ()
//{
//    int n;
//    cin >> n;
//    cout << snt(n);
//}


//6 ucln
//#include <iostream>
//
//using namespace std;
//
//int ucln (int a, int b)
//{
//    if (a==b) return a;
//    else {
//        if (a>b) {
//            for (int i=b; i>=1; --i){
//                if (a%i==0 && b%i==0) return i;
//            }
//        }
//        else{
//            for (int i=a; i>=1; --i)
//            {
//                if (a%i==0 && b%i==0) return i;
//            }
//        }
//    }
//}
//
//bool nto_cung_nhau (int a, int b)
//{
//    if (a==b) return false;
//    else{
//        if (a>b) {
//            int count = 0;
//            for (int i=1; i<=b; ++i)
//            {
//                if (a%i==0 && b%i==0) ++count;
//            }
//            if (count >1) return false;
//            else return true;
//        }
//        else {
//            int count = 0;
//            for (int i=1; i<=a; ++i)
//            {
//                if (a%i==0 && b%i==0) ++count;
//            }
//            if (count >1) return false;
//            else return true;
//        }
//    }
//}
//
//int main ()
//{
//    int a,b;
//    cin >> a >> b;
//    cout << ucln(a,b) << endl;
//    cout << nto_cung_nhau(a,b);
//}


//7
//#include <iostream>
//
//using namespace std;
//
//void print_triangle (int n)
//{
//    for (int i=0 ;i<n; ++i)
//    {
//        for (int k = n-i; k>0; --k) cout << " ";
//        for (int j=i; j>=0; --j)
//        {
//            cout << "*" << " ";
//        }
//        cout << endl;
//    }
//}
//
//int main ()
//{
//    int n;
//    cin >> n;
//    print_triangle(n);
//}


// 8.
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int rnd (double n)
//{
//    return floor(n);
//}
//
//int main ()
//{
//    double n;
//    cin >> n;
//    cout << rnd(n);
//}


// 9.
//#include <iostream>
//#include <ctime>
//using namespace std;
//
//int main ()
//{
//    srand(time(0));
//    int n;
//    cin >> n;
//    cout << 1+rand()%(n+1) << " ";
//}


// 10.
//#include <iostream>
//#include <ctime>
//using namespace std;
//
//void print (int a[], int n)
//{
//    for (int i=0; i<n-2; ++i)
//    {
//        for (int j=i+1; j<n-1; ++j)
//        {
//            for (int k=j+1; k<n; ++k)
//            {
//                if ( (a[i]+a[j]+a[k])%25==0 ) cout << a[i] << " " << a[j] << " " << a[k] << endl;
//            }
//        }
//    }
//}
//
//int main ()
//{
//    srand(time(0));
//    int n;
//    cin >> n;
//    int a[n];
//    for (int i=0; i<n; ++i)
//    {
//        a[i] = rand()%50;
//    }
//    for (int i=0; i<n; ++i)
//    {
//        cout << a[i] << " ";
//    }
//    cout << endl;
//    print(a,n);
//
//}


// 11.
//#include <iostream>
//#include <string>
//#include <bits/stdc++.h>
//using namespace std;
//
//string ten_to_2 (int n)
//{
//    string res = "";
//    while(n>0)
//    {
//        int du = n%2;
//        res+= to_string(du);
//        n/=2;
//    }
//    reverse(res.begin(),res.end());
//    return res;
//}
//
//int two_to_10 (string s)
//{
//    int res = 0;
//    for (int i=0; i<s.length(); ++i)
//    {
//        int k;
//        if (s[i]=='1') k=1;
//        else k=0;
//        res+=  (pow(2,s.length()-i-1)*k);
//    }
//    return res;
//}
//
//int main ()
//{
//    int n;
//    cin >> n;
//    cout << ten_to_2(n);
//    string s;
//    cin >> s;
//    cout << two_to_10(s);
//
//}


// 12.
//#include <iostream>
//
//using namespace std;
//
//int toHop(int k, int n)
//{
//    if (k==1) return n;
//    if (k==0 || k==n) return 1;
//    else return toHop(k-1,n-1) + toHop(k,n-1);
//}
//
//int main ()
//{
//    int n,k;
//    cin >> n >> k;
//    cout << toHop(k,n);
//}


