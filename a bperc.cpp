#include <iostream> //Nama Umar Ibnu Zainal M
using namespace std; //NIM 311810909
void logika(int a,int b,int c,int ab)
{
	a=b/c;
	ab=b%c;
	cout<<"Nilai dari pecahan "<<b<<"/"<<c<<" adalah "<<a<<" "<<ab<<"/"<<c;
}

int main()
{
	int a,b,c,ab;
	cout<<"Masukan nilai pembilang : ";
	cin>>b;
	cout<<"Masukan nilai penyebut : ";
	cin>>c;
	logika(a,b,c,ab);
}
