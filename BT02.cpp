// A Thực hành
// 4
//#include <iostream>
//#include <vector>
//#include <utility>
//
//using namespace std;
//
//bool LeapYear (int year)
//{
//    if (year % 400 == 0)
//        return true;
//    if (year % 4 == 0 && year % 100 != 0)
//        return true;
//    return false;
//}
//
//int day_sum (int d, int m, int y)
//{
//    int a[13] = {-1,31,28,31,30,31,30,31,31,30,31,30,31};
//    int b[13] = {-1,31,29,31,30,31,30,31,31,30,31,30,31};
//    if (LeapYear(y)==0)
//    {
//        int day_sum = d;
//        for (int i=1; i<m; ++i)
//        {
//         day_sum += a[i];
//        }
//        return day_sum;
//    }
//    else{
//        int day_sum = d;
//        for (int i=1; i<m; ++i)
//        {
//        day_sum += b[i];
//        }
//        return day_sum;
//    }
//}
//
//void day_month (int &n, int current_year, int &d_res, int &m_res )
//{
//    int a[13] = {-1,31,28,31,30,31,30,31,31,30,31,30,31};
//    int b[13] = {-1,31,29,31,30,31,30,31,31,30,31,30,31};
//
//    if (LeapYear(current_year)==0)
//    {
//        int i=1;
//        while (n>a[i])
//        {
//            n-=a[i];
//            ++i;
//        }
//        d_res = n;
//        m_res = i;
//    }
//    else{
//        int i=1;
//        while (n>a[i])
//        {
//            n-=b[i];
//            ++i;
//        }
//        d_res = n;
//        m_res = i;
//    }
//}
//
//int main ()
//{
//    int d,m,y;
//    char a,b;
//    cin >> d >> a >> m >> b >> y;
//    int d_sum = day_sum(d,m,y);
//    int k;
//    vector<int> p;
//    do
//    {
//        cin >> k;
//        p.push_back(k);
//    }while(k!=0);
//
//    for (int i=0; i<p.size(); ++i)
//    {
//        int day_res = 0;
//        int month_res = 0;
//        int year_res=y;
//        int sum_d_res = d_sum+p[i];
//
//    if (sum_d_res > 365 )
//       {
//           int test_year = y;
//           int number_day = 365;
//           while (sum_d_res>number_day)
//           {
//               if (LeapYear(test_year)==0)
//               {
//                   number_day = 365;
//                   sum_d_res-=number_day;
//                   ++test_year;
//               }
//               else{
//                number_day = 366;
//                sum_d_res-=number_day;
//                ++test_year;
//               }
//           }
//           year_res = test_year;
//       }
//
//    else if (sum_d_res<0)
//       {
//           if (sum_d_res>-365)
//           {
//                year_res-=1;
//                if (LeapYear(year_res)==0) sum_d_res += 365;
//                else sum_d_res += 366;
//           }
//           else {
//             int test_year = y;
//             int number_day = 365;
//             while (sum_d_res+number_day <0)
//             {
//               if (LeapYear(test_year)==0)
//               {
//                   number_day = 365;
//                   sum_d_res+=number_day;
//                   --test_year;
//               }
//               else{
//                number_day = 366;
//
//                sum_d_res+=number_day;
//
//
//
//                --test_year;
//               }
//             }
//           year_res = test_year;
//           }
//       }
//
//       day_month(sum_d_res,year_res,day_res,month_res);
//       cout << day_res << "-" << month_res << "-" << year_res << endl;
//    }
//
//}
//
//// B Câu hỏi
//1 B
//2
//3
//4 B
//5 D
//6 B
//7 C
//8 D
//9 B
//10 C
//11 C
//12 D
//13 B
//14 D
//15 B
//16 C
//17 C
//18 D
//19 C
//20 B
//

// C Bài tập
//2
//#include <iostream>
//
//using namespace std;
//
//int main ()
//{
//    int n;
//    cin >> n;
//    for (int i=n; i>=1; --i)
//    {
//        int k = n-i;
//        for (int h=k; h>0; --h)
//        {
//            cout << " ";
//        }
//        for (int j=i; j>0; --j)
//        {
//            cout << "*";
//        }
//        cout << endl;
//    }
//}


//3.
//#include <iostream>
//
//using namespace std;
//
//int main ()
//{
//    int n;
//    cin >> n;
//    int j =1;
//    for (int i=1; i<=n; ++i)
//    {
//        int h = n-i;
//        for (int p=h; p>=1; --p)
//        {
//            cout << " ";
//        }
//        for (int k=j; k>=1; --k)
//        {
//            cout << "*";
//        }
//        cout << endl;
//        j+=2;
//    }
//}

//4.
//#include <iostream>
//
//using namespace std;
//
//int main ()
//{
//    int n;
//    cin >> n;
//    int j = n*2-1;
//    for (int i=1; i<=n; ++i)
//    {
//        int h = i-1;
//        for (int p=h; p>=1; --p)
//        {
//            cout << " ";
//        }
//        for (int k=j; k>=1; --k)
//        {
//            cout << "*";
//        }
//        cout << endl;
//        j-=2;
//    }
//}
//

// 5.


// 6.

//#include <iostream>
//
//using namespace std;
//
//int main ()
//{
//    int n;
//    cin >> n;
//    int a[n][n];
//    int k=1;
//    for (int i=0; i<n; ++i)
//    {
//        int num = k;
//        for (int j=0; j<n; ++j)
//        {
//           if (num<=n) a[i][j] = num;
//           else{
//              num=num%n;
//              a[i][j] = num;
//           }
//           ++num;
//        }
//        ++k;
//    }
//
//    for (int i=0; i<n; ++i)
//    {
//        for (int j=0; j<n; ++j)
//        {
//            cout << a[i][j];
//        }
//        cout << endl;
//    }
//}

// 7.
//#include <iostream>
//
//using namespace std;
//
//int main ()
//{
//    int temp1,temp2;
//    cin >> temp1;
//    cout << temp1;
//    do
//    {
//      cin >> temp2;
//      if (temp1!=temp2 && temp2>0){
//        cout << temp2;
//        temp1=temp2;
//       }
//    }while (temp2>0);
//}

// bai3 triangle
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main ()
//{
//    int a,b,c;
//    cin >> a >> b >> c;
//    if (a+b>c && b+c>a && c+a>b)
//    {
//        cout << "Perimeter: " << a+b+c << endl;
//        if (a*a+b*b == c*c)
//        {
//            if (a==b) cout << "tam giac vuong can";
//            else cout << "tam giac vuong";
//        }
//        else if (b*b+c*c==a*a)
//        {
//            if (c==b) cout << "tam giac vuong can";
//            else cout << "tam giac vuong";
//        }
//        else if (a*a+c*c==b*b)
//        {
//            if (a==c) cout << "tam giac vuong can";
//            else cout << "tam giac vuong";
//        }
//        else if (a==b && a==c) cout << "tam giac deu";
//        else if (a==b && b!=c) cout << "tam giac can";
//        else if (a==c && b!=c) cout << "tam giac can";
//        else if (c==b && a!=c) cout << "tam giac can";
//    }
//    else cout << "This is not a triangle";
//
//
//}

// bai 6 phan so toi gian
//#include <iostream>
//
//using namespace std;
//
//int ucln (int a, int b)
//{
//    int ucln;
//    if (a==b) ucln = a;
//    else {
//        while (a!=b)
//        {
//            if (a>b) a=a-b;
//            else b=b-a;
//        }
//       ucln =a;
//    }
//    return ucln;
//}
//
//int main ()
//{
//    int tu_so;
//    int mau_so;
//    cin >> tu_so >> mau_so;
//    int ucmax = ucln(tu_so,mau_so);
//    tu_so/=ucmax;
//    mau_so/=ucmax;
//    cout << "phan so toi gian: " << tu_so << "/" << mau_so;
//}

// bai 8 phương trinh bac 2
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main ()
//{
//
//    double a,b,c;
//    cin >> a >> b >> c;
//    if (a==0)
//    {
//        if (b==0)
//        {
//            if (c==0) cout << "infinite";
//            else cout << "No solution";
//        }
//        else {
//            cout << "1 solution:" << -c/b;
//        }
//    }
//    else{
//        double delta = b*b-4*a*c;
//        if (delta>0) {
//            double x1 = (-b+sqrt(delta))/(2*a);
//            double x2 = (-b-sqrt(delta))/(2*a);
//            cout << "2 solutions: " << x1 << " " << x2;
//         }
//        else if (delta == 0)
//        {
//            cout << "double solution: " << -b/(2*a);
//        }
//        else cout << "No solution";
//    }
//}

// bai 9
//#include <iostream>
//
//using namespace std;
//
//int main ()
//{
//    int n;
//    cin >> n;
//    int sum = 0;
//    while (n >0)
//    {
//        int temp = n%10;
//        sum+=temp;
//        n/=10;
//    }
//    cout << sum;
//}

// bai 14
//#include <iostream>
//
//using namespace std;
//
//int main ()
//{
//    int n;
//    cin >> n;
//    double k;
//    double temp1,temp2;
//    double temp3,temp4;
//    cin >> k;
//    temp1 = k;
//    temp3 = k;
//    double max = temp1;
//    double min = temp3;
//    for (int i=1; i<n; ++i)
//    {
//        cin >> k;
//        temp2 = k;
//        temp4 = k;
//        if (temp2>temp1)
//        {
//            max = temp2;
//            temp1 = temp2;
//        }
//        if (temp4<temp3)
//        {
//            min = temp4;
//            temp3 = temp4;
//        }
//    }
//
//    cout << max << " " << min;
//}

// bai 15
//#include <iostream>
//
//using namespace std;
//
//int f(int index)
//{
//    if (index == 1 || index == 2) return 1;
//    else return f(index-1)+f(index-2);
//}
//
//bool test_fibonacci (int n)
//{
//    int t=0;
//    int i=1;
//    while (true)
//    {
//        if (f(i)==n)
//        {
//            t=1;
//            break;
//        }
//        else if (f(i)>n) break;
//        else ++i;
//    }
//    if (t==1) return true;
//    else return false;
//}
//
//void print_fibonacci (int n)
//{
//    int i=1;
//    while (f(i)<=n)
//    {
//       cout << f(i) << " ";
//       ++i;
//    }
//}
//
//int main ()
//{
//    int n;
//    cin >> n;
//    cout << test_fibonacci(n) << endl;
//    print_fibonacci(n);
//
//}

// bai 18
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main ()
//{
//   int i = 1;
//   int k;
//   vector<int> diem;
//   do
//   {
//       cout << "Nhap diem mon hoc " << i;
//       cin >> k;
//       if (k>=0 && k<=10) diem.push_back(k);
//       else if (k>10)
//       {
//           int t=1;
//           do
//           {
//            cout << "Nhap lai diem mon hoc " << i << "(trong khoang tu 0..10): ";
//            cin >> k;
//            if (k<0) {
//                t = 0;
//                break;
//            }
//            else if (k>=0 && k<=10)
//            {
//                diem.push_back(k);
//                break;
//            }
//           }while(k>10);
//           if (t==0) break;
//       }
//       else {
//        break;
//       }
//       ++i;
//   }while(k>=0 && k<=10);
//
//   cout << "so mon hoc: " << diem.size() << endl;
//   double sum = 0;
//   for (int i=0; i<diem.size(); ++i)
//   {
//       sum+=diem[i];
//   }
//   cout << "diem trung binh cua " << diem.size() << " mon hoc: " << sum/diem.size();
//}


// bài 20
// A
//#include <iostream>
//
//using namespace std;
//
//int main ()
//{
//    int n;
//    cin >> n;
//    int salary = 0;
//    if (n<=100){
//        salary+= n*12000;
//    }
//    else if (n>100 && n<=150)
//    {
//        salary = 100*12000+(n-100)*16000;
//    }
//    else if (n>150 && n<=200)
//    {
//        salary = 100*12000+50*16000+(n-150)*20000;
//    }
//    else {
//        salary = 100*12000+50*16000+50*20000+(n-200)*25000;
//    }
//    cout << salary;
//}


// B
//#include <iostream>
//
//using namespace std;
//
//int main ()
//{
//    double thu_nhap;
//    cin >> thu_nhap;
//    thu_nhap = thu_nhap - thu_nhap*9/100;
//    if (thu_nhap<=1000000) thu_nhap = thu_nhap;
//    else if (thu_nhap>1000000 && thu_nhap<=1500000)
//    {
//        thu_nhap -= (thu_nhap-1000000)*10/100;
//    }
//    else if (thu_nhap>1500000 && thu_nhap<=2000000)
//    {
//        thu_nhap = thu_nhap - 500000*10/100 - (thu_nhap-1500000)*15/100;
//    }
//    else {
//        thu_nhap = thu_nhap - 500000*10/100 - 500000*15/100 - (thu_nhap-2000000)*20/100;
//    }
//    cout << thu_nhap;
//}

// C
//#include <iostream>
//
//using namespace std;
//
//int main ()
//{
//    double n;
//    cin >> n;
//    for (int i=1; i<=12; ++i)
//    {
//        n+=(n*2/100);
//    }
//    cout << n;
//}

