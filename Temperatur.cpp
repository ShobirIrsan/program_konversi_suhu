#include <iostream>
#include <conio.h>
using namespace std;
//prototype fungsi
float CTOF(float nilai);
float CTOR(float nilai);
float CTOK(float nilai);
float FTOC(float nilai);
float FTOR(float nilai);
float FTOK(float nilai);
float RTOC(float nilai);
float RTOF(float nilai);
float RTOK(float nilai);
float KTOC(float nilai);
float KTOF(float nilai);
float KTOR(float nilai);

int main(){
    bool syarat = 1;
    float fahrenheit,celcius,kelvin, reamur;
    float temperatur;
    int pilihan;
	while(syarat==1){
		cout<<"-----------------------------------"<<endl;
    	cout<<"-------Konversi Temperature--------"<<endl;
    	cout<<"-----------------------------------"<<endl;
    	cout<<"1. Celcius"<<endl;
		cout<<"2. Fahrenheit"<<endl;
		cout<<"3. Reamur"<<endl;    	
		cout<<"4. Kelvin"<<endl;
		cout<<"0. Selesai"<<endl;
		cout<<"-----------------------------------"<<endl;
		cout<<endl<<"Pilihan: ";		
		cin>>pilihan;
		if(pilihan==1){
			cout<<"-------------------------------------------"<<endl;
    		cout<<"-------Konversi Temperature Celcius--------"<<endl;
    		cout<<"-------------------------------------------"<<endl;
    		cout<<endl<<"Temperatur Celcius: ";
    		cin>>temperatur;
			fahrenheit = CTOF(temperatur);
			reamur = CTOR(temperatur);
			kelvin = CTOK(temperatur);
			cout<<"Hasil :"<<endl;
			cout<<endl<<"	Fahrenheit = "<<fahrenheit;
			cout<<endl<<"	Reamur = "<<reamur;
			cout<<endl<<"	Kelvin = "<<kelvin;
			cout<<"\n-------------------------------------------"<<endl;
			cout<<"\nTekan sembarang tombol: \n";getch();
		}
		else if(pilihan==2){
			cout<<"----------------------------------------------"<<endl;
    		cout<<"-------Konversi Temperature Fahrenheit--------"<<endl;
    		cout<<"----------------------------------------------"<<endl;
    		cout<<endl<<"Temperatur Fahrenheit: ";
    		cin>>temperatur;
			celcius = FTOC(temperatur);
			reamur = FTOR(temperatur);
			kelvin = FTOK(temperatur);
			cout<<"Hasil :"<<endl;
			cout<<endl<<"	celcius = "<<celcius;
			cout<<endl<<"	Reamur = "<<reamur;
			cout<<endl<<"	Kelvin = "<<kelvin;
			cout<<"\n-------------------------------------------"<<endl;
			cout<<"\nTekan sembarang tombol: \n";getch();
		}
		else if(pilihan==3){
			cout<<"----------------------------------------------"<<endl;
    		cout<<"-------Konversi Temperature Reamur--------"<<endl;
    		cout<<"----------------------------------------------"<<endl;
    		cout<<endl<<"Temperatur Reamur: ";
    		cin>>temperatur;
			celcius = RTOC(temperatur);
			fahrenheit = RTOF(temperatur);
			kelvin = RTOK(temperatur);
			cout<<"Hasil :"<<endl;
			cout<<endl<<"	celcius = "<<celcius;
			cout<<endl<<"	Fahrenheit = "<<fahrenheit;
			cout<<endl<<"	Kelvin = "<<kelvin;
			cout<<"\n-------------------------------------------"<<endl;
			cout<<"\nTekan sembarang tombol: \n";getch();
		}
		else if(pilihan==4){
			cout<<"----------------------------------------------"<<endl;
    		cout<<"-------Konversi Temperature Kelvin--------"<<endl;
    		cout<<"----------------------------------------------"<<endl;
    		cout<<endl<<"Temperatur Kelvin: ";
    		cin>>temperatur;
			celcius = KTOC(temperatur);
			fahrenheit = KTOF(temperatur);
			reamur = KTOR(temperatur);
			cout<<"Hasil :"<<endl;
			cout<<endl<<"	celcius = "<<celcius;
			cout<<endl<<"	Fahrenheit = "<<fahrenheit;
			cout<<endl<<"	Reamur = "<<reamur;
			cout<<"\n-------------------------------------------"<<endl;
			cout<<"\nTekan sembarang tombol: \n";getch();
		}
		else if(pilihan==0){
			syarat=0;
		} 	
    }
    cout<<"-------------Terimakasih-----------------"<<endl;
}

//--------------------------- C----------------------
float CTOF(float nilai){
    float hasil;
    hasil = (nilai*1.8) + 32;
    return hasil;
}
//konversi C to R
float CTOR(float nilai){
    float hasil;
    hasil = nilai*0.8;
    return hasil;
}
//konversi C to K
float CTOK(float nilai){
    float hasil;
    hasil = nilai + 273.15;
    return hasil;
}
//------------------------------C  end---------------------

//----------------------------- R ------------------------
float RTOC(float nilai){
    float hasil;
    hasil = nilai/0.8;
    return hasil;
}

float RTOF(float nilai){
    float hasil;
    hasil = (nilai*2.25) + 32;
    return hasil;
}

float RTOK(float nilai){
    float hasil;
    hasil = (nilai/0.8) + 273.15;
    return hasil;
}
//-------------------------- R end ----------------------------

//-------------------------- F ---------------------------------
float FTOC(float nilai){
    float hasil;
    hasil = (nilai-32)/1.8;
    return hasil;
}

float FTOK(float nilai){
    float hasil;
    hasil = (nilai + 459.67) / 1.8;
    return hasil;
}

float FTOR(float nilai){
    float hasil;
    hasil = (nilai - 32) / 0.44;
    return hasil;
}
// ------------------------ F end ---------------------------

//-------------------------- K ------------------------------
float KTOC(float nilai){
    float hasil;
    hasil = nilai - 273.15;
    return hasil;
}

float KTOF(float nilai){
    float hasil;
    hasil = (nilai * 1.8) - 459.67;
    return hasil;
}

float KTOR(float nilai){
    float hasil;
    hasil = (nilai - 273.15) * 0.8;
    return hasil;
}
