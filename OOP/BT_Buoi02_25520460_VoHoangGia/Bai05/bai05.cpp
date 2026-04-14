//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27
#include <bits/stdc++.h>
#include "cDate.h"
using namespace std;
typedef unsigned int ui;

int main(){
    cDate d1;
    d1.Nhap();
    cout<<"Ngay hom nay: "; d1.Xuat();
    cout<<"\nHom nay la thu: ";
    if (d1.week()==8) cout<<"Chu Nhat\n";
    else cout<<d1.week();
    int chon;
    int p;
    do{
        cout << "\n1. Tang ngay\n";
        cout << "2. Giam ngay\n";
        cout << "3. Tang thang\n";
        cout << "4. Giam thang\n";
        cout << "5. Tang nam\n";
        cout << "6. Giam nam\n";
        cout << "7. Thu trong tuan\n";
        cout << "0. Thoat\n";
        cout << "Chon: ";
        cin >> chon;

        switch(chon){
            case 1:
                cout << "Nhap so ngay muon tang: ";
                cin >> p;
                d1.TangNgay(p);
                d1.Xuat();
                break;
            case 2:
                cout << "Nhap so ngay muon giam: ";
                cin >> p;
                d1.GiamNgay(p);
                d1.Xuat();
                break;

            case 3:
                cout << "Nhap so thang muon tang: ";
                cin >> p;
                d1.TangThang(p);
                d1.Xuat();
                break;

            case 4:
                cout << "Nhap so thang muon giam: ";
                cin >> p;
                d1.GiamThang(p);
                d1.Xuat();
                break;

            case 5:
                cout << "Nhap so nam muon tang: ";
                cin >> p;
                d1.TangNam(p);
                d1.Xuat();
                break;

            case 6:
                cout << "Nhap so nam muon giam: ";
                cin >> p;
                d1.GiamNam(p);
                d1.Xuat();
                break;
            case 7:
                cout << "Thu: " ;
                if (d1.week()==8) cout<<"Chu Nhat\n";
                else cout<<d1.week();
                break;
        }

    }while(chon != 0);

    return 0;
}