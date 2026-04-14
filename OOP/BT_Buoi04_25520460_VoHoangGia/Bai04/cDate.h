//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27
#include <bits/stdc++.h>
using namespace std;
typedef unsigned int ui;
class cDate{
    private:
    ui ngay, thang, nam;
    public:
    cDate();
    cDate (ui , ui , ui);
    void Nhap();
    void Xuat();
    void setY(ui);
    void setM(ui);
    void setD(ui);
    ui getY () ;
    ui getM () ;
    ui getD () ; 
    bool Ktra();
    int week();
    int NgayTrongThang();
    cDate operator+ (ui) const;
    cDate operator- (ui) const;
    cDate operator ++ () ;
    cDate operator -- () ;
    int ToDays() const;
    int operator-(const cDate& other) const ;
    friend istream& operator>>(istream& in, cDate& d);
    friend ostream& operator<<(ostream& out, const cDate& d); 
    ~cDate();
};