#include <iostream>
using namespace::std;
float Nilaiuas,Nilaiuts,Nilaitugas,Absen,Total,A1,A2,A3,A4;
struct nilainya { double uts,uas,tugas,absen;
string huruf;
};
void input (){
cout<<"||><><><><><><><><><>|| MENGHITUNG NILAI ||><><><><><><><><><>||"<<endl;
cout<<endl;
cout<<"________________________________________________________________"<<endl;
cout<<"||><><|| UTS ||><><|| UAS ||><><|| TUGAS ||><><|| ABSEN ||><><||"<<endl;
cout<<"||><><|| 20% ||><><|| 30% ||><><||  35%  ||><><||  15%  ||><><||"<<endl;
cout<<"----------------------------------------------------------------"<<endl;
cout<<"_____________________________________"<<endl;
cout<<"|  A    |  B   |  C   |  D   |   E  |"<<endl;
cout<<"|-------|------|------|------|------|"<<endl;
cout<<"|81-100 |61-80 |41-60 |21-40 | 0-20 |"<<endl;
cout<<"_____________________________________"<<endl;

            cout<<"\NMasukan nilai UTS : ";
            cin>>Nilaiuts;
            cout<<"\nMasukan nilai UAS : ";
            cin>>Nilaiuas;
            cout<<"\nMasukan nilai Tugas : ";
            cin>>Nilaitugas;
            cout<<"\nMasukan nilai Absen : ";
            cin>>Absen;
}
void grade (double total)
{
    if(total>=81)
    {
        cout<<"\nmaka hasil akhir anda adalah A ";
    }
    else if(total>=61)
    {
        cout<<"\nmaka hasil akhir anda adalah B ";
    }
    else if(total>=41)
    {cout<<"\nmaka hasil akhir anda adalah C";
    }
    else if(total>=21){cout<<"\nmaka hasil akhir anda adalah D";}
    else if(total>=0){cout<<"\nmaka hasil akhir anda adalah E";}
    }
    main(){
    input();
    A1=20*Nilaiuts/100;
         cout<<"\njadi nilai uts : "<<A1;
    A2=30*Nilaiuas/100;
         cout<<"\njadi nilai uas : "<<A2;
    A3=35*Nilaiuts/100;
         cout<<"\njadi nilai tugas : "<<A3;
    A4=15*Nilaiuts/100;
         cout<<"\njadi nilai Absen : "<<A4;
         cout<<"\nTOTAL NILAI : ";
         Total=A1+A2+A3+A4;
         cout<<Total;
         grade(Total);
         }
