
// 1. Test thuật toán săp xếp
//#include <iostream>
//#include <ctime>
//#include <algorithm>
//using namespace std;
//
//bool test_output (int a[], int n)
//{
//    int t=1;
//    for (int i=0; i<n-1; ++i)
//    {
//        if (a[i]>a[i+1]) {
//            t = 0;
//            break;
//        }
//    }
//    if (t==0) return false;
//    else return true;
//}
//
//int main()
//{
//    srand(time(0));
//    int n;
//    cin >> n;
//    int a[n];
//    for (int i=0; i<n; ++i)
//    {
//        a[i] = 1+rand()%101;
//    }
//    for (int i=0; i<n; ++i)
//    {
//        cout << a[i] << " ";
//    }
//    sort(a,a+n);
//    cout << endl;
//    for (int i=0; i<n; ++i)
//    {
//        cout << a[i] << " ";
//    }
//    cout << endl;
//    cout << test_output(a,n);
//}

//2. thuật toán tìm kiếm
//#include <iostream>
//#include <algorithm>
//#include <fstream>
//using namespace std;
//
//bool search (int a[], int n, int x)
//{
//    int right = n-1;
//    int left = 0;
//    while (left<right)
//    {
//        int mid = (right+left)/2;
//        if (a[mid]==x) return true;
//        else if (mid<x) left = mid+1;
//        else if (mid>x) right = mid-1;
//    }
//    return false;
//}
//
//int main ()
//{
//    ifstream input ("input_2_BT04.txt");
//    int n,x;
//    input >> n >> x;
//    int a[n];
//    for (int i=0; i<n; ++i)
//    {
//        input >> a[i];
//    }
//    sort(a,a+n);
//    for (int i=0; i<n; ++i) cout << a[i] << " ";
//    cout << endl;
//    cout << search(a,n,x);
//}


// 4.
//#include <iostream>
//#include <ctime>
//
//using namespace std;
//
//void bubble_sort (int a[], int n)
//{
//    for (int i=n-2; i>=0; --i)
//    {
//        for (int j=0; j<=i; ++j)
//        {
//            if (a[j] > a[j+1]) swap(a[j],a[j+1]);
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
//        a[i] = 1+rand()%10001;
//    }
//    for (int i=0; i<n; ++i)
//    {
//       cout << a[i] << " ";
//    }
//    cout << endl;
//    clock_t begin = clock();
//    // code to time
//    bubble_sort(a,n);
//    clock_t end = clock();
//    double elapsedSecs = double(end - begin) / CLOCKS_PER_SEC;
//    cout << "time: "  << elapsedSecs;
//    cout << endl;
//     for (int i=0; i<n; ++i)
//    {
//        cout << a[i] << " ";
//    }
//}


// 5. tổng đôi
//#include <iostream>
//#include <ctime>
//using namespace std;
//
//int main ()
//{
//    srand(time(0));
//    int n;
//    cin >> n;
//    int a[n];
//    for (int i=0; i<n; ++i)
//    {
//        int sign;
//        int k = 1+rand()%100;
//        if (k>50) sign = 1;
//        else sign = -1;
//        a[i] = (1+rand()%100)*sign;
//    }
//    for (int i=0; i<n; ++i)
//    {
//        cout << a[i] << " ";
//    }
//    cout << endl;
//    for (int i=0; i<n-1; ++i)
//    {
//        for (int j=i+1; j<n; ++j)
//        {
//            if (a[i]+a[j]==0) cout << a[i] << " " << a[j] << endl;
//        }
//    }
//
//
//}

// 6.
//#include <iostream>
//#include <ctime>
//#include <algorithm>
//
//using namespace std;
//
//int main ()
//{
//    srand(time(0));
//    int n;
//    cin >> n;
//    int a[n];
//    for (int i=0; i<n; ++i)
//    {
//        int sign;
//        int k = 1+rand()%100;
//        if (k>50) sign = 1;
//        else sign = -1;
//        a[i] = (1+rand()%100)*sign;
//    }
//    for (int i=0; i<n; ++i)
//    {
//        cout << a[i] << " ";
//    }
//    cout << endl;
//    for (int i=0; i<n-2; ++i)
//    {
//        for (int j=i+1; j<n-1; ++j)
//        {
//            for (int k =j+1; j<n; ++k)
//            {
//                if (a[i]+a[j]+a[k]==0) cout << a[i] << " " << a[j] << " " << a[k] <<endl;
//            }
//        }
//    }
//}

// 7.
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main ()
//{
//    string s;
//    cin >> s;
//    for (int i=0; i<s.length(); ++i)
//    {
//        for (int j=0; j<s.length(); ++j )
//        {
//            cout << s[i] << s[j] << " ";
//            for (int k=0; k<s.length(); ++k)
//            {
//                cout << s[i] << s[j] << s[k] << " ";
//            }
//        }
//    }
//}

// 8. khiêu vũ
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int main ()
//{
//    int n;
//    cin >> n;
//    double a[n];
//    double b[n];
//    for (int i=0; i<n; ++i)
//    {
//       cin >> a[i] >> b[i];
//    }
//    sort(a,a+n);
//    sort(b,b+n);
//    int test = 1;
//    for (int i=0; i<n; ++i)
//    {
//       if (a[i]<b[i]) test = 0;
//    }
//    if (test == 0) cout << "No";
//    else cout << "Yes";
//
//}

// 9.1 9.2
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main ()
//{
//  int n;
//  cin >> n;
//  int a[n][2];
//  for (int i=0; i<n; ++i)
//  {
//      for (int j=0; j<2; ++j)
//      {
//          cin >> a[i][j];
//      }
//  }
//  int queen1 = 0;
//  int queen2 = 0;
//  for (int i=0; i<n-1; ++i)
//  {
//      for (int j=j+1; j<n; ++j)
//      {
//          if (a[i][0] == a[j][0] || a[i][1] == a[j][1])
//          {
//              queen1 = 1;
//              break;
//          }
//          if ( abs(a[i][0]-a[j][0]) == abs(a[i][1]-a[j][1]))
//          {
//              queen2 = 1;
//              break;
//          }
//      }
//      if (queen1==1) break;
//      if (queen2==1) break;
//  }
//  if (queen1==1 || queen2==1) cout << "No";
//  else cout << "Yes";
//}


//9.3
//#include <iostream>
//
//using namespace std;
//
//int freq (int a[], int n, int x)
//{
//    int count = 0;
//    for (int i=0; i<n; ++i)
//    {
//        if (x == a[i]) ++count;
//    }
//    return count;
//}
//
//int main ()
//{
//    int n;
//    cin >> n;
//    int a[n];
//    for (int i=0; i<n; ++i)
//    {
//        a[i] = -1;
//    }
//    int x,y;
//    for (int i=0; i<n; ++i)
//    {
//        cin >> x >> y;
//        a[x] = y;
//    }
//    for (int i=0; i<n; ++i)
//    {
//        if (a[i]==-1) {
//            cout << "No";
//            return 0;
//        }
//        if (freq(a,n,a[i]) >= 2) {
//            cout << "No";
//            return 0;
//        }
//    }
//    for (int i=0; i<n-1; ++i)
//    {
//        for (int j=i+1; j<n; ++j)
//        {
//            if ( abs(i-j) == abs(a[i]-a[j]) )
//            {
//                cout << "No";
//                return 0;
//            }
//
//        }
//    }
//    cout << "Yes";
//}


// 10 sắp hậu
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//bool test_queen (int i1, int j1, int i2, int j2)
//{
//    if (i1==i2 || j1==j2 || abs(i1-i2) == abs(j1-j2)) return false;
//    else return true;
//}
//
//int main ()
//{
//    int n = 5;
//    int a[n][n];
//    for (int i=0; i<n; ++i)
//    {
//        for (int j=0; j<n; ++j)
//        {
//            a[i][j] = 0;
//        }
//    }
//
//    int j1=0;
//    a[0][j1]=1;
//    int j2;
//    int j3;
//    int j4;
//    int j5;
//    for (int j2=0; j2<n; ++j2)
//    {
//        if (test_queen(0,j1,1,j2)==1) {
//       //     a[1][j2] = 1;
//            j2 =
//            break;
//        }
//        for (int j3=0; j3<n; ++j3)
//        {
//             if (test_queen(0,j1,2,j3)==1 && test_queen(1,j2,2,j3)==1) {
//            //    a[2][j3] = 1;
//                break;
//             }
//            for (int j4=0; j4<n; ++j4)
//            {
//              if (test_queen(0,j1,3,j4)==1 && test_queen(1,j2,3,j4)==1 && test_queen(2,j3,3,j4)==1) {
//                a[3][j4] = 1;
//                break;
//              }
//              for (int j5=0; j5<n; ++j5)
//              {
//                  if (test_queen(0,j1,4,j5)==1 && test_queen(1,j2,4,j5)==1 && test_queen(2,j3,4,j5)==1 && test_queen(3,j4,4,j5)==1) {
//                   {
//                    a[4][j5] = 1;
//                    break;
//                   }
//              }
//            }
//        }
//    }
//    }
//
//
//
//     for (int i=0; i<n; ++i)
//    {
//        for (int j=0; j<n; ++j)
//        {
//           cout << a[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//}


// 11 Password
//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//bool reverse_test (string s1, string s2)
//{
//	string temp = "";
//	for (int i=s1.length()-1; i>=0; --i)
//	{
//		temp+=s1[i];
//	}
//	if (temp == s2) return true;
//	else return false;
//}
//
//int main() {
//	int n;
//	cin >> n;
//	string s;
//	vector<string> pass;
//	for (int i=0; i<n; ++i)
//	{
//		cin >> s;
//		pass.push_back(s);
//	}
//	string res;
//	for (int i=0; i<n-1; ++i)
//	{
//	    int found = 0;
//		for (int j=i+1; j<n; ++j)
//		{
//			if (reverse_test(pass[i],pass[j]) == 1)
//			{
//				res = pass[i];
//				found = 1;
//				break;
//			}
//		}
//		if (found == 1 ) break;
//	}
//	cout << res.length() << " " << res[res.length()/2];
//}


// 12. Eratosthenes sieve
//#include <iostream>
//
//using namespace std;
//
//int main ()
//{
//    int n;
//    cin >> n;
//    int a[n+1];
//    for (int i=2; i<=n; ++i)
//    {
//        a[i] = 1;
//    }
//
//    for (int i=2; i<=n; ++i)
//    {
//        if (a[i]==1) {
//            for (int j=i*2; j<=n; j+=i)
//            {
//                a[j]=0;
//            }
//        }
//    }
//
//    for (int i=2; i<=n; ++i)
//    {
//        if (a[i]==1) cout << i << " ";
//    }
//
//}


// 13.1 Sherlock and Array
//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main()
//{
//    int test;
//    cin >> test;
//    for (int i=0; i<test; ++i)
//    {
//        int n;
//        cin >> n;
//        int a[n];
//        for (int j=0; j<n; ++j)
//        {
//            cin >> a[j];
//        }
//        int mid = n/2;
//        int sum_left = 0;
//        int sum_right = 0;
//        for (int i=0; i<=mid-1; ++i)  sum_left+=a[i];
//        for (int i=mid+1; i<n; ++i) sum_right+=a[i];
//        if (sum_left == sum_right) cout << "YES" << endl;
//        else if (sum_left < sum_right)
//        {
//            int t=0;
//            while (sum_left<sum_right){
//                mid+=1;
//                sum_left+=a[mid-1];
//                sum_right-=a[mid];
//                if (sum_left == sum_right) t=1;
//                if (mid==n-1 && sum_left == 0) t=1;
//            }
//            if (t==1) cout << "YES" << endl;
//            else cout << "NO" << endl;
//        }
//        else {
//            int t=0;
//            while (sum_left>sum_right){
//                mid-=1;
//                sum_left-=a[mid];
//                sum_right+=a[mid+1];
//                if (sum_left == sum_right) t=1;
//                if (mid==0 && sum_right==0) t=1;
//            }
//            if (t==1) cout << "YES" << endl;
//            else cout << "NO" << endl;
//        }
//    }
//
//}

// 14 Mystery Number
//#include <cmath>
//#include <cstdio>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//
//int main() {
//    int n;
//    cin >> n;
//    int a[n];
//    for (int i=0; i<n; ++i)
//    {
//        cin >> a[i];
//    }
//    int b[n+1];
//    for (int i=0; i<n+1; ++i)
//    {
//        cin >> b[i];
//    }
//    sort(a,a+n);
//    sort(b,b+n+1);
//    for (int i=0; i<n+1; ++i)
//    {
//        if (a[i]!=b[i]) {
//            cout << b[i];
//            break;
//        }
//        if (i==n) {
//            cout << b[i];
//            break;
//        }
//    }
//    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//    return 0;
//}

// 15. Falling Rocks
//#include <iostream>
//
//using namespace std;
//
//void time1 (char a[], int w, int h)
//{
//    for (int i=0;i<h;++i)
//    {
//        for (int j=0; j<w; ++j)
//        {
//            if (a[i][j]=='E' || a[i][j]=='R') a[i][j] = a[i+1][j];
//        }
//    }
//}
//
//int main ()
//{
//    int w,h;
//    cin >> w >> h;
//    char a[1000][1000];
//    for (int i=0; i<h; ++i)
//    {
//        for (int j=0; j<w; ++j)
//        {
//            cin >> a[i][j];
//        }
//    }
//
//
//}

// 16.

