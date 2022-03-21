
// A
// 1.
//#include <iostream>
//
//using namespace std;
//
//// int a[];
//int a[] = {1,2,3,4};
//
//int main()
//{
//   //int b[];
//   int b[5] = {1,2,3,4};
//   //int c[3] = {1,2,3,4};
//   int d[] = {1,2,3,4};
//}

// 2.
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//int main()
//{
//   char a[4];
//   cin >> a;
//   cout << a;
//   string s = "abcd";
//   cout << s;
//
//}

// 3.
//#include <iostream>
//
//using namespace std;
//
//int main ()
//{
//  char daytab[2][12] = {
//  {31,28,31,30,31,30,31,31,30,31,30,31},
//  {31,29,31,30,31,30,31,31,30,31,30,31}
//   };
//  char daytab2[2][12] = {
//  31,28,31,30,31,30,31,31,30,31,30,31,
//  31,29,31,30,31,30,31,31,30,31,30,31
//  };
//  char daytab3[][12] = {
//  31,28,31,30,31,30,31,31,30,31,30,31,
//  };
//
//  for (int i=0; i<2; ++i)
//  {
//      for (int j=0; j<12; ++j)
//      {
//          cout << daytab[i][j] << " ";
//      }
//      cout << endl;
//  }
//
//  for (int i=0; i<2; ++i)
//  {
//      for (int j=0; j<12; ++j)
//      {
//          cout << daytab2[i][j] << " ";
//      }
//      cout << endl;
//  }
//
//  for (int i=0; i<2; ++i)
//  {
//      for (int j=0; j<12; ++j)
//      {
//          cout << daytab3[i][j] << " ";
//      }
//      cout << endl;
//  }
//
//}

// 5. bubble sort
//#include <iostream>
//#include <ctime>
//
//using namespace std;
//
//int main ()
//{
//    srand(time(0));
//    int a[30];
//    for (int i=0; i<30; ++i)
//    {
//        a[i] = 1+rand()%101;
//    }
//
//    for (int i=0; i<30; ++i)
//    {
//        cout << a[i] << " ";
//    }
//    cout << endl;
//
//    for (int i=28; i>=0; --i )
//    {
//        for (int j=0; j<=i; ++j)
//        {
//            if (a[j]>a[j+1]) swap(a[j],a[j+1]);
//        }
//    }
//
//    for (int i=0; i<30; ++i)
//    {
//        cout << a[i] << " ";
//    }
//}

// B Câu hỏi
//1 D
//2 B,D
//3 B
//4 A
//5 C
//6 C
//7 A
//8 D
//9 D
//10 A,D
//11 C
//12 D
//13 C
//14 C
//15 A
//16 C
//17 A
//18 C
//19 D
//20 C

// C Bài tập
// 1. Tìm lặp
//#include <iostream>
//
//using namespace std;
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
//    int t = 0;
//    for (int i=0; i<n; ++i)
//    {
//        int count = 0;
//        for (int j=0; j<n; ++j)
//        {
//            if (a[i] == a[j]) ++count;
//        }
//        if (count > 1){
//            t=1;
//            break;
//        }
//    }
//    if (t==1) cout << "yes";
//    else cout << "no";
//
//}

// 2. Xâu đối xứng
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main ()
//{
//    string s;
//    cin >> s;
//    int t = 1;
//    for (int i=0; i<s.length(); ++i)
//    {
//        if (s[i] != s[s.length()-i-1]){
//            t=0;
//            break;
//        }
//    }
//    if  (t==0) cout << "no";
//    else cout << "yes";
//}

// 3.số đối gương
//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//bool so_doi_guong (int n)
//{
//   string s = to_string(n);
//   int t = 1;
//   for (int i=0; i<s.length(); ++i)
//   {
//       if (s[i]!=s[s.length()-i-1]) {
//        t=0;
//        break;
//       }
//   }
//   if (t==0) return false;
//   else return true;
//}
//
//int main ()
//{
//    int n;
//    cin >> n;
//    int a[n][2];
//    for (int i=0; i<n; ++i)
//    {
//        for (int j=0; j<2; ++j)
//        {
//            cin >> a[i][j];
//        }
//    }
//
//    for (int i=0; i<n; ++i)
//    {
//        for (int j=a[i][0]; j<=a[i][1]; ++j)
//        {
//            if (so_doi_guong(j)) cout << j << " ";
//        }
//        cout << endl;
//    }
//}

// 4.dò mìn
//#include <iostream>
//
//using namespace std;
//int minesweeper (char a[100][100], int m, int n, int i, int j )
//{
//   int count = 0;
//   if (a[i][j-1] == '*') ++count;
//   if (a[i][j+1] == '*') ++count;
//   if (a[i+1][j] == '*') ++count;
//   if (a[i-1][j] == '*') ++count;
//   if (a[i+1][j+1] == '*') ++count;
//   if (a[i+1][j-1] == '*') ++count;
//   if (a[i-1][j+1] == '*') ++count;
//   if (a[i-1][j-1] == '*') ++count;
//   return count;
//}
//
//int main ()
//{
//    int m,n;
//    cin >> m >> n;
//    char a[100][100];
//    char b[100][100];
//    for (int i=0; i<m; ++i)
//    {
//        for (int j=0; j<n; ++j)
//        {
//            cin >> a[i][j];
//        }
//    }
//    cout << endl;
//    for (int i=0; i<m; ++i)
//    {
//        for (int j=0; j<n; ++j)
//        {
//            if (a[i][j] == '*') cout << '*' << " ";
//            else cout << minesweeper(a,m,n,i,j) << " ";
//        }
//        cout << endl;
//    }
//}

// 5. Bảng xoắn ốc
//#include <iostream>
//
//using namespace std;
//
//int main ()
//{
//    int x,y;
//    cin >> x >> y;
//    int n = x*y;
//    int a[n];
//    for (int i=0; i<n; ++i)
//    {
//        a[i] = i+1;
//    }
//
//    int b[100][100];
//    int first_row = 0;
//    int final_col = y-1;
//    int final_row = x-1;
//    int first_col = 0;
//    int i =0;
//    while (i<n)
//    {
//        for (int k=first_col; k<=final_col; ++k)
//        {
//           b[first_row][k] = a[i];
//           ++i;
//        }
//        ++first_row;
//        if (i>=n) break;
//        for (int k=first_row; k<=final_row; ++k)
//        {
//        b[k][final_col] = a[i];
//        ++i;
//        }
//        --final_col;
//         if (i>=n) break;
//       for(int k=final_col; k>=first_col; --k)
//       {
//          b[final_row][k] = a[i];
//          ++i;
//       }
//       --final_row;
//        if (i>=n) break;
//       for (int k=final_row; k>=first_row; --k )
//       {
//        b[k][first_col] = a[i];
//        ++i;
//       }
//       ++first_col;
//        if (i>=n) break;
//    }
//
//    for (int i=0; i<x; ++i)
//    {
//        for (int j=0; j<y; ++j)
//        {
//            cout << b[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//}


// 6. Ma trận kì ảo - siamethe method
//#include <iostream>
//
//using namespace std;
//
//int main ()
//{
//    int n;
//    cin >> n;
//    int a[n][n];
//    for (int i=0; i<n; ++i)
//    {
//        for (int j=0; j<n; ++j)
//        {
//            a[i][j] = 0;
//        }
//    }
//    int row_index = 0;
//    int col_index = (n-1)/2;
//    a[row_index][col_index] = 1;
//    int i = 2;
//    while (i<=n*n)
//    {
//        int temp_row = row_index;
//        int temp_col = col_index;
//        if (row_index == 0) row_index = n-1;
//        else row_index-=1;
//        if (col_index == n-1) col_index = 0;
//        else col_index +=1;
//
//        if (a[row_index][col_index]==0) a[row_index][col_index] = i;
//        else {
//            row_index = temp_row;
//            col_index = temp_col;
//            if (row_index == n-1) row_index = 0;
//            else row_index+=1;
//
//            a[row_index][col_index] = i;
//        }
//
//        ++i;
//    }
//
//    for (int i=0; i<n; ++i)
//    {
//        for (int j=0; j<n; ++j)
//        {
//            cout << a[i][j] << "  ";
//        }
//        cout << endl;
//    }
//
//}




// 7. Banner
//#include <iostream>
//
//using namespace std;
//
//void banner (char a, int i, char banner_char[][1000])
//{
//  switch (a)
//  {
//    case 'A':
//    {
//      banner_char[0][i+2] = '#';
//      banner_char[0][i+3] = '#';
//      banner_char[1][i+1] = '#';
//      banner_char[1][i+4] = '#';
//      banner_char[2][i+1] = '#';
//      banner_char[2][i+4] = '#';
//      banner_char[3][i+1] = '#';
//      banner_char[3][i+4] = '#';
//      banner_char[4][i+1] = '#';
//      banner_char[4][i+4] = '#';
//      banner_char[5][i+1] = '#';
//      banner_char[5][i+4] = '#';
//      banner_char[3][i+2] = '#';
//      banner_char[3][i+3] = '#';
//      break;
//    }
//    case 'B':
//    {
//      banner_char[0][i+1] = '#';
//      banner_char[1][i+1] = '#';
//      banner_char[2][i+1] = '#';
//      banner_char[3][i+1] = '#';
//      banner_char[4][i+1] = '#';
//      banner_char[5][i+1] = '#';
//      banner_char[0][i+2] = '#';
//      banner_char[2][i+2] = '#';
//      banner_char[3][i+2] = '#';
//      banner_char[5][i+2] = '#';
//      banner_char[0][i+3] = '#';
//      banner_char[1][i+3] = '#';
//      banner_char[2][i+3] = '#';
//      banner_char[3][i+3] = '#';
//      banner_char[5][i+3] = '#';
//      banner_char[3][i+4] = '#';
//      banner_char[4][i+4] = '#';
//      banner_char[5][i+4] = '#';
//      break;
//    }
//    case 'C':
//    {
//      banner_char[0][i+1] = '#';
//      banner_char[1][i+1] = '#';
//      banner_char[2][i+1] = '#';
//      banner_char[3][i+1] = '#';
//      banner_char[4][i+1] = '#';
//      banner_char[5][i+1] = '#';
//      banner_char[0][i+2] = '#';
//      banner_char[5][i+2] = '#';
//      banner_char[0][i+3] = '#';
//      banner_char[5][i+3] = '#';
//      break;
//    }
//    case 'D':
//    {
//     banner_char[0][i+1] = '#';
//      banner_char[1][i+1] = '#';
//      banner_char[2][i+1] = '#';
//      banner_char[3][i+1] = '#';
//      banner_char[4][i+1] = '#';
//      banner_char[5][i+1] = '#';
//      banner_char[0][i+2] = '#';
//      banner_char[5][i+2] = '#';
//      banner_char[1][i+3] = '#';
//      banner_char[2][i+3] = '#';
//      banner_char[3][i+3] = '#';
//      banner_char[4][i+3] = '#';
//      break;
//    }
//    case 'E':
//     { banner_char[0][i+1] = '#';
//      banner_char[1][i+1] = '#';
//      banner_char[2][i+1] = '#';
//      banner_char[3][i+1] = '#';
//      banner_char[4][i+1] = '#';
//      banner_char[5][i+1] = '#';
//      banner_char[0][i+2] = '#';
//      banner_char[2][i+2] = '#';
//      banner_char[5][i+2] = '#';
//      banner_char[0][i+3] = '#';
//      banner_char[2][i+3] = '#';
//      banner_char[5][i+3] = '#';
//      break;
//     }
//    case 'F':
//    {
//      banner_char[0][i+1] = '#';
//      banner_char[1][i+1] = '#';
//      banner_char[2][i+1] = '#';
//      banner_char[3][i+1] = '#';
//      banner_char[4][i+1] = '#';
//      banner_char[5][i+1] = '#';
//      banner_char[0][i+2] = '#';
//      banner_char[2][i+2] = '#';
//      banner_char[0][i+3] = '#';
//      banner_char[2][i+3] = '#';
//      break;
//    }
//    case 'G':
//     {
//      banner_char[0][i+1] = '#';
//      banner_char[1][i+1] = '#';
//      banner_char[2][i+1] = '#';
//      banner_char[3][i+1] = '#';
//      banner_char[4][i+1] = '#';
//      banner_char[5][i+1] = '#';
//      banner_char[0][i+2] = '#';
//      banner_char[5][i+2] = '#';
//      banner_char[0][i+3] = '#';
//      banner_char[3][i+3] = '#';
//      banner_char[5][i+3] = '#';
//      banner_char[0][i+4] = '#';
//      banner_char[3][i+4] = '#';
//      banner_char[4][i+4] = '#';
//      banner_char[5][i+4] = '#';
//      break;
//     }
//    case 'H':
//      {
//      banner_char[0][i+1] = '#';
//      banner_char[1][i+1] = '#';
//      banner_char[2][i+1] = '#';
//      banner_char[3][i+1] = '#';
//      banner_char[4][i+1] = '#';
//      banner_char[5][i+1] = '#';
//      banner_char[0][i+3] = '#';
//      banner_char[1][i+3] = '#';
//      banner_char[2][i+3] = '#';
//      banner_char[3][i+3] = '#';
//      banner_char[4][i+3] = '#';
//      banner_char[5][i+3] = '#';
//      banner_char[2][i+2] = '#';
//      banner_char[3][i+2] = '#';
//      break;
//      }
//    case 'I':
//      {
//      banner_char[0][i+2] = '#';
//      banner_char[1][i+2] = '#';
//      banner_char[2][i+2] = '#';
//      banner_char[3][i+2] = '#';
//      banner_char[4][i+2] = '#';
//      banner_char[5][i+2] = '#';
//      break;
//      }
//    case 'J':
//    {
//      banner_char[0][i+2] = '#';
//      banner_char[1][i+2] = '#';
//      banner_char[2][i+2] = '#';
//      banner_char[3][i+2] = '#';
//      banner_char[4][i+2] = '#';
//      banner_char[5][i+2] = '#';
//      banner_char[5][i+1] = '#';
//      break;
//    }
//    case 'K':
//    {
//      banner_char[0][i+1] = '#';
//      banner_char[1][i+1] = '#';
//      banner_char[2][i+1] = '#';
//      banner_char[3][i+1] = '#';
//      banner_char[4][i+1] = '#';
//      banner_char[5][i+1] = '#';
//      banner_char[1][i+2] = '#';
//      banner_char[2][i+2] = '#';
//      banner_char[3][i+2] = '#';
//      banner_char[0][i+3] = '#';
//      banner_char[4][i+3] = '#';
//      banner_char[5][i+3] = '#';
//      break;
//    }
//    case 'L':
//     {
//      banner_char[0][i+1] = '#';
//      banner_char[1][i+1] = '#';
//      banner_char[2][i+1] = '#';
//      banner_char[3][i+1] = '#';
//      banner_char[4][i+1] = '#';
//      banner_char[5][i+1] = '#';
//      banner_char[5][i+2] = '#';
//      banner_char[5][i+3] = '#';
//      break;
//     }
//    case 'M':
//     {
//      banner_char[0][i+0] = '#';
//      banner_char[1][i+0] = '#';
//      banner_char[2][i+0] = '#';
//      banner_char[3][i+0] = '#';
//      banner_char[4][i+0] = '#';
//      banner_char[5][i+0] = '#';
//      banner_char[0][i+1] = '#';
//      banner_char[1][i+1] = '#';
//      banner_char[1][i+2] = '#';
//      banner_char[2][i+2] = '#';
//      banner_char[1][i+3] = '#';
//      banner_char[2][i+3] = '#';
//      banner_char[0][i+4] = '#';
//      banner_char[1][i+4] = '#';
//       banner_char[0][i+5] = '#';
//      banner_char[1][i+5] = '#';
//      banner_char[2][i+5] = '#';
//      banner_char[3][i+5] = '#';
//      banner_char[4][i+5] = '#';
//      banner_char[5][i+5] = '#';
//      break;
//     }
//    case 'N':
//      {
//       banner_char[0][i+0] = '#';
//      banner_char[1][i+0] = '#';
//      banner_char[2][i+0] = '#';
//      banner_char[3][i+0] = '#';
//      banner_char[4][i+0] = '#';
//      banner_char[5][i+0] = '#';
//      banner_char[2][i+1] = '#';
//      banner_char[1][i+1] = '#';
//      banner_char[3][i+2] = '#';
//      banner_char[2][i+2] = '#';
//      banner_char[3][i+3] = '#';
//      banner_char[4][i+3] = '#';
//       banner_char[0][i+4] = '#';
//      banner_char[1][i+4] = '#';
//      banner_char[2][i+4] = '#';
//      banner_char[3][i+4] = '#';
//      banner_char[4][i+4] = '#';
//      banner_char[5][i+4] = '#';
//      break;
//      }
//    case 'O':
//      {
//      banner_char[3][i+1] = '#';
//      banner_char[4][i+1] = '#';
//      banner_char[2][i+1] = '#';
//      banner_char[1][i+1] = '#';
//      banner_char[0][i+2] = '#';
//      banner_char[5][i+2] = '#';
//      banner_char[0][i+3] = '#';
//      banner_char[5][i+3] = '#';
//      banner_char[1][i+4] = '#';
//      banner_char[2][i+4] = '#';
//      banner_char[3][i+4] = '#';
//      banner_char[4][i+4] = '#';
//      break;
//      }
//    case 'P':
//     {
//       banner_char[0][i+1] = '#';
//      banner_char[1][i+1] = '#';
//      banner_char[2][i+1] = '#';
//      banner_char[3][i+1] = '#';
//      banner_char[4][i+1] = '#';
//      banner_char[5][i+1] = '#';
//      banner_char[0][i+2] = '#';
//      banner_char[2][i+2] = '#';
//      banner_char[0][i+3] = '#';
//      banner_char[1][i+3] = '#';
//      banner_char[2][i+3] = '#';
//      break;
//     }
//    case 'Q':
//      {
//       banner_char[3][i+1] = '#';
//      banner_char[4][i+1] = '#';
//      banner_char[2][i+1] = '#';
//      banner_char[1][i+1] = '#';
//      banner_char[0][i+2] = '#';
//      banner_char[5][i+2] = '#';
//      banner_char[0][i+3] = '#';
//      banner_char[5][i+3] = '#';
//      banner_char[1][i+4] = '#';
//      banner_char[2][i+4] = '#';
//      banner_char[3][i+4] = '#';
//      banner_char[4][i+4] = '#';
//      banner_char[5][i+5] = '#';
//      banner_char[3][i+3] = '#';
//      break;
//      }
//    case 'R':
//     {
//      banner_char[0][i+1] = '#';
//      banner_char[1][i+1] = '#';
//      banner_char[2][i+1] = '#';
//      banner_char[3][i+1] = '#';
//      banner_char[4][i+1] = '#';
//      banner_char[5][i+1] = '#';
//      banner_char[0][i+2] = '#';
//      banner_char[2][i+2] = '#';
//      banner_char[3][i+2] = '#';
//      banner_char[0][i+3] = '#';
//      banner_char[1][i+3] = '#';
//      banner_char[2][i+3] = '#';
//      banner_char[4][i+3] = '#';
//      banner_char[5][i+3] = '#';
//      break;
//     }
//    case 'S':
//     {
//      banner_char[0][i+1] = '#';
//      banner_char[1][i+1] = '#';
//      banner_char[2][i+1] = '#';
//      banner_char[5][i+1] = '#';
//      banner_char[0][i+2] = '#';
//      banner_char[5][i+2] = '#';
//      banner_char[3][i+2] = '#';
//      banner_char[1][i+3] = '#';
//      banner_char[0][i+3] = '#';
//      banner_char[4][i+3] = '#';
//      banner_char[5][i+3] = '#';
//      break;
//     }
//    case 'T':
//     {
//      banner_char[0][i+1] = '#';
//      banner_char[0][i+2] = '#';
//      banner_char[1][i+2] = '#';
//      banner_char[2][i+2] = '#';
//      banner_char[3][i+2] = '#';
//      banner_char[4][i+2] = '#';
//      banner_char[5][i+2] = '#';
//      banner_char[0][i+3] = '#';
//      break;
//     }
//    case 'U':
//      {
//      banner_char[0][i+1] = '#';
//      banner_char[1][i+1] = '#';
//      banner_char[2][i+1] = '#';
//      banner_char[3][i+1] = '#';
//      banner_char[4][i+1] = '#';
//      banner_char[5][i+1] = '#';
//       banner_char[0][i+3] = '#';
//      banner_char[1][i+3] = '#';
//      banner_char[2][i+3] = '#';
//      banner_char[3][i+3] = '#';
//      banner_char[4][i+3] = '#';
//      banner_char[5][i+3] = '#';
//       banner_char[5][i+2] = '#';
//       break;
//      }
//    case 'V':
//      {
//      banner_char[0][i+1] = '#';
//      banner_char[1][i+1] = '#';
//      banner_char[2][i+1] = '#';
//      banner_char[3][i+1] = '#';
//      banner_char[4][i+1] = '#';
//      banner_char[5][i+2] = '#';
//      banner_char[0][i+3] = '#';
//      banner_char[1][i+3] = '#';
//      banner_char[2][i+3] = '#';
//      banner_char[3][i+3] = '#';
//      banner_char[4][i+3] = '#';
//      break;
//      }
//    case 'W':
//      {
//       banner_char[0][i+0] = '#';
//      banner_char[1][i+0] = '#';
//      banner_char[2][i+0] = '#';
//      banner_char[3][i+0] = '#';
//      banner_char[4][i+0] = '#';
//      banner_char[5][i+1] = '#';
//      banner_char[3][i+3] = '#';
//      banner_char[3][i+2] = '#';
//      banner_char[4][i+3] = '#';
//      banner_char[4][i+2] = '#';
//      banner_char[5][i+4] = '#';
//      banner_char[0][i+5] = '#';
//      banner_char[1][i+5] = '#';
//      banner_char[2][i+5] = '#';
//      banner_char[3][i+5] = '#';
//      banner_char[4][i+5] = '#';
//      break;
//      }
//    case 'X':
//     {
//      banner_char[0][i+1] = '#';
//      banner_char[1][i+1] = '#';
//      banner_char[4][i+1] = '#';
//      banner_char[5][i+1] = '#';
//      banner_char[2][i+2] = '#';
//      banner_char[3][i+2] = '#';
//      banner_char[2][i+3] = '#';
//      banner_char[3][i+3] = '#';
//      banner_char[0][i+4] = '#';
//      banner_char[1][i+4] = '#';
//      banner_char[4][i+4] = '#';
//      banner_char[5][i+4] = '#';
//      break;
//     }
//    case 'Y':
//      {
//      banner_char[0][i+1] = '#';
//      banner_char[1][i+1] = '#';
//      banner_char[4][i+2] = '#';
//      banner_char[5][i+2] = '#';
//      banner_char[2][i+1] = '#';
//      banner_char[3][i+2] = '#';
//      banner_char[2][i+4] = '#';
//      banner_char[3][i+3] = '#';
//      banner_char[0][i+4] = '#';
//      banner_char[1][i+4] = '#';
//      banner_char[4][i+3] = '#';
//      banner_char[5][i+3] = '#';
//      break;
//      }
//    case 'Z':
//     {
//      banner_char[0][i+0] = '#';
//      banner_char[4][i+0] = '#';
//      banner_char[5][i+0] = '#';
//      banner_char[0][i+1] = '#';
//      banner_char[3][i+1] = '#';
//      banner_char[5][i+1] = '#';
//      banner_char[0][i+3] = '#';
//      banner_char[0][i+4] = '#';
//      banner_char[1][i+4] = '#';
//      banner_char[2][i+3] = '#';
//      banner_char[3][i+2] = '#';
//      banner_char[5][i+2] = '#';
//      banner_char[5][i+3] = '#';
//      banner_char[5][i+4] = '#';
//      break;
//    }
//  }
//}
//
//int main ()
//{
//    string s;
//    cin >> s;
//    char banner_char[6][1000];
//    int n = s.length()*6+s.length()-1;
//    cout << n << endl;
//    for (int i=0; i<6; ++i)
//    {
//        for (int j=0; j<n; ++j)
//        {
//          banner_char[i][j] = ' ';
//        }
//    }
//    int index = 0;
//    for (int i=0; i<s.length(); ++i)
//    {
//        banner(s[i],index,banner_char);
//        index+=7;
//    }
//    for (int i=0; i<6; ++i)
//    {
//        for (int j=0; j<n; ++j)
//        {
//            cout << banner_char[i][j];
//        }
//        cout << endl;
//    }
//
//}


// 8. Lịch khám bệnh
//#include <iostream>
//#include <algorithm>
//using namespace std;
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
//    sort(a,a+n);
//    int sum = 0;
//    int k =n-1;
//    for (int i=0; i<n-1; ++i)
//    {
//        sum+=a[i]*k;
//        --k;
//    }
//    cout << sum;
//}

// 1.
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main ()
//{
//    int n;
//    cin >> n;
//    int a[n];
//    double sum = 0;
//    for (int i=0; i<n; ++i)
//    {
//        cin >> a[i];
//        sum+=a[i];
//    }
//    double tbc=sum/n;
//    double tong =0;
//    for (int i=0; i<n; ++i)
//    {
//        tong+=pow((a[i]-tbc),2);
//    }
//    double res= (1/(double)(n))*tong;
//    cout << tbc << " " << res;
//}

//2.
//#include <iostream>
//
//using namespace std;
//
//int main ()
//{
//    int n;
//    cin >> n;
//    int a[n];
//    for(int i=0; i<n; ++i)
//    {
//        cin >> a[i];
//    }
//    int min = a[0];
//    int max = a[0];
//    int sum = 0;
//    int odd_count =0;
//    for (int i=0; i<n; ++i)
//    {
//        if (a[i]>max) max = a[i];
//        if (a[i]<min) min = a[i];
//        if (a[i]%2==0) sum+=a[i];
//        if (a[i]%2==1) ++odd_count;
//    }
//    cout << max << " " << min << " " << sum << " " << odd_count;
//}

//3.
//#include <iostream>
//
//using namespace std;
//
//int dem (int a[], int n, int k)
//{
//    int count = 0;
//    for (int i=0; i<n; ++i)
//    {
//        if (a[i] == k) ++count;
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
//        cin >> a[i];
//    }
//     for (int i=0; i<=9; ++i)
//    {
//        cout << dem(a,n,i) << " ";
//    }
//}

// 4. Pascal
//#include <iostream>
//
//using namespace std;
//
//int C (int k, int n)
//{
//    if (k==0 || k==n ) return 1;
//    else if (k==1) return n;
//    else return C(k-1,n-1) + C(k,n-1);
//}
//
//int main ()
//{
//    int n;
//    cin >> n;
//    for (int i=0; i<=n; ++i)
//    {
//        for (int j=0; j<=i; ++j)
//        {
//            cout << C(j,i) << " ";
//        }
//        cout << endl;
//    }
//}

// 5.
//#include <iostream>
//#include <vector>
//using namespace std;
//
//void sort_subject (double a[], int n, int index[] )
//{
//    for (int i=0; i<n-1; ++i)
//    {
//        int max = i;
//        for (int j=i+1; j<n; ++j)
//        {
//            if (a[j]>a[max]) max = j;
//        }
//        swap (index[max],index[i]);
//    }
//}
//
//int main ()
//{
//    int n;
//    cin >> n;
//    double a,b,c;
//    double mat[n];
//    double phy[n];
//    double eng[n];
//    for (int i=0; i<n; ++i)
//    {
//        cin >> mat[i] >> phy[i] >> eng[i];
//    }
//
//    int index_mat[n];
//    int index_phy[n];
//    int index_eng[n];
//    for (int i=0; i<n; ++i)
//    {
//        index_mat[i] = i;
//        index_phy[i] = i;
//        index_eng[i] = i;
//    }
//
//    sort_subject (mat,n,index_mat);
//    sort_subject (phy,n,index_phy);
//    sort_subject (eng,n,index_eng);
//    cout << "Sort according to Math: " << endl;
//    for (int i=0; i<n; ++i)
//    {
//        cout << mat[index_mat[i]] << " " << phy[index_mat[i]] << " " << eng[index_mat[i]] << endl;
//    }
//    cout << "Sort according to Physics: " << endl;
//    for (int i=0; i<n; ++i)
//    {
//        cout << mat[index_phy[i]] << " " << phy[index_phy[i]] << " " << eng[index_phy[i]] << endl;
//    }
//    cout << "Sort according to English: " << endl;
//    for (int i=0; i<n; ++i)
//    {
//        cout << mat[index_eng[i]] << " " << phy[index_eng[i]] << "  " << eng[index_eng[i]] << endl;
//    }
//
//}










