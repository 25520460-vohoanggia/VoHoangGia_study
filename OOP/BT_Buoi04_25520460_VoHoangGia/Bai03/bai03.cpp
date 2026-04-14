//MSSV:25520460
//Họ và Tên: Võ Hoàng Gia
//Ngày sinh:03/02/2007
//Lớp:IT002.Q27
#include "cTime.h"
using namespace std;

int main(){
    cTime date;
    int x;
    cout<<"Chon 1 de nhap thoi gian kieu 00:00:00";
    cout<<"\nChon 2 de nhap thoi gian doi theo giay"<<endl;
    cin>> x ;
    if (  x== 1 ) {
        cout<<"Nhap thoi gian: ";
        int h ,m ,s ;
        do{
            cin>>h>>m>>s;
        }while ( h>=0 && h<=23 && m>=0 && m<60 && s>=0 && s<60);
        date = h*3600+ m*60 +s;
    } 
    else if (x ==2){
        cout<<"Nhap thoi gian: ";
        cin>>date;
    }
    do{
        cout<<"\n1.Tang 1 giay.";
        cout<<"\n2.Giam 1 giay";
        cout<<"\n3.Tang n giay";
        cout<<"\n4.Giam n giay";
        cout<<"\n5.Thoi gian hien tai";
        cout<<"\n0.Thoat"<<endl;
        cin>>x ;
        switch (x){
            case 0 : break;
            case 1:  date = ++date  ; break;
            case 2: date =  --date  ; break;
            case 3: {
                int n;
                cout<<"So giay can tang: ";
                cin>>n;
                date = date + n;
                break;}
            case 4: {
                int n;
                cout<<"So giay can giam: ";
                cin>>n;
                date = date = date -  n ; 
                break;}
            case 5:{
                cout<<"Hien tai la: "<<date;
            }
            };
    }while (x !=0);
}