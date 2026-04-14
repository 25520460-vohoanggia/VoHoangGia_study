//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27
#include <bits/stdc++.h>
using namespace std;

struct lich {
    int ngay, thang, nam;
};
void Nhap(lich &ps){
    int maxday;
    bool nhuan;
    do{
        cout<< "Nhap ngay thang nam ";
        cin >> ps.ngay >> ps.thang >> ps.nam;
        nhuan = (ps.nam % 4 == 0 && ps.nam % 100 != 0) || (ps.nam % 400 == 0);
        switch(ps.thang){
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                maxday = 31;
                break;
            case 4: case 6: case 9: case 11:
                maxday = 30;
                break;
            case 2:
                if(nhuan) maxday = 29;
                else maxday = 28;
                break;
            default:
                maxday = 0;
        }
    }while(ps.thang < 1 || ps.thang > 12 || ps.ngay < 1 || ps.ngay > maxday);
}

int thu (lich ps){
    if (ps.thang==1 || ps.thang==2 )
    { 
        ps.thang+=12; ps.nam--;
    } 
    int h = (ps.ngay + (13*(ps.thang+1))/5 + ps.nam + ps.nam/4 - ps.nam/100 + ps.nam/400) % 7;
    switch(h) { 
        case 0: return 7; 
        case 1: return 8; 
        case 2: return 2; 
        case 3: return 3; 
        case 4: return 4; 
        case 5: return 5; 
        case 6: return 6; 
    } return 0; 
}


void Xuat (int n){
    if (n==8) cout<<"Chu nhat";
    else cout<< "Thu "<<n;
}
int main(){
    lich homnay;
    Nhap (homnay);
    Xuat (thu(homnay));
}