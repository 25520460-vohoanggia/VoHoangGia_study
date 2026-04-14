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
lich ngayke (lich ps){
    bool nhuan;
    nhuan = (ps.nam % 4 == 0 && ps.nam % 100 != 0) || (ps.nam % 400 == 0);
    lich ngaymai = ps  ;
    switch(ps.thang){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            if (ps.ngay == 31) {
                ngaymai.ngay = 1;
                if (ps.thang== 12 ) {
                    ngaymai.thang = 1;
                    ngaymai.nam=ps.nam+1;
                    }
                else {
                    ngaymai.thang = ps.thang+1;
                }
            }
            else {
                ngaymai.ngay=ps.ngay+1;
            }
            break;
        case 4: case 6: case 9: case 11:
            if (ps.ngay == 30) {
                ngaymai.ngay = 1;
                ngaymai.thang = ps.thang+1;
            }
            else {
                ngaymai.ngay=ps.ngay+1;
            }
            break;
        case 2:
                if(nhuan) {
                    if (ps.ngay == 29) {
                        ngaymai.ngay=1;
                        ngaymai.thang=ps.thang+1;
                    }
                    else ngaymai.ngay=ps.ngay+1;
                }
                else {
                    if (ps.ngay == 28) {
                        ngaymai.ngay=1;
                        ngaymai.thang=ps.thang+1;
                    }
                    else ngaymai.ngay=ps.ngay+1;
                }
                break;
    }
    return ngaymai;
}
void Xuat (lich p){
    cout<<"Ngay mai la :";
    cout<<p.ngay<<"/"<<p.thang<<"/"<<p.nam;
}
int main(){
    lich homnay;
    Nhap (homnay);
    Xuat (ngayke(homnay));
}