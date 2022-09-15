#include <iostream>
using namespace std;
int main(){
	int jumlahEmas, hargaPembelian, hargaSekarang;
	float dollar, selisihHarga, presentaseSelisih, untungRugiSatuan, untungRugi;
	
	//input jumlah emas
	cout<<"Masukkan Jumlah Emas: ";
	cin>>jumlahEmas;
	
	//input harga pembelian
	cout<<"Masukkan Harga Pembelian: ";
	cin>>hargaPembelian;
	
	//input harga sekarang
	cout<<"Masukkan Harga Sekarang: ";
	cin>>hargaSekarang;
	
	//dollar di harga Rp.14.500
	dollar = 14500;
	
	//mencari selisih harga dengan cara harga sekarang dikurang (-) harga pembelian
	selisihHarga = hargaSekarang - hargaPembelian;
	
	//untuk mencari presentase adalah hasil dari selisih harga dibagi (:) dengan harga pembelian dikali (*) 100
	presentaseSelisih = (selisihHarga / hargaPembelian) * 100;
	
	//mencari untung rugi persatuan dengan cara harga sekarang dikurangkan (-) harga pembelian lalu dibagi harga dollar saat ini
	untungRugiSatuan = (hargaSekarang - hargaPembelian) / dollar;
	
	//untuk mencari untung rugi secara keseluruhan yaitu untung rugi satuan dikalikan jumlah emas yang dimasukan
	untungRugi = untungRugiSatuan * jumlahEmas;
	
	cout<<"\nJumlah Emas\t\t:  "<<jumlahEmas;
	cout<<"\nHarga Saat Pembelian\t:  "<<hargaPembelian;
	cout<<"\nHarga Saat Ini\t\t:  "<<hargaSekarang;
	
	cout<<"\n\nKenaikan/Penurunan\t:  "<<presentaseSelisih<<" % ";
	cout<<"\nKeuntungan/Kerugian\t:  "<<"$ "<<untungRugi;
	
	return 0;
}
