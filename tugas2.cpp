#include <iostream>

using namespace std;

int main()
{	
	// Deklarasi variabel
	int pem, pbo, ppkn, basis, pkkw;
	float Book, Disc, FixBook;
	
	// Menampilkan daftar harga
	cout<<"\n\t\t=== Daftar barang beserta harganya ==="<<endl;
	cout<<"\t\t| buku pemrograman : Rp 105.000,00   |"<<endl;
	cout<<"\t\t| buku pbo         : Rp 188.000,00   |"<<endl;
	cout<<"\t\t| buku ppkn        : Rp  55.000,00   |"<<endl;
	cout<<"\t\t| buku basis       : Rp  10.000,00   |"<<endl;
	cout<<"\t\t| buku pkkw        : Rp  35.000,00   |"<<endl;
	cout<<"\t\t======================================\n"<<endl;
	
	// Memasukkan jumlah barang yang dibeli
	cout<<"Masukan jumlah buku pemrograman yang dibeli : "; cin>>pem;
	cout<<"Masukan jumlah buku pbo yang dibeli         : "; cin>>pbo;
	cout<<"Masukan jumlah buku ppkn yang dibeli        : "; cin>>ppkn;
	cout<<"Masukan jumlah buku basis yang dibeli       : "; cin>>basis;
	cout<<"Masukan jumlah buku pkkw yang dibeli        : "; cin>>pkkw;
	cout<<"\n"<<endl;
	
	// Menampilkan customer's bill
    cout<<"\t========================== Customer's BILL =========================="<<endl;
	cout<<"\t| Jumlah \tDeskripsi \t\tHarga Satuan \tTotal Harga |"<<endl;
	cout<<"\t| ------ \t--------- \t\t------------ \t----------- |"<<endl;
	cout<<"\t|   "<<pem<<"\t\t buku pemrograman \t105000 \t\t"<<pem*105000<<"\t    |"<<endl;
	cout<<"\t|   "<<pbo<<"\t\t buku pbo \t\t188000 \t\t"<<pbo*188000<<"\t    |"<<endl;
	cout<<"\t|   "<<ppkn<<"\t\t buku ppkn \t\t55000 \t\t"<<ppkn*55000<<"\t    |"<<endl;
	cout<<"\t|   "<<basis<<"\t\tbuku basis \t\t10000 \t\t"<<basis*10000<<"\t    |"<<endl;
	cout<<"\t|   "<<pkkw<<"\t\t buku pkkw \t\t35000 \t\t"<<pkkw*35000<<"\t    |"<<endl;
	cout<<"\t| ----------------------------------------------------------------- |"<<endl;
	Book = pem*105000+pbo*188000+ppkn*55000+basis*10000+pkkw*35000;
	Disc = 0.10*Book;
	cout<<"\t|\t\t\tHarga Total Buku \t: "<<Book<<"\t    |"<<endl;
	cout<<"\t|\t\t\tDiskon         \t: "<<Disc<<"   \t            |"<<endl;
	cout<<"\t|\t\t\tHarga Setelah Diskon \t: "<<Book-Disc<<"\t    |"<<endl;
	FixBook = Book-Disc;
	cout<<"\t|\t\t\t------------------------------------------- |"<<endl;
	cout<<"\t|\t\t\tTotal Pembayaran \t: "<<FixBook<<"\t    |"<<endl;
	cout<<"\t====================================================================="<<endl;
	
}
