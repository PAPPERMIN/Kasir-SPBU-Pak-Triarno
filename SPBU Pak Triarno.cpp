#include <iostream>
using namespace std;
string angka[6] = {" ","Pertalite             ",
						"Pertamax             ",
						"Pertamax Turbo       ",
						"Dexlite              ",
						"Pertamina Dex        ",};
int jumlah_array = sizeof(angka)/sizeof(*angka);
void bahan_bakar()
{
	cout<<"Bahan Bakar :\n";
	for(int a=1; a< jumlah_array; a++){
		cout<<a<<". "<<angka[a]<<endl;
	}
}
void SPBU(){
	int o;
	float i,x;
	float p=10000,q=14000,r=14500,s=18000,t=18000;
	cout<<"---------------------------------------\n";
	cout<<"Mau isi bahan bakar apa (1-5) ? : ";cin>>o;
	cout<<"Mau isi berapa liter ? : ";cin>>i;
	cout<<"\n---------------------------------------"<<endl;
	switch (o){
		case 1 :
		cout<<angka[1]<<": Rp. "<<p;
		cout<<"\nTotal                 : Rp. "<<i*p;
		cout<<"\n--------------------------------------"<<endl;
		cout<<"Bayar Tunai           : Rp. ";cin>>x;
		cout<<"Kembalian             : Rp. "<<x-(i*p);
		cout<<"\n--------------------------------------"<<endl;
		break;
		case 2 :
		cout<<angka[2]<<" : Rp. "<<q;
		cout<<"\nTotal                 : Rp. "<<i*q;
		cout<<"\n--------------------------------------"<<endl;
		cout<<"Bayar Tunai           : Rp. ";cin>>x;
		cout<<"Kembalian             : Rp. "<<x-(i*q);
		cout<<"\n--------------------------------------"<<endl;
		break;
		case 3 :
		cout<<angka[3]<<" : Rp. "<<r;
		cout<<"\nTotal                 : Rp. "<<i*r;
		cout<<"\n--------------------------------------"<<endl;
		cout<<"Bayar Tunai           : Rp. ";cin>>x;
		cout<<"Kembalian             : Rp. "<<x-(i*r);
		cout<<"\n--------------------------------------"<<endl;
		break;
		case 4 :
		cout<<angka[4]<<" : Rp. "<<s;
		cout<<"\nTotal                 : Rp. "<<i*s;
		cout<<"\n--------------------------------------"<<endl;
		cout<<"Bayar Tunai           : Rp. ";cin>>x;
		cout<<"Kembalian             : Rp. "<<x-(i*s);
		cout<<"\n--------------------------------------"<<endl;
		break;
		case 5 :
		cout<<angka[5]<<" : Rp. "<<t;
		cout<<"\nTotal                 : Rp. "<<i*t;
		cout<<"\n--------------------------------------"<<endl;
		cout<<"Bayar Tunai           : Rp. ";cin>>x;
		cout<<"Kembalian             : Rp. "<<x-(i*t);
		cout<<"\n--------------------------------------"<<endl;
		break;
	}
}

int main(){
	char pil;
	float x,total;
	cout<<"======SELAMAT DATANG DI SPBU TRIARNO======\n";
	cout<<endl;
	do{
		bahan_bakar();
		SPBU();
		cout<<endl;
		cout<<"\nINGIN MELAKUKAN PENGISIAN BAHAN BAKAR LAGI ? (y||N) : "; cin>>pil;
	}
	while(pil=='y'||pil=='Y');
	cout<< "--TERIMAKASIH DAN SELAMAT DATANG KEMBALI--";
	return 0;}
    