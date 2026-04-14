//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27
#include <bits/stdc++.h>
#include "cTime.h"
using namespace std;
typedef unsigned int ui;

int main(){
    cTime time;
    int chon;
    ui p;

    cout << "Nhap thoi gian (h m s): ";
    time.Nhap();

    do{
        cout << "1. Tang giay\n";
        cout << "2. Giam giay\n";
        cout << "3. Tang phut\n";
        cout << "4. Giam phut\n";
        cout << "5. Tang gio\n";
        cout << "6. Giam gio\n";
        cout << "7. Xuat thoi gian\n";
        cout << "0. Thoat\n";
        cout << "Chon: ";
        cin >> chon;
        switch(chon){
            case 1:
                cout << "Nhap so giay tang: ";
                cin >> p;
                time.TangS(p);
                time.Xuat();
                break;
            case 2:
                cout << "Nhap so giay giam: ";
                cin >> p;
                time.GiamS(p);
                time.Xuat();
                break;
            case 3:
                cout << "Nhap so phut tang: ";
                cin >> p;
                time.TangM(p);
                time.Xuat();
                break;
            case 4:
                cout << "Nhap so phut giam: ";
                cin >> p;
                time.GiamM(p);
                time.Xuat();
                break;
            case 5:
                cout << "Nhap so gio tang: ";
                cin >> p;
                time.TangH(p);
                time.Xuat();
                break;
            case 6:
                cout << "Nhap so gio giam: ";
                cin >> p;
                time.GiamH(p);
                time.Xuat();
                break;
            case 7:
                cout << "Thoi gian hien tai: ";
                time.Xuat();
                break;
        }
    }while(chon != 0);
    return 0;
}