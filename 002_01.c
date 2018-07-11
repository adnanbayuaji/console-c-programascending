/*PROGRAM ASCENDING*/
//mengurutkan sekumpulan bilangan secara ascending
#include <stdio.h>

main()
{
	/*DEKLARASI*/
	int n, i, m, A[100];		//n, i, m pencacah & A[] array
	int maks, posisi, temp;		//temporari untuk maks, posisi, dan penukar
	char opsi;					//variabel mengulang program
	do
	{
		/*DESKRIPSI*/	
		system("cls");						//membersihkan layar
		printf("PROGRAM ASCENDING\n\n");	//judul program
		printf("Berapa banyak angka? ");	
		scanf("%i", &n);					//masukkan nilai
		
		for(i=0; i<n; i++)					//untuk mengisi nilai
		{
			printf("Angka ke-%i : ", i+1);
			scanf("%i", &A[i]);
		}
		
		m=n;
		while(m>1)							//mengulangi untuk mengecek setelah ditukar
		{
			maks=A[0];						//inisialisasi maks
			posisi=0;						//inisialisasi posisi
			for(i=1; i<m; i++)				//pemindah indeks untuk dicek
			{
				if(A[i]>maks)				//syarat nilai maks berubah
				{
					maks=A[i];				//nilai maks berubah
					posisi=i;				//nilai posisi berubah
				}
			}
			temp=A[m-1];					//program penukaran
			A[m-1]=maks;
			A[posisi]=temp;
			m=m-1;
		}
		
		printf("Hasil pengurutan angka : ");
		for(i=0; i<n; i++)					//perulangan menampilkan
		{
			printf("%i ", A[i]);			//menampilkan tiap array
		}
		printf("\n\nUlangi[Y/T]? "); scanf("%s", &opsi);
	}
	while(opsi=='Y'||opsi=='y');			//'Y' untuk mengulangi
}
