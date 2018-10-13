	/*
	*---------------------------------------*
	*                                       *
	* Aplikasi Bangun Datar                 *
	* Dibuat Oleh : Patriot Kusuma Sejati   *
	* Kelas       : 18-S1IF-01              *
	* NIM         : 18.11.1819              *
	*                                       *
	*---------------------------------------*
*/

#include <iostream>

using namespace std;


int main()
{

	double sisi_a, sisi_b, r, tinggi, angka;
	char yt;
	double phi = 3.14f;
	double diameter, keliling, luas;
	
	awal:
	system("cls");
	system("color 9");
	cout << "+=======================================+" <<endl;
	cout << "| Aplikasi Penghitung Luas dan Keliling |" << endl;
	cout << "+=======================================+" << endl;
	cout << "  => made by : Patriot Kusuma Sejati <=  " << endl;
	cout << "             => 18-S1IF-01 <=            " << endl;
	cout << "             => 18.11.1819 <=            " << endl;
	cout << "                  V 1.2                  " << endl;
	cout << "<=======================================>" << endl<<endl <<endl;

	
	cout << " => 1. Keliling dan Luas Lingkaran       " << endl;
	cout << " => 2. Keliling dan Luas Segitiga        " << endl;
	cout << " => 3. About                             " << endl;
	cout << " => 4. Exit                              " << endl;
	cout << "Masukan Pilihan anda = ";
	cin >> angka;

	// keliling dan luas lingkaran
	if (angka == 1) 
	{
		//menu awal keliling dan luas lingkaran
		lingkaran : //digunakan jika ingin mengulangi keliling dan luas
		system("cls");
		cout << "+---------------------------------------+" << endl;
		cout << "|        =>  SELAMAT DATANG!!  <=       |"<<endl;
		cout << "|---------------------------------------|" << endl;
		cout << "|      Keliling dan Luas Lingkaran      |"<<endl<<endl;
		cout << " => 1. Keliling Lingkaran" << endl;
		cout << " => 2. Luas Lingkaran" << endl <<endl;
		cout << " Masukan Pilihan Anda = ";
		cin >> angka;

		//keliling lingkaran
		if (angka == 1)
		{
			keliling_lingkaran: //digunakan jika ingin mengulangi keliling lingkaran
			system("cls");
			cout << "+---------------------------------------+" << endl;
			cout << "|        =>  SELAMAT DATANG!!  <=       |" << endl;
			cout << "|---------------------------------------|" << endl;
			cout << "|+++++++++ Keliling  Lingkaran +++++++++|" << endl << endl;
			cout << " Masukan Jari-Jari Lingkaran = ";
			cin >> r;

			//rumus keliling lingkaran start
			diameter = r * 2;
			keliling = phi * diameter;
			//rumus keliling lingkaran end


			cout << " => Diameter Lingkaran adalah " << diameter << endl;
			cout << " => Keliling Lingkaran adalah " << keliling << endl << endl;

			//perintah untuk ke menu luas lingkaran
			cout << "Apakah anda tertarik \nuntuk menghitung luas lingkaran? [y/t]";
			cin >> yt;

			//logic jika "y"
			if (yt == 'y' || yt == 'Y')
			{
				goto luas_lingkaran;
			}

			//logic jika "t"
			else if (yt == 't' || yt == 'T') 
			{
				goto ulang_lingkaran;
			}

			//logic jika salah
			else
			{
				system("cls");
				cout << "Maaf yang anda masukkan salah!!!!" << endl;
				cout << "Tekan Enter untuk mengulangi...." << endl<<endl;
				system("pause");
				goto lingkaran;
			}
		}

		//luas lingkaran
		if (angka == 2)
		{
			luas_lingkaran: //digunakan jika ingin mengulangi luas lingkaran saja
			system("cls");
			cout << "+---------------------------------------+" << endl;
			cout << "|        =>  SELAMAT DATANG!!  <=       |" << endl;
			cout << "|---------------------------------------|" << endl;
			cout << "|+++++++++++ Luas  Lingkaran +++++++++++|" << endl << endl;
			cout << " Masukan Jari-Jari Lingkaran = ";
			cin >> r;
			
			//rumus luas lingkaran start
			diameter = r * 2;
			keliling = phi * diameter;
			luas = phi * r * r;
			//rumus luas lingkaran end

			cout << " => Diameter Lingkaran adalah " << diameter << endl;
			cout << " => Keliling Lingkaran adalah " << keliling << endl;
			cout << " => Luas Lingkaran adalah " << luas << endl << endl;

			//perintah untuk ke menu keliling lingkaran
			cout << "Apakah anda tertarik \nuntuk menghitung keliling lingkaran saja? [y/t] ";
			cin >> yt;

			//logic jika "y"
			if (yt == 'y' || yt == 'Y')
			{
				goto keliling_lingkaran;
			}

			//logic jika "t"
			else if (yt == 't' || yt == 'T')
			{
				goto ulang_lingkaran;
			}

			//logic jika salah
			else
			{
				system("cls");
				cout << "Maaf yang anda masukkan salah!!!!" << endl;
				cout << "Tekan Enter untuk mengulangi...." << endl << endl;
				system("pause");
				goto lingkaran;
			}
			
		}

		//perintah pengulangan menu lingkaran
	ulang_lingkaran:
		cout << "Apakah andan ingin mengulangi lingkaran? [y/t] ";
		cin >> yt;

		//logic jika "y"
		if (yt == 'y' || yt == 'Y')
		{
			goto lingkaran;
		}

		//logic jika "t"
		else if (yt == 't' || yt == 'T')
		{
			goto lingkaran_end;
		}

		//logic jika salah
		else
		{
			system("cls");
			cout << "Maaf yang anda masukkan salah !!!!" << endl;
			goto ulang_lingkaran;
		}
		
		//perintah untuk kembali ke menu utama
	lingkaran_end:
		cout << "Apakah anda ingin kembali ke menu utama ? [y/t] ";
		cin >> yt;
		if (yt=='y' || yt=='Y')
		{
			goto awal;
		}
		if (yt == 't' || yt == 'T')
		{
			goto selesai;
		}
	}

	//operasi perhitungan segitiga
	else if (angka == 2)
	{
		//menu awal segitiga
	segitiga:
		system("cls");
		cout << "+---------------------------------------+" << endl;
		cout << "|        =>  SELAMAT DATANG!!  <=       |" << endl;
		cout << "|---------------------------------------|" << endl;
		cout << "|+++++++++ Keliling  Lingkaran +++++++++|" << endl << endl;
		cout << " => 1. Keliling Segitiga " << endl;
		cout << " => 2. Luas Segitiga" << endl;
		cout << " Masukan pilihan anda = " ;
		cin >> angka;
		if (angka == 1)
		{
			//keliling segitiga
			keliling_segitiga:
			system("cls");
			cout << "+---------------------------------------+" << endl;
			cout << "|        =>  SELAMAT DATANG!!  <=       |" << endl;
			cout << "|---------------------------------------|" << endl;
			cout << "|++++++++++ Keliling Segitiga ++++++++++|" << endl << endl;

			cout << "Masukan sisi bawah segitiga = ";
			cin >> sisi_a;
			cout << "Masukan sisi miring segitiga = ";
			cin >> sisi_b;
			keliling = sisi_a + sisi_b + sisi_b;
			cout << " => Keliling Segitiga adalah " << keliling << endl << endl;

			cout << "Apakah anda tertarik \nuntuk menghitung luas seigitga? [y/t] ";
			cin >> yt;
			if (yt=='y' || yt=='Y')
			{
				goto luas_segitiga;
			}
			else if (yt == 't' || yt == 'T')
			{
				goto ulang_segitiga;
			}
			else
			{
				cout << "Maaf yang anda masukan salah !!!! " << endl;
				cout << "tekan enter untuk mengulangi...." << endl << endl;
				system("pause");
				goto segitiga;
			}
		}
		
		else if (angka == 2)
		{
			//luas segitiga
			luas_segitiga:
			system("cls");
			cout << "+---------------------------------------+" << endl;
			cout << "|        =>  SELAMAT DATANG!!  <=       |" << endl;
			cout << "|---------------------------------------|" << endl;
			cout << "|++++++++++++ Luas Segitiga ++++++++++++|" << endl << endl;

			cout << "Masukan sisi bawah segitiga = ";
			cin >> sisi_a;
			cout << "Masukan tinggi segitiga = ";
			cin >> tinggi;
			luas = (sisi_a * tinggi * 0.5);

			cout << " => Luas Segitiga adalah " << luas << endl << endl;

			cout << "Apakah anda tertarik \nuntuk menghitung keliling seigitga? [y/t] ";
			cin >> yt;
			if (yt == 'y' || yt == 'Y')
			{
				goto keliling_segitiga;
			}
			else if (yt == 't' || yt == 'T')
			{
				goto ulang_segitiga;
			}
			else
			{
				cout << "Maaf yang anda masukan salah !!!! " << endl;
				cout << "tekan enter untuk mengulangi...." << endl << endl;
				system("pause");
				goto segitiga;
			}
		}
		
		//pengulangan segitiga
		ulang_segitiga:
		cout << "Apakah anda ingin mengulangi segitiga? [y/t] ";
		cin >> yt;
		if (yt == 'y' || yt == 'Y')
		{
			goto segitiga;

		}
		if (yt == 't' || yt == 'T')
		{
			goto segitiga_end;
		}
		else
		{
			system("cls");
			cout << "Maaf yang anda masukkan salah !!!!" << endl;
			goto ulang_segitiga;
		}

		//perintah jika ingin kembali ke menu utama
	segitiga_end:
		cout << "Apakah anda ingin kembali ke menu utama ? [y/t] ";
		cin >> yt;
		if (yt == 'y' || yt == 'Y')
		{
			goto awal;
		}
		if (yt == 't' || yt == 'T')
		{
			goto selesai;
		}
	}

	//menu about
	else if (angka == 3)
	{
		system("cls");
		cout << "+==========================================================+" << endl;
		cout << "|          Selamat Datang Di Aplikasi Bangun Datar         |" << endl;
		cout << "+==========================================================+" << endl << endl;
		cout << " => Aplikaasi ini Dibuat oleh : Patriot Kusuma Sejati" << endl;
		cout << "       Aplikasi ini bisa digunakan untuk menghitung keliling" << endl;
		cout << " maupun luas bangun datar. Untuk  saat  ini  hanya  berfokus" << endl;
		cout << " pada luas dan keliling segitiga dan lingkaran. Namun, untuk" << endl;
		cout << " target kedepan,  saya  ingin  memasukan  semua  perhitungan" << endl;
		cout << " bangun datar." << endl;
		cout << "       Aplikasi ini dibuat untuk memenuhi tugas mata  kuliah" << endl;
		cout << " Algoritma dan Pemrograman di Universitas Amikom Yogyakarta." << endl << endl;

		//perintah untuk kembali ke menu utama
		cout << "Enter untuk kembali ke menu awal"<<endl;
		system("pause");
		goto awal;
	}
	
	//logic untuk keluar dari aplikasi
	// saat di menu utama
	else if (angka==4)
	{
		goto selesai;
	}
	else
	{
		system("cls");
		cout << "Maaf yang anda masukkan salah !!!!" << endl;
		system("pause");
		goto awal;
	}

	//template selesai
selesai:
	system("cls");
	cout << "&---------------------------------------------------&" << endl;
	cout << "+    Terima Kasih Telah Menggunakan Aplikasi Ini    +" << endl;
	cout << "+                  >> GOOD  BYE <<                  +" << endl;
	cout << "+          Made By : Patriot Kusuma Sejati          +" << endl;
	cout << "&---------------------------------------------------&" << endl;

	system("pause");
    return 0;
}
