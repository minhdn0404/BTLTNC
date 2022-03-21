// A.
// 1.
// 2. Thiếu base case
//#include <iostream>
//
//using namespace std;;
//double H(int N) {
//   return H(N-1) + 1.0/N;
//}
//
//int main ()
//{
//    int n;
//    cin >> n;
//    cout << H(n);
//
//}

// 3. Lỗi công thức
//#include <iostream>
//
//using namespace std;
//double H(int N) {
//   if (N == 1) return 1.0;
//   return H(N) + 1.0/N;
//}
//
//int main ()
//{
//    int n;
//    cin >> n;
//    cout << H(n);
//}

// 4. Đệ quy quá sâu
//#include <iostream>
//double H(int N) {
//   if (N == 1) return 0.0;
//   return H(N-1) + 1.0/N;
//}
//using namespace std;
//
//int main ()
//{
//    int n;
//    cin >> n;
//    cout << H(n);
//}

// 5.
//#include <iostream>
//
//using namespace std;
//long F(int n) {
//   if (n == 0) return 0;
//   if (n == 1) return 1;
//   return F(n-1) + F(n-2);
//}
//
//int main ()
//{
//    int n;
//    cin >> n;
//    cout << F(n);
//}


// 7.
//#include <iostream>
//
//using namespace std;
//
//int main ()
//{
//
//}


// optimize fibonacci
//#include <iostream>
//
//using namespace std;
//
//int a[1000] = {0};
//int fibo (int n)
//{
//    if (a[n]!=0) return a[n];
//    else {
//     if (n==0 || n==1) {
//        a[0]=0;
//        a[1]=1;
//        return a[n];
//    }
//     else {
//        a[n] = fibo(n-1)+fibo(n-2);
//       return a[n];
//      }
//
//    }
//}
//
//int main ()
//{
//    int n;
//    cin >> n;
//   cout << fibo(n) << endl;
//   for (int i=0; i<=n; ++i)
//   {
//       cout << a[i] << " ";
//   }
//
//}

// C
// 1. Sắp hậu
//#include <iostream>
//
//using namespace std;
//
//void print (int a[], int n)
//{
//    for (int i = 0; i<n; ++i)
//    {
//        for (int j=0; j<a[i]; ++j) cout << ".";
//        cout << "*";
//        for (int j=a[i]+1; j<n; ++j) cout << ".";
//        cout << endl;
//    }
//    cout << "---------";
//    cout << endl;
//}
//
//bool valid (int a[], int row, int col)
//{
//    for (int i=0; i<row; ++i)
//    {
//        if(a[i] == col) return false;
//        if(abs(i - row) == abs(a[i] - col)) return false;
//    }
//    return true;
//}
//
//void queen (int a[], int n, int row)
//{
//    // điều kiện dừng
//    if (row == n) {
//        print(a,n);
//    }
//    else {
//        for (int i=0; i<n; ++i)
//        {
//            if (valid(a,row,i)) {
//                a[row] = i;
//                queen(a,n,row+1);
//            }
//        }
//    }
//}
//
//int main ()
//{
//    int n;
//    cin >> n;
//    int a[100] = {0};
//    queen(a, n, 0);
//
//}


// 2.Hoán vị độ dài k (chỉnh hợp chập k)
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//void print (vector<char> a)
//{
//    for (int i=0; i<a.size(); ++i) cout << a[i];
//    cout << endl;
//}
//
//bool exist (vector<char> a, char t)
//{
//    for (int i=0; i<a.size(); ++i)
//    {
//        if (a[i] == t) return true;
//    }
//    return false;
//}
//
//void permutation (int k, vector<char> a, vector<char> p, int start, int &count)
//{
//    if (a.size() == k) {
//        print(a);
//        ++count;
//    }
//    else {
//        for (int i = start; i<p.size() ; ++i )
//        {
//            if (a.size() < k && exist(a,p[i])==0)
//            {
//                a.push_back(p[i]);
//                permutation(k,a,p,0,count);
//                a.pop_back();
//            }
//        }
//    }
//}
//int main ()
//{
//    int n,k;   // từ độ dài k lập từ n chữ cái
//    cin >> n >> k;
//    vector<char> p;
//    for (char i = 'a'; i<='a'+n-1; ++i)
//    {
//        p.push_back(i);
//    }
//    print(p);
//    int count = 0;
//    int start = 0;
//    vector<char> a;
//    permutation(k,a,p,start,count);
//    cout << count;
//
//
//}



// 3. Tổ hợp đô dài k
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//void print (vector<char> a)
//{
//    for (int i=0; i<a.size(); ++i) cout << a[i];
//    cout << endl;
//}
//
//void permutation (int k, vector<char> a, vector<char> p, int start, int &count)
//{
//    if (a.size() == k) {
//        print(a);
//        ++count;
//    }
//    else {
//        for (int i = start; i<p.size() ; ++i )
//        {
//            if (a.size() < k)
//            {
//                a.push_back(p[i]);
//                permutation(k,a,p,i+1,count);
//                a.pop_back();
//            }
//        }
//    }
//}
//int main ()
//{
//    int n,k;   // từ độ dài k lập từ n chữ cái
//    cin >> n >> k;
//    vector<char> p;
//    for (char i = 'a'; i<='a'+n-1; ++i)
//    {
//        p.push_back(i);
//    }
//    print(p);
//    int count = 0;
//    int start = 0;
//    vector<char> a;
//    permutation(k,a,p,start,count);
//    cout << count;
//
//
//}


// 5. Partition.
//#include <iostream>
//#include <vector>
//using namespace std;
//
//void print (vector<int> a)
//{
//    for (int i=0; i<a.size(); ++i)
//    {
//        cout << a[i] << " ";
//    }
//    cout << endl;
//}
//
//void recursion (int sum, int n, int start, vector<int> a)
//{
//    if (sum == n) print(a);
//    else {
//        for (int i=start; i<n; ++i)
//        {
//            if (sum+i <=n) {
//                sum+=i;
//                a.push_back(i);
//                recursion(sum,n,i,a);
//                sum-=i;
//                a.pop_back();
//            }
//        }
//    }
//
//}
//
//int main ()
//{
//    int n;
//    cin >> n;
//    int sum = 0;
//    vector<int> a;
//    recursion(sum,n,1,a);
//
//}


// duyệt tổ hợp 1-n
//#include <iostream>
//#include <vector>
//using namespace std;
//
//void print (vector<int> a)
//{
//    for (int i=0; i<a.size(); ++i)
//    {
//        cout << a[i] << " ";
//    }
//    cout << endl;
//}
//
//void combination (int n, int start, vector<int> a, int &count)
//{
//    if (a.size() == count) print(a);
//    else {
//        for (int i=start; i<=n; ++i)
//        {
//            if ( a.size() < count )
//            {
//                a.push_back(i);
//                combination(n,i+1,a,count);
//                a.pop_back();
//            }
//        }
//    }
//}
//
//int main ()
//{
//    int n;
//    cin >> n;
//    vector<int> a;
//    int count = 1;
//    while (count<=n)
//    {
//        combination(n,1,a,count);
//        ++count;
//    }
//}

// 6 Duyệt hoán vị
//#include <iostream>
//#include <vector>
//using namespace std;
//
//bool exist (vector<int> a, int x)
//{
//    for (int i=0; i<a.size(); ++i)
//    {
//        if (a[i] == x) return true;
//    }
//    return false;
//}
//
//void print (vector<int> a)
//{
//    for (int i=0; i<a.size(); ++i)
//    {
//        cout << a[i] << " ";
//    }
//    cout << endl;
//}
//
//void permutation (int n, vector<int> a, int start)
//{
//    if (a.size() == n) print(a);
//    else {
//        for (int i=start; i<=n; ++i)
//        {
//            if (a.size()<n && (exist(a,i)==0))
//            {
//                a.push_back(i);
//                permutation(n,a,1);
//                a.pop_back();
//            }
//        }
//    }
//}
//
//int main ()
//{
//    int n;
//    cin >> n;
//    vector<int> a;
//    permutation(n,a,1);
//
//}


// tổ hợp chập k n phần tử
//#include <iostream>
//#include <ctime>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//void print (vector<int> a)
//{
//    for (int i=0; i<a.size(); ++i) cout << a[i] << " ";
//    cout << endl;
//}
//
//void combination ( int k, vector<int> a, vector<int> p, int start, int &count)
//{
//    if (p.size() == k)
//    {
//        print(p);
//        ++count;
//    }
//    else {
//        for (int i=start; i<a.size(); ++i)
//        {
//            if (p.size() < k)
//            {
//                p.push_back(a[i]);
//                combination(k,a,p,i+1,count);
//                p.pop_back();
//            }
//        }
//    }
//}
//
//int main ()
//{
//    srand(time(0));
//    int k,n;
//    cin >> n >> k;
//    vector<int> a;
//    for (int i=0; i<n; ++i)
//    {
//        int temp = 1+rand()%101;
//        a.push_back(temp);
//    }
//    print(a);
//    sort(a.begin(),a.end());
//    print(a);
//    vector<int> p;
//    int count = 0;
//    combination(k,a,p,0,count);
//    cout << "Ckn: " << count;
//}



// hoán vị mảng a
//#include <iostream>
//#include <vector>
//#include <ctime>
//#include <algorithm>
//using namespace std;
//
//void print (vector<int> a)
//{
//    for (int i=0; i<a.size(); ++i) cout << a[i] << " ";
//    cout << endl;
//}
//
//bool exist (vector<int> a, int x)
//{
//    for (int i=0; i<a.size(); ++i)
//    {
//        if (a[i] == x) return true;
//    }
//    return false;
//}
//
//void permutation (vector<int> a, vector<int> p, int start, int count)
//{
//    if (p.size() == a.size()) {
//        ++count;
//        print(p);
//    }
//    else {
//        for (int i=0; i<a.size(); ++i)
//        {
//            if (p.size() < a.size() && (exist(p,a[i])==0) )
//            {
//                p.push_back(a[i]);
//                permutation(a,p,0,count);
//                p.pop_back();
//            }
//        }
//    }
//}
//
//int main ()
//{
//    int n;
//    cin >> n;
//    vector<int> a;
//    for (int i=0; i<n; ++i)
//    {
//        int k = 1+rand()%101;
//        a.push_back(k);
//    }
//    print(a);
//    sort(a.begin(),a.end());
//    print(a);
//    vector<int> p;
//    int count = 0;
//    cout << "Hoan vi: "<< endl;
//    permutation(a,p,0,count);
//    cout << "Hoan vi: "<< count;
//}


// 4.Ma trận Hadamard
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//void print (char a[1000][1000], int N)
//{
//    for (int i=0; i<N; ++i)
//    {
//        for (int j=0; j<N; ++j)
//        {
//            cout << a[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//void draw_white (int row, int col, char a[1000][1000], int k)
//{
//    for(int i=row; i<row+k; ++i)
//    {
//        for (int j=col; j<col+k; ++j)
//        {
//            a[i][j] = 'o';
//        }
//    }
//}
//
//void draw_black (int row, int col, char a[1000][1000], int k)
//{
//    for(int i=row; i<row+k; ++i)
//    {
//        for (int j=col; j<col+k; ++j)
//        {
//            a[i][j] = '.';
//        }
//    }
//}
//
//void draw (int row, int col,char a[1000][1000], int k)
//{
//    if (a[row][col] == '.') {
//    draw_black(row,col,a,k);
//    draw_black(row,col+k,a,k);
//    draw_black(row+k,col,a,k);
//    draw_white(row+k,col+k,a,k);
//    }
//    else {
//    draw_white(row,col,a,k);
//    draw_white(row,col+k,a,k);
//    draw_white(row+k,col,a,k);
//    draw_black(row+k,col+k,a,k);
//    }
//}
//
//void Hadamard (char a[1000][1000], int N, int &start,int &stop,int n, int row, int col)
//{
//     draw(row,col,a,N/2);
//     if (start == n) return;
//     for (int i=row; i<N; i+=N/2)
//     {
//         for (int j=col; j<N; j+=N/2)
//         {
//            ++start;
//            if (start<n) Hadamard(a,N/2,start,stop,n,i,j);
//            --start;
//         }
//     }
//
//}
//
//
//int main ()
//{
//    int n;
//    cin >> n;
//    int N = pow(2,n);
//    char a[1000][1000];
//    a[0][0] = '.';
//    int start = 0;
//    int stop = 0;
//    int row = 0;
//    int col = 0;
//
//   Hadamard(a,N,start,stop,n,row,col);
//    cout << endl;
//
//
//   print(a,N);
//}

