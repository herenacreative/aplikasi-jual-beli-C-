#include <conio.h>
#include <stdio.h>
#include <iostream.h>
#include <iomanip.h>

 judul()
 {
  cout<<"		*** PT.PERTAMINA ***"<<endl;
  cout<<"		  Pangkalan Lalang  "<<endl;
  cout<<"		Jl. Raya Kota Bogor "<<endl;
  cout<<"*****************************************************"<<endl<<endl;
 }

 garis()
 {
  cout<<"====================================================="<<endl;
 }

 main()
 {

 	struct
   {
   	int harga, jumlah, total;
      char pembelian[15], m_pembelian[7], katagori[15], m_katagori;
   } elpiji[10];

   	int s, r, t_bayar=0, u_bayar, u_kembali;
      char tanggal[20], nama[20], alamat[20], awal, selesai;

      awal:
      	clrscr();
         judul();
         cout<<"Tanggal      : ";gets(tanggal);
         cout<<"Nama Pembeli : ";gets(nama);
         cout<<"Alamat       : ";gets(alamat);
         cout<<"Jumlah Pembelian : ";cin>>r;
         cout<<endl;
          for(s=1;s<=r;s++)
          {
          	cout<<"Pembelian Ke- "<<s<<endl;
          	cout<<"Masukan Kode Pembelian [3kg/12kg] : ";cin>>elpiji[s].m_pembelian;
          	cout<<"Masukan Kode Katagori [1/2/3]     : ";cin>>elpiji[s].m_katagori;
          	cout<<"Jumlah Beli                       : ";cin>>elpiji[s].jumlah;
            cout<<endl;
             if(strcmp(elpiji[s].m_pembelian,"3kg")==0)
             {
            	strcpy(elpiji[s].pembelian,"Elpiji 3 Kg");
               if(elpiji[s].m_katagori=='1')
               {
                strcpy(elpiji[s].katagori,"Rumah Tangga");
                elpiji[s].harga=18000;
               }
               else if(elpiji[s].m_katagori=='2')
               {
                strcpy(elpiji[s].katagori,"Usaha Mikro");
                elpiji[s].harga=17000;
               }
               else
               {
                strcpy(elpiji[s].katagori,"Pengecer");
                elpiji[s].harga=16000;
               }
             }
             else
             {
             	strcpy(elpiji[s].pembelian,"Elpiji 12 Kg");
               if(elpiji[s].m_katagori=='1')
               {
                strcpy(elpiji[s].katagori,"Rumah Tangga");
                elpiji[s].harga=145000;
               }
               else if(elpiji[s].m_katagori=='2')
               {
                strcpy(elpiji[s].katagori,"Usaha Mikro");
                elpiji[s].harga=140000;
               }
               else
               {
                strcpy(elpiji[s].katagori,"Pengecer");
                elpiji[s].harga=135000;
               }
             }
           }
            garis();

          clrscr();
          judul();
          cout<<"Tanggal      : "<<tanggal<<endl;
          cout<<"Nama Pembeli : "<<nama<<endl;
          cout<<"Alamat       : "<<alamat<<endl;
          cout<<endl;
          garis();
          cout<<"No   Jenis      Katagori     Harga   Jumlah  Subtotal"<<endl;
          cout<<"   Pembelian                 Satuan   Beli           "<<endl;
          garis();
          cout<<endl;
           for(s=1;s<=r;s++)
           {
            elpiji[s].total = elpiji[s].harga * elpiji[s].jumlah;
           	cout<<setiosflags(ios::left)<<setw(3)<<s;
            cout<<setiosflags(ios::left)<<setw(13)<<elpiji[s].pembelian;
            cout<<setiosflags(ios::left)<<setw(13)<<elpiji[s].katagori;
            cout<<setiosflags(ios::left)<<setw(9)<<elpiji[s].harga;
            cout<<setiosflags(ios::left)<<setw(7)<<elpiji[s].jumlah;
            cout<<setiosflags(ios::right)<<setw(8)<<elpiji[s].total<<endl;
            t_bayar = t_bayar + elpiji[s].total;
           }
          cout<<endl;
          garis();
          cout<<"                             Total Bayar  :Rp. "<<setw(6)<<t_bayar<<endl;
          cout<<"                             Uang Bayar   :Rp. ";cin>>u_bayar;
          u_kembali = u_bayar - t_bayar;
          cout<<"                             Uang Kembali :Rp. "<<setw(6)<<u_kembali<<endl;
          cout<<endl;

          cout<<"	    *** T E R I M A K A S I H ***"<<endl;
          cout<<endl;
          cout<<"Ingin Menghitung Kembali [Y/T] : ";cin>>awal;
           if(awal=='y'||awal=='Y')
            goto awal;
           else
            goto selesai;

          selesai:
          cout<<endl;
          cout<<"	  ^^ P R O G R A M S E L E S A I ^^"<<endl;

getch();
}

