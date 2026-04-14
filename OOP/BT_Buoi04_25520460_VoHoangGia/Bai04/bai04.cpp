//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27
#include "cDate.h"
using namespace std;
int main() {
    cDate d1, d2;
    int x;
    cout << "Nhap ngay hom nay: ";
    cin >> d1;
    do{
        cout<<"\n1.Tang 1 ngay.";
        cout<<"\n2.Giam 1 ngay.";
        cout<<"\n3.Tang n ngay.";
        cout<<"\n4.Giam 1 ngay.";
        cout<<"\n5.Ngay hien tai.";
        cout<<"\n0.Thoat.";
        cin>>x;
        switch(x){
            case 1: {
                ++d1;
                cout<<d1;
                break;
            }
            case 2: {
                --d1;
                cout<<d1;
                break;
            }
            case 3: {
                int p;
                cin>>p;
                d1 = d1 + p ;
                cout<<d1;
                break;
            }
            case 4: {
                int p;
                cin>>p;
                d1 = d1 - p;
                cout<<d1;
                break;
            }
            case 5:{
                cout<<"Ngay hien tai: "<<d1;
                break;
            }
        }
    }while (x!=0);
    cout << "\nNhap ngay du kien: ";
    cin >> d2;
    int soNgay = d2 - d1;
    cout<<"\nHai ngay cach nhau: "<<soNgay<<" ngay";
    return 0;
}