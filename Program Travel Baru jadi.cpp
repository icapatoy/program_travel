#include <iostream>
#include <stdlib.h>
using namespace std;

void sep()
{
	cout<<"====================="<<endl;
}
void pil()
{
	cout<<"\nPilihan (masukan angka) : ";	
}
struct harga
{
	int kr_htl_btg[3][2]={{800000,800000},
						 {1000000,700000},
						 {1500000,1700000}};
	int kr_pswt[2]={5000000,15500000};
	int kr_wst[2]={1200000,946200};
	int jp_htl_btg[3][2]={{800000,600000},
						  {2500000,1500000},
						  {5300000,6000000}};
	int jp_pswt[2]={7000000,24000000};
	int jp_wst[2]={1220000,1000000};
};
harga hrg;

struct korea
{
	int bnyk_htl_btg_5=2;
	int bnyk_htl_btg_4=2;
	int bnyk_htl_btg_3=2;
	int bnyk_htl_btg=3;
	int bnyk_wst=2;
	int bnyk_pswt=2;
	const char* kls_pswt[2]={"ekonomi","bisnis"};
	const char* htl_btg[3][2]={{"Jeju Island(***)","Lotte World(***)"},
							  {"Jeju Island(****)","Lotte World(****)"},
	                          {"Jeju Island(*****)","Lotte World(*****)"}};
	const char* wst[2]={"jeju island","Lotte World"};	
};

struct jepang
{
	int bnyk_htl_btg_5=2;
	int bnyk_htl_btg_4=2;
	int bnyk_htl_btg_3=2;
	int bnyk_htl_btg=3;
	int bnyk_wst=2;
	int bnyk_pswt=2;
	const char* kls_pswt[2]={"ekonomi","bisnis"};
	const char* htl_btg[3][2]={{"Fuji Mountain(***)","Universal Studio(***)"},
							 {"Fuji Mountain(****)","Universal Studio(****)"},
							 {"Fuji Mountain(*****)","Universal Studio(*****)"}};
	
	const char* wst[2]={"Fuji Mountain","Universal Studio"};	
};
struct tujuan
{
	int bnyk_negara=2;
	const char* negara[2]={"Jepang","Korea"};
	jepang jp;
	korea kr;
};
tujuan tjn;


int main()
{
Program :	
	sep();
	cout<<"Agen Travel baru jadi"<<endl;
	sep();
	cout<<"Masukan Berapa orang :";int brporg;cin>>brporg;
	cout<<"Tujuan Negara"<<endl;
	for (int i=0;i<tjn.bnyk_negara;i++)
		cout<<" "<<i+1<<"."<<tjn.negara[i]<<endl;
	pil();
	int plhn_ngr;
	cin>>plhn_ngr;
	sep();
	if (plhn_ngr ==1){
		const char* plhn_ngr= tjn.negara[1];
		cout<<"List Kelas Pesawat\tHarga"<<endl;
		for (int i=0;i<tjn.jp.bnyk_pswt;i++)
			cout<<" "<<i+1<<"."<<tjn.jp.kls_pswt[i]<<"\t\t"<<hrg.jp_pswt[i]<<endl;
		pil();
		int plhn_pswt;
		cin>>plhn_pswt;
		int hrg_plhn_pswt=hrg.jp_pswt[plhn_pswt-1];
		sep();
		cout<<"List Hotel\n"<<endl;
		for (int j=0;j<tjn.jp.bnyk_htl_btg;j++)
		{
			cout<<"Hotel bintang "<<j+3<<endl;
			cout<<"Nama Hotel\t\t\tharga(per malam)"<<endl;
			for (int i=0;i<tjn.jp.bnyk_htl_btg_5;i++)
				{
				cout <<" "<<i+1<<"."<< tjn.jp.htl_btg[j][i]<<"\t\t" << hrg.jp_htl_btg[j][i]<<endl;
				};
			cout<<endl;
			
		};
		cout<<"\nPilih Bintang :\n 1.Bintang 3\n 2.Bintang 4\n 3.Bintang 5 ";
		pil();
		int plhn_btg;
		cin>>plhn_btg;
		cout<<"Pilih Hotel";
		pil();
		int plhn_htl;
		cin>>plhn_htl;
		cout<<"Berapa malam :";
		int brpmlm;
		cin>>brpmlm;
		int hrg_htl=hrg.kr_htl_btg[plhn_btg-1][plhn_htl-1]*brpmlm;
		sep();
		cout<<"Pilih wisata\t\tHarga\n";
		for (int i=0;i<tjn.jp.bnyk_wst;i++)
			cout<<" "<<i+1<<"."<<tjn.jp.wst[i]<<"\t"<<hrg.jp_wst[i]<<endl;
		cout<<"Pilih Banyak Wisata :";
		int pil_bnyk_wst,pil_wst;
		cin >>pil_bnyk_wst;
		int hrg_wst=0;
		for (int i=0;i<pil_bnyk_wst;i++)
		{
		
			pil();
			cin>> pil_wst;
			hrg_wst=hrg_wst+hrg.jp_wst[pil_wst-1];
		
		};
		sep();
		cout<<"\t\t   List Pilihan"<<endl;
		cout<<"\t\tNama\t\t\tHarga"<<endl;
		cout<<"Negara\t\t"<<plhn_ngr<<endl;
		cout<<"Pesawat\t\t"<<tjn.jp.kls_pswt[plhn_pswt-1]<<"\t\t\t"<<hrg_plhn_pswt<<endl;
		cout<<"Hotel("<<brpmlm<<" malam)\t"<<tjn.jp.htl_btg[plhn_btg-1][plhn_htl-1]<<"\t"<<hrg_htl<<endl;
		cout<<"Wisata\t\t\t\t\t"<<hrg_wst<<endl;
		sep();
		cout<<"harga tiket satuan :\t\t\t"<<hrg_plhn_pswt+hrg_htl+hrg_wst<<endl;
		cout<<"harga tiket total(orang ="<<brporg<<")  :\t\t"<<(hrg_plhn_pswt+hrg_htl+hrg_wst)*brporg<<endl;
	}
	else if(plhn_ngr ==2){
		const char* plhn_ngr= tjn.negara[1];
		cout<<"List Kelas Pesawat\tHarga"<<endl;
		for (int i=0;i<tjn.kr.bnyk_pswt;i++)
			cout<<" "<<i+1<<"."<<tjn.kr.kls_pswt[i]<<"\t\t"<<hrg.kr_pswt[i]<<endl;
		pil();
		int plhn_pswt;
		cin>>plhn_pswt;
		int hrg_plhn_pswt=hrg.kr_pswt[plhn_pswt-1];
		sep();
		cout<<"List Hotel\n"<<endl;
		for (int j=0;j<tjn.kr.bnyk_htl_btg;j++)
		{
			cout<<"Hotel bintang "<<j+3<<endl;
			cout<<"Nama Hotel\t\tharga(per malam)"<<endl;
			for (int i=0;i<tjn.kr.bnyk_htl_btg_5;i++)
				{
				cout <<" "<<i+1<<"."<< tjn.kr.htl_btg[j][i]<<"\t" << hrg.kr_htl_btg[j][i]<<endl;
				};
			cout<<endl;
			
		};
		cout<<"\nPilih Bintang :\n 1.Bintang 3\n 2.Bintang 4\n 3.Bintang 5 ";
		pil();
		int plhn_btg;
		cin>>plhn_btg;
		cout<<"Pilih Hotel :";
		pil();
		int plhn_htl;
		cin>>plhn_htl;
		cout<<"Berapa malam :";
		int brpmlm;
		cin>>brpmlm;
		int hrg_htl=hrg.kr_htl_btg[plhn_btg-1][plhn_htl-1]*brpmlm;
		sep();
		cout<<"Pilih wisata\tHarga\n";
		for (int i=0;i<tjn.kr.bnyk_wst;i++)
			cout<<" "<<i+1<<"."<<tjn.kr.wst[i]<<"\t"<<hrg.kr_wst[i]<<endl;
		cout<<"Pilih Banyak Wisata :";
		int pil_bnyk_wst,pil_wst;
		cin >>pil_bnyk_wst;
		int hrg_wst=0;
		for (int i=0;i<pil_bnyk_wst;i++)
		{
		
			pil();
			
			cin>> pil_wst;
			hrg_wst=hrg_wst+hrg.kr_wst[pil_wst-1];
		
		};
		sep();
		cout<<"\t\t   List Pilihan"<<endl;
		cout<<"\t\tNama\t\t\tHarga"<<endl;
		cout<<"Negara\t\t"<<plhn_ngr<<endl;
		cout<<"Pesawat\t\t"<<tjn.kr.kls_pswt[plhn_pswt-1]<<"\t\t\t"<<hrg_plhn_pswt<<endl;
		cout<<"Hotel("<<brpmlm<<" malam)\t"<<tjn.kr.htl_btg[plhn_btg-1][plhn_htl-1]<<"\t"<<hrg_htl<<endl;
		cout<<"Wisata\t\t\t\t\t"<<hrg_wst<<endl;
		sep();
		cout<<"harga tiket satuan :\t\t\t"<<hrg_plhn_pswt+hrg_htl+hrg_wst<<endl;
		cout<<"harga tiket total(orang ="<<brporg<<")  :\t\t"<<(hrg_plhn_pswt+hrg_htl+hrg_wst)*brporg<<endl;
		
	}
	cout<<endl;
	cout<< "Ulangi Program ?(jika iya pilih y) : ";
	string ulang;
	cin>> ulang;

	if (ulang =="y" || ulang =="Y")
	{
		
		system("CLS");
		goto Program;
		
	}
	else
	{
	 exit;
	};
	

return 0;
}

