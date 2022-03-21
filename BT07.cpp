// A
// 2. Mảng truyền vào hàm dạng con trỏ
//#include <iostream>
//
//using namespace std;
//
//int get_element (int *a, int i)
//{
//    return a[i];
//
//}
//
//int main ()
//{
//    int a[10] = {2,3,4,7,1,5,2,6,3,7};
//    int i;
//    cin >> i;
//    cout << get_element(a,i);
//
//}


// 3.Truy nhập mảng
//#include <iostream>
//
//using namespace std;
//
//int count_even(int *a, int n)
//{
//    int count = 0;
//    for (int i=0; i<n; ++i)
//    {
//        if (a[i]%2==0) ++count;
//    }
//    return count;
//}
//
//int main ()
//{
//    int a[10] = {2,3,4,7,1,5,2,6,3,7};
//    cout << count_even(a,10);
//}


// 4.Tìm kiếm nhị phân
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//bool binary_search_x (int *a, int n, int x)
//{
//    int left = 0;
//    int right = n-1;
//    while (left<right)
//    {
//        int mid = (left+right)/2;
//        if (a[mid] == x) return true;
//        else if (a[mid] > x) right = mid-1;
//        else if (a[mid] < x) left = mid+1;
//    }
//    return false;
//}
//
//int main ()
//{
//    int n;
//    cin >> n;
//    int a[n];
//    for (int i=0; i<n; ++i)
//    {
//        cin >> a[i];
//    }
//    int x;
//    cin >> x;
//    sort(a,a+n);
//    cout << binary_search_x(a,n,x);
//}


// 5.Dangling references
//#include <iostream>
//
//using namespace std;
//
//char* weird_string() {
//   char c[] = "123345";
//   return c;
//}
//
//int main ()
//{
//    cout << weird_string();
//}

// 6. Tham số dòng lệnh
//#include <iostream>
//
//using namespace std;
//
//int main(int argc, const char * argv[]) {
//	cout << "Number of command-line arguments: " << argc << endl;
//	for (int i = 0; i < argc; i++) {
//		cout << "Argument #" << i << ": _" << argv[i] << "_\n";
//	}
//	return 0;
//}

// 7
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main ()
//{
//    char a [10];
//    char b [10];
//    cin >> a >> b;
// //   cout << a << endl << b;
//    cout << strcmp(a,b);
//
//}


// B
// 1.
// B 0x5678
// A 0x1234
// 2. *p = 5;
// 3. Sai kiểu dữ liệu

// C
// 1
//#include <iostream>
//#include <ctime>
//
//using namespace std;
//
//int xucxac ()
//{
//    return 1+rand()%6;
//}
//
//int main ()
//{
//    srand(time(0));
//    int sum1 = 0;
//    int sum2 = 0;
//    while (sum1 < 100 || sum2 <100)
//    {
//        int temp1,temp2;
//        temp1 = xucxac();
//        temp2 = xucxac();
//        cout << "xuc xac nguoi choi 1: " << temp1 << "     ";
//        sum1+=temp1;
//        cout << "Tong nguoi 1: " << sum1 << endl;
//        cout << "xuc xac nguoi choi 2: " << temp2 << "     ";
//        sum2+=temp2;
//        cout << "Tong nguoi 2: " << sum2 << endl;
//
//        if (sum1 >= 100) {
//            cout << "nguoi 1 win!";
//            break;
//        }
//        if (sum2 >= 100) {
//            cout << "nguoi 2 win!";
//            break;
//        }
//    }
//}


// 2. Rùa và thỏ
//#include <iostream>
//#include <ctime>
//using namespace std;
//
//int main ()
//{
//    srand(time(0));
//    int rua [10] = {-6,-6,1,1,1,3,3,3,3,3};
//    int tho [10] = {-2,-2,1,1,1,-12,9,9,0,0};
//
//    int pos_rua = 0;
//    int pos_tho = 0;
//
//    while (pos_rua<70 || pos_tho<70)
//    {
//        int temp1 = rand()%10;
//        int temp2 = rand()%10;
//
//        cout << "Vi tri rua: " << pos_rua << "      " << "Vi tri tho: " << pos_tho << endl;
//
//        if (pos_rua+rua[temp1] < 0) pos_rua=0;
//        else pos_rua+=rua[temp1];
//        if (pos_tho+tho[temp2] < 0) pos_tho=0;
//        else pos_tho+=tho[temp2];
//
//        if (pos_rua >= 70) {
//            cout << "Rua win";
//            break;
//        }
//        if (pos_tho >= 70) {
//            cout << "Tho win";
//            break;
//        }
//    }
//}



// D
//1 *p = n;
//2 p1 = p2;
//3 phép cộng trừ trên con trỏ kiểu int
//4 Tất cả các phép toán với các con trỏ ở cùng mảng (trong giới hạn mảng)
//5 Tất cả các phát biểu trên
//6 void bubble(int [], const int, bool (*) (int, int));
//7 2 2 3


