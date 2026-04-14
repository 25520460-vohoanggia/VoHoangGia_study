//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27
#include <bits/stdc++.h>
using namespace std;

class cString{
    private:
    vector<char> chuoi;
    public:
    cString ();
    void Nhap();
    void Xuat();
    int Length();
    cString Noi(cString);
    void Daochuoi();
    void Hoa();
    void Thuong();
    ~cString();
};