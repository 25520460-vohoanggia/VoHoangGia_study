//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27
#include <bits/stdc++.h>
using namespace std;
class cPhanso{
    private:
        int iTuso;
        int iMauso;
    public:
        cPhanso();
        cPhanso(int );
        cPhanso(int , int );
        void Nhap();
        void Xuat();
        int getTu();
        int getMau();
        int uc(int , int );
        cPhanso rutgon (cPhanso);
        cPhanso Cong(cPhanso);
        cPhanso Tru(cPhanso);
        cPhanso Nhan(cPhanso);
        cPhanso Chia(cPhanso);
        ~cPhanso();
};