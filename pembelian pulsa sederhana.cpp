#include <iostream>
#include <fstream>
#include <stdio.h>
#include <unistd.h>

using namespace std;
 
 void header(){
		
	cout << "\t\tProgram Kasir Pulsa" << endl;
	cout << "===============================" << endl;
	cout << "1. beli pulsaa " << endl;
	cout << "2. cek history penjualan" << endl;
	cout << "3. selesai" << endl;
	cout << "===============================" << endl;

}
 
 void tampil()
 { 	cout<<"\t----HAI NAMA SAYA AHMAD PETUGAS PULSA ANDA----\n";
 	cout<<"\t------------'PETUNJUK PEMBAYARAN'--------------\n";
 	cout<<"GUNAKAN UANG ASLI ANDA DAN MASUKKAN KE TEMPAT YANG TELAH DI SEDIAKAN\n\n";
 	cout<<"\t----------------------------------------------\n";
	cout<<"\t--------------DAFTAR HARGA PULSA--------------\n";
	cout<<"\t----------------------------------------------\n";
	cout<<"\t------------pulsa------------harga------------\n";
	cout<<"\t----------------------------------------------\n";
	cout<<"\t------------10000-----------RP.12000----------\n";
	cout<<"\t------------20000-----------RP.22000----------\n";
	cout<<"\t------------30000-----------RP.32000----------\n";
	cout<<"\t------------50000-----------RP.52000----------\n";
	cout<<"\t------------100000----------RP.102000---------\n";
	cout<<"\t------------150000----------RP.152000---------\n";
}	
void diskon() 
{ int nominal;
  char bonus;
  cout<<"----------------------------SEMARAK AKHIR TAHUN---------------------------\n\n";
  cout<<"----------selamat anda mendapat diskon dari program akhir tahun-----------\n";
  cout<<"masukan kode 'A' jika anda ingin menambah RP.10000 , maka anda akan mendapatkan pulsa tambahan 20000\n";
  cout<<"masukan kode 'B' jika anda ingin menambah RP.50000 , maka anda akan mendapatkan pulsa tambahan 10000\n\n\n";
  cout<<"-----------------TRANSAKSI HANYA BERLAKU DENGAN UANG PAS-------------------\n\n";
  cout<< "apakah anda ingin membeli bonus? [y/t]? ";cin>>bonus; 
        	if (bonus == 'y'){
            	cout<<"masukan kode bonus yang anda pilih ";cin>>nominal;
				   cout<<"masukan uang anda dan tunggu proses pembelian\n\n";
	                sleep(5);
     	            cout<<"TRANSAKSI SUKSES\nbonus segera dikirim";} 
 system("cls");
 header();
}

void menu(){
		menu:
		tampil();
		int kembalian;
		cout<<"\n";
		float pulsa,hasil,z=2000,masuk;
		string NO_HP;
		char lagi;
		cout<<"masukan jumlah pulsa yang anda beli:";cin>>pulsa;
		cout<<"masukan no tlp tujuan: 08";cin>>NO_HP;
		hasil=(pulsa+z);
		cout<<"\n";
	    cout<<"jumlah yang anda bayarkan adalah = "<<hasil<<endl;
		cout<<"masukan uang anda,tunggu proses pembayaran\n\n";
		sleep(5);
		cout<<"maaf uang anda tidak terdeteksi ";
		cout<<"masukan nominal secara manual = ";cin>>masuk;
		 if(masuk>hasil)
		    {
		     kembalian=masuk-hasil;	
			 cout<<"uang anda berlebih, jangan lupa ambil kembalian nya "<<kembalian<<"\n"<<endl;
			}   
		 else
	       {
			cout<< "apakah anda mau melanjutkan transaksi [y/t]? ";cin>>lagi; 
	        	if (lagi == 'y')
	               {
				    cout<<"transaksi sedang di proses,tunggu proses transaksi anda selesai\n\n";
		            sleep(5);
		            cout<<"SELAMAT TRANSAKSI ANDA BERHASIL DAN ANDA MENDAPAT KESEMPATAN BONUS\n\n";
	     	        sleep(5);
				   }
	     	    else{header();}
		   }
		sleep(5);
		
		diskon();
		
		ofstream dataPulsa;
		dataPulsa.open("dataPulsa.txt",ios:: trunc);
		dataPulsa << "History Penjualan Pulsa " << endl;
		dataPulsa << "=======================" << endl;
		dataPulsa << "Nominal   : " << pulsa << endl;
		dataPulsa << "No.Tlp    : " << NO_HP << endl;
		dataPulsa << "Dibayar   : " << masuk << endl;
		dataPulsa << "Kembalian : " << kembalian << endl;
		dataPulsa.close();

}

void bukaData(){
	char text;
	ifstream dataPulsa;
	dataPulsa.open("dataPulsa.txt");
	while(!dataPulsa.eof()){
		dataPulsa.get(text);
		cout << text;
	}
	dataPulsa.close();
	
}

main(){
	int pilih;
	
	header();
     
	cout << "Pilih menu : [1-3] "; cin >> pilih;
	
	
	 system("cls");
	switch(pilih){
		case 1:
			menu();
			break;
		case 2:
			bukaData();
			break;
		default : 
			cout << "Program selesai";
			break;	
		
				
		}
		
	
	
	cin.get();
	return 0;
}

