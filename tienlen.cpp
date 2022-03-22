#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// 0-8-12
// 13-21-25
// 26-32-38
// 39-47-51

// 0-3 0
// 4-7 1
// 8-11 2
// 12 3
// 16 4

// 48-51
string inQuanBai (int khoa)
{
    string res = "";
    int du = khoa%13;
    if ( du<=8 ) {
        res+=to_string(du+2);
    }
    else {
        if (du==9) res+='J';
        else if (du==10) res+='Q';
        else if (du==11) res+='K';
        else res+='A';
    }
    if (khoa>=0 && khoa<=12) res+=6;
    else if (khoa>=13 && khoa<=25) res+=5;
    else if (khoa>=26 && khoa<=38) res+=4;
    else res+=3;

    return res;
}

//bool uuTienHon (int khoa1, int khoa2)
//{
//    string k1 = inQuanBai(khoa1);
//    string k2 = inQuanBai(khoa2);
//    string kt1_1;
//    string kt2_1;
//    string kt1_2;
//    string kt2_2;
//    if (k1[0]== '1') kt1_1 = '10';
//    else
//
//    char kt[] = {'2','3','4','5','6','7','8','9','10','J','Q','K','A'}
//    if (stoi(k1[0]) > stoi(k2[0])) return true;
//    else if (stoi(k1[0]) < stoi(k2[0])) return false;
//    else {
//        if (k1[1] > k2[1]) r
//    }
//}

void suffle (int *boBai)
{
}

int main ()
{
    srand(time(0));
    int khoa;
    cin >> khoa;

   // cout << inQuanBai(khoa);

   int boBai[52];
   for (int i=0; i<52; ++i) boBai[i] = i;
    string deck [52];
    for (int i=0; i<52; ++i)
    {
        deck[i] = inQuanBai(i);
    }


    for (int i=0; i<52; ++i)
    {
        cout << deck[i] << " ";
    }


//  cin >> s;
//  cout << stoi(s);
//}
}
