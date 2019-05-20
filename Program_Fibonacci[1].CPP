#include<stdio.h>
#include<iostream.h>
#include<conio.h>

void main()
{

char NilaiHuruf,Nama[30];
int Nilai,NMid,NFinal,TtlMid,TtlFinal,TtlTugas,n,jmlh=0;

int i=1;
atas:

   cout<<" Masukan Nama Mahasiswa : ";cin>>Nama;

   do
   {
   cout<<"Nilai Tugas  : "<< i <<" = "; cin>>Nilai;
   jmlh = jmlh+Nilai;
   i++;
   }

   while(i<5);

   cout<<"Masukan Nilai Mid Mahasiswa : ";cin>>NMid;
   cout<<"Masukan Nilai Final Mahasiswa : ";cin>>NFinal;
   TtlTugas = 0.3 *jmlh/5 ;
   TtlMid = 0.3 * NMid;
   TtlFinal = 0.4*NFinal;

   n=TtlTugas+TtlMid+TtlFinal;

   if ((n>=80) && (n<=100))

     	NilaiHuruf = 'A';

   	else
      if
      	((n>=70) && (n<=79))

         NilaiHuruf = 'B';

         else
         if
         	 ((n>=60) && (n<=69))

   				NilaiHuruf='C';
   		else
     	 if

      	((n>=50) && (n<=59))

         NilaiHuruf = 'D';

         else
         if
         	(n<50)

            NilaiHuruf='E';


   cout<<endl;


   cout<<" Menghitung Total Nilai Akhir Mahasiswa \n";
   cout<<"=========================================\n";
   cout<<"Nama Mahasiswa : "<<Nama<<endl;
   cout<<"Nilai Tugas  : "<<TtlTugas<<endl;
   cout<<"Nilai Mid  : "<<TtlFinal<<endl;
   cout<<"Nilai Final  : "<<TtlFinal<<endl;
   cout<<"Nilai Akhir Mahasiswa  :"<<n<<endl;
   cout<<"Nilai Huruf : "<<NilaiHuruf<<endl;

   getch();

}

