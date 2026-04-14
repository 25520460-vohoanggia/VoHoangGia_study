//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27

#include <iostream>
using namespace std;

class cDonthuc{
    private:
    int heso;
    int mu;
    public:
    cDonthuc();
    cDonthuc(int ,int);
    cDonthuc operator + (cDonthuc ) const;
    cDonthuc operator - (cDonthuc ) const;
    int getHe() const;
    int getmu() const;
    void setHe(int );
    void setMu (int );
    void Nhap();
    void Xuat();
};