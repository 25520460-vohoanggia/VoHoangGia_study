//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27

#include <iostream>
using namespace std;

class cSTN{
    private:
        int stn;
    public:
        void Nhap();
        void setVal( int );
        int getVal() const;
        bool operator < (const cSTN &p) const;
        bool Ktrale( );
        bool KtraSNT();
};