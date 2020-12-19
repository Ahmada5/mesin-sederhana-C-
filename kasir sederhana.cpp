#include <iostream>
#include <unistd.h>
#include <stdio.h>
using namespace std;
//program kasir...
//saya membuat program struck kasir otomatis...

int main() {
    string id,key; 
	int umur,bayar,kode;
	cout<<"masukan ID anda = ";
	cin>>id;
	cout<<"masukan KEY anda = ";
	cin>>key;
	 if (id == "user123" && key == "qwery123")
	    {sleep(2);
		 cout<<"\nSELAMAT ANDA MENDAPAT DISKON 10%";}
	 else
	    cout<<"\nharap tunggu\n\n";
	    sleep(3);
	
	cout<<"\nmasukan umur anda = ";
	cin>>umur;
	 if(umur>12) 
	  {	cout<<"      \nMENU MAKANAN\n";
      	cout<<"1.nasi goreng pedas = 12.000 (kode 1)\n";
    	cout<<"2.nasi rames        = 9000   (kode 2)\n";
    	cout<<"3.pecel lele        = 13000  (kode 3)\n";
    	cout<<"4.ayam balado       = 15000  (kode 4)\n";}
     else
	  {	cout<<"   \nMENU MAKANAN\n";
    	cout<<"1.nasi goreng = 11.000 (kode 5)\n";
    	cout<<"2.ayam goreng = 9000   (kode 6)\n";
    	cout<<"3.ikan kukus  = 8000   (kode 7)\n\n";}
	
	cout<<"masukan kode menu pilihan anda = ";
	cin>>kode;
	cout<<"masukan jumlah uang anda = ";
	cin>>bayar;
	cout<<"\nharap tunggu.....\n";
	sleep(5);
	  if(id == "user123" && key == "qwery123")
	     { switch(kode)
		          { case 1: cout<<"\nANDA MEMESAN NASI GORENG PEDAS SEHARGA 12000 RUPIAH, DENGAN POTONGAN 10% MENJADI "<<12000-(12000*10/100)<<" RUPIAH\n\n"<<endl;
		                    if(bayar>12000-(12000*10/100))
							   {cout<<"uang anda berlebih "<<bayar-(12000-(12000*10/100))<<" rupiah, jangan lupa ambil kembalian nya\n         TERIMAKASIH TELAH BERBELANJA";}
							else if(bayar<12000-(12000*10/100))
							    {cout<<"uang anda kurang "<<(12000-(12000*10/100))-bayar<<" rupiah, harap masukan uang pas atau lebih\n\n";main();}
							else
							    cout<<"TERIMAKASIH TELAH BERBELANJA, SEE YOU NEXT TIME";
		                    break;
	     	        case 2: cout<<"\nANDA MEMESAN NASI RAMES SEHARGA 9000 RUPIAH, DENGAN POTONGAN 10% MENJADI "<<9000-(9000*10/100)<<" RUPIAH\n\n"<<endl;
	     	                if(bayar>9000-(9000*10/100))
							   {cout<<"uang anda berlebih "<<bayar-(9000-(9000*10/100))<<" rupiah, jangan lupa ambil kembalian nya\n          TERIMAKASIH TELAH BERBELANJA";}
							else if(bayar<9000-(9000*10/100))
							    {cout<<"uang anda kurang "<<(9000-(9000*10/100))-bayar<<" rupiah, harap masukan uang pas atau lebih\n\n";main();}
							else
							    cout<<"TERIMAKASIH TELAH BERBELANJA, SEE YOU NEXT TIME";
	     	                break;
	                case 3: cout<<"\nANDA MEMESAN PECEL LELE SEHARGA 13000 RUPIAH, DENGAN POTONGAN 10% MENJADI "<<13000-(13000*10/100)<<" RUPIAH\n\n"<<endl;
	                        if(bayar>13000-(13000*10/100))
							   {cout<<"uang anda berlebih "<<bayar-(13000-(13000*10/100))<<" rupiah, jangan lupa ambil kembalian nya\n         TERIMAKASIH TELAH BERBELANJA";}
							else if(bayar<13000-(13000*10/100))
							    {cout<<"uang anda kurang "<<(13000-(13000*10/100))-bayar<<" rupiah, harap masukan uang pas atau lebih\n\n";main();}
							else
							    cout<<"TERIMAKASIH TELAH BERBELANJA, SEE YOU NEXT TIME";
	                        break;
	                case 4: cout<<"\nANDA MEMESAN AYAM BALADO SEHARGA 15000 RUPIAH, DENGAN POTONGAN 10% MENJADI "<<15000-(15000*10/100)<<" RUPIAH\n\n"<<endl;
	                        if(bayar>15000-(15000*10/100))
							   {cout<<"uang anda berlebih "<<bayar-(15000-(15000*10/100))<<" rupiah, jangan lupa ambil kembalian nya\n         TERIMAKASIH TELAH BERBELANJA";}
							else if(bayar<15000-(15000*10/100))
							    {cout<<"uang anda kurang "<<(15000-(15000*10/100))-bayar<<" rupiah, harap masukan uang pas atau lebih\n\n";main();}
							else
							    cout<<"TERIMAKASIH TELAH BERBELANJA, SEE YOU NEXT TIME";
	                        break;
					case 5: cout<<"\nANDA MEMESAN NASI GORENG SEHARGA 11000 RUPIAH, DENGAN POTONGAN 10% MENJADI "<<11000-(11000*10/100)<<" RUPIAH\n\n"<<endl;
					        if(bayar>11000-(11000*10/100))
							   {cout<<"uang anda berlebih "<<bayar-(11000-(11000*10/100))<<" rupiah, jangan lupa ambil kembalian nya\n         TERIMAKASIH TELAH BERBELANJA";}
							else if(bayar<11000-(11000*10/100))
							    {cout<<"uang anda kurang "<<(11000-(11000*10/100))-bayar<<" rupiah, harap masukan uang pas atau lebih\n\n";main();}
							else
							    cout<<"TERIMAKASIH TELAH BERBELANJA, SEE YOU NEXT TIME";
					        break;
					case 6: cout<<"\nANDA MEMESAN AYAM GORENG SEHARGA 9000 RUPIAH, DENGAN POTONGAN 10% MENJADI "<<9000-(9000*10/100)<<" RUPIAH\n\n"<<endl;
					        if(bayar>9000-(9000*10/100))
							   {cout<<"uang anda berlebih "<<bayar-(9000-(9000*10/100))<<" rupiah, jangan lupa ambil kembalian nya\n          TERIMAKASIH TELAH BERBELANJA";}
							else if(bayar<9000-(9000*10/100))
							    {cout<<"uang anda kurang "<<(9000-(9000*10/100))-bayar<<" rupiah, harap masukan uang pas atau lebih\n\n";main();}
							else
							    cout<<"TERIMAKASIH TELAH BERBELANJA, SEE YOU NEXT TIME";
					        break;
					case 7: cout<<"\nANDA MEMESAN IKAN KUKUS SEHARGA 8000 RUPIAH, DENGAN POTONGAN 10% MENJADI "<<8000-(8000*10/100)<<" RUPIAH\n\n"<<endl;
					        if(bayar>8000-(8000*10/100))
							   {cout<<"uang anda berlebih "<<bayar-(8000-(8000*10/100))<<" rupiah, jangan lupa ambil kembalian nya\n          TERIMAKASIH TELAH BERBELANJA";}
							else if(bayar<8000-(8000*10/100))
							    {cout<<"uang anda kurang "<<(8000-(8000*10/100))-bayar<<" rupiah, harap masukan uang pas atau lebih\n\n";main();}
							else
							    cout<<"TERIMAKASIH TELAH BERBELANJA, SEE YOU NEXT TIME";
					        break;}
		 }
	  else	
	    { switch(kode)
		          { case 1: cout<<"\nANDA MEMESAN NASI GORENG SEHARGA "<<12000<<" RUPIAH\n\n";
		                    if(bayar>12000)
		                      {cout<<"uang anda berlebih "<<bayar-12000<< "rupiah, jangan lupa ambil kembalian nya\n         TERIMAKASIH TELAH BERBELANJA";}
		                    else if (bayar<12000)
		                      {cout<<"uang anda kurang "<<12000-bayar<<" rupiah, harap masukan uang pas atau lebih\n\n";main();}
		                    else
		                       cout<<"TERIMAKASIH TELAH BERBELANJA, SEE YOU NEXT TIME";
		                    break;  
	     	        case 2: cout<<"\nANDA MEMESAN NASI RAMES SEHARGA "<<9000<<" SEHARGA\n\n";
	     	                if(bayar>9000)
		                      {cout<<"uang anda berlebih "<<bayar-9000<< "rupiah, jangan lupa ambil kembalian nya\n         TERIMAKASIH TELAH BERBELANJA";}
		                    else if (bayar<9000)
		                      {cout<<"uang anda kurang "<<9000-bayar<<" rupiah, harap masukan uang pas atau lebih\n\n";main();}
		                    else
		                       cout<<"TERIMAKASIH TELAH BERBELANJA, SEE YOU NEXT TIME";
	                        break;
				    case 3: cout<<"\nANDA MEMESAN PECEL LELE SEHARGA "<<13000<<" RUPIAH\n\n";
				            if(bayar>13000)
		                      {cout<<"uang anda berlebih "<<bayar-13000<< "rupiah, jangan lupa ambil kembalian nya\n         TERIMAKASIH TELAH BERBELANJA";}
		                    else if (bayar<13000)
		                      {cout<<"uang anda kurang "<<13000-bayar<<" rupiah, harap masukan uang pas atau lebih\n\n";main();}
		                    else
		                       cout<<"TERIMAKASIH TELAH BERBELANJA, SEE YOU NEXT TIME";
	                        break;
				    case 4: cout<<"\nANDA MEMESAN AYAM BALADO SEHARGA "<<15000<<" RUPIAH\n\n";
				            if(bayar>15000)
		                      {cout<<"uang anda berlebih "<<bayar-15000<< "rupiah, jangan lupa ambil kembalian nya\n         TERIMAKASIH TELAH BERBELANJA";}
		                    else if (bayar<15000)
		                      {cout<<"uang anda kurang "<<15000-bayar<<" rupiah, harap masukan uang pas atau lebih\n\n";main();}
		                    else
		                       cout<<"TERIMAKASIH TELAH BERBELANJA, SEE YOU NEXT TIME";
				            break;
					case 5: cout<<"\nANDA MEMESAN NASI GORENG SEHARGA "<<11000<<" RUPIAH\n\n";
					        if(bayar>11000)
		                      {cout<<"uang anda berlebih "<<bayar-11000<< "rupiah, jangan lupa ambil kembalian nya\n         TERIMAKASIH TELAH BERBELANJA";}
		                    else if (bayar<11000)
		                      {cout<<"uang anda kurang "<<11000-bayar<<" rupiah, harap masukan uang pas atau lebih\n\n";main();}
		                    else
		                       cout<<"TERIMAKASIH TELAH BERBELANJA, SEE YOU NEXT TIME";
				            break;
					case 6: cout<<"\nANDA MEMESAN AYAM GORENG SEHARGA "<<9000<<" RUPIAH\n\n";
					        if(bayar>9000)
		                      {cout<<"uang anda berlebih "<<bayar-9000<< "rupiah, jangan lupa ambil kembalian nya\n         TERIMAKASIH TELAH BERBELANJA";}
		                    else if (bayar<9000)
		                      {cout<<"uang anda kurang "<<9000-bayar<<" rupiah, harap masukan uang pas atau lebih\n\n";main();}
		                    else
		                       cout<<"TERIMAKASIH TELAH BERBELANJA, SEE YOU NEXT TIME";
				            break;
					case 7: cout<<"\nANDA MEMESAN IKAN KUKUS SEHARGA "<<8000<<" RUPIAH\n\n";
					        if(bayar>8000)
		                      {cout<<"uang anda berlebih "<<bayar-8000<< "rupiah, jangan lupa ambil kembalian nya\n         TERIMAKASIH TELAH BERBELANJA";}
		                    else if (bayar<8000)
		                      {cout<<"uang anda kurang "<<8000-bayar<<" rupiah, harap masukan uang pas atau lebih\n\n";main();}
		                    else
		                       cout<<"TERIMAKASIH TELAH BERBELANJA, SEE YOU NEXT TIME";
					        break;}
	    	
	    } 
    cout<<"\n\n\n\n\n\n\n\tjangan lupa ambil struk pembayaran ya\n\n\n\n";
	    
	return 0;
}
