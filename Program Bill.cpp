/* 
	Nama	: Tubagus Dinda Maulid
	NIM		: 118140087
	IF 		: B
	Program	: Aplikasi Bill Rumah Kayu Itera
*/
#include <iostream>
#include <conio.h>



using namespace std;

void opening();										//mendeklarasi fungsi dengan nama fungsi opening()

void opening() {									//fungsi opening
	
	cout<<"(*)(*)(*)(*)(*)(*)(*)(*)(*)(*)(*)(*)(*)(*)(*)(*)(*)(*)(*)(*)(*)(*)(*)(*)(*)(*)\n";
	cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
	cout<<"|  #                #  ######  #       #######  #######  ###    ###  ######  |\n";
	cout<<"|   #       #      #   #       #       #        #     #  #  #  #  #  #       |\n";
	cout<<"|    #     ##     #    ######  #       #        #     #  #   ##   #  ######  |\n";
	cout<<"|     #   #  #   #     #       #       #        #     #  #        #  #       |\n";
	cout<<"|      ###    ###      ######  ####### #######  #######  #        #  ######  |\n";
	cout<<"|\t\t\t\t\t\t\t\t\t     |\n";
	cout<<"|\t\t\t    TO RUMAH KAYU ITERA\t\t\t     |\n";
	cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
	cout<<"(*)(*)(*)(*)(*)(*)(*)(*)(*)(*)(*)(*)(*)(*)(*)(*)(*)(*)(*)(*)(*)(*)(*)(*)(*)(*)\n";
								//digunakan untuk tetap menampilkan output di layar
}

int main ()
{
	int p,m,mi,d,pm,pmi,pd,hm,hmi,hd,tm,tmi,td,t; //deklarasi variabel yang digunakan, menggunakan singkatan untuk mempersimple
	int meja;
	string makanan[8] = {"Rendang","Ikan Bakar","Sambel Udang","Cumi Hitam","Telur Rebus","Jamur Crispy","Sop Iga","None"};                                    
    string minuman[6] = {"Coffee","Iced Tea","Mineral Water","Orange Juice","Avocado Juice ","None"};              							//deklarasi array
    string dessert[4] = {"Cake","Ice Cream","Brownies","None"}; 
    
	opening();
	cout<<"Nomor Meja Anda : ";                                                  
	cin>>meja;  

	      
menu:                                          
	cout<<"\t\t\t____________________________________________________________\n\n";
	cout<<"\t\t\t                ***********[ M E N U ]***********               \n";      
	cout<<"\t\t\t____________________________________________________________\n\n";
	cout<<"\t\t\t		[1] Makanan      \n";                                            
	cout<<"\t\t\t		[2] Minuman	     \n";                                           
	cout<<"\t\t\t		[3] Dessert      \n";                                          
	cout<<"\t\t\t____________________________________________________________\n\n";
	cout<<"Q: Masukan pilihanmu = ";
	cin>>p;   		//p adalah variabel untuk pilihan    
	
	if (p==1){							//memulai percabangan if dengan kondisi pilihan 1			
menu1:                                  //label untuk pengembalian                    
	cout<<"\t\t\t____________________________________________________________\n\n";
	cout<<"\t\t\t             ***********[ M A K A N A N ]***********        \n"; 
	cout<<"\t\t\t____________________________________________________________\n\n\n";
    cout<<"\t\t\t    1) Rendang.......................... Rp. 30.000,-\n";          
    cout<<"\t\t\t    2) Ikan Bakar ...................... Rp. 35.000,-\n";          
    cout<<"\t\t\t    3) Sambel Udang..................... Rp. 45.000,-\n";          
    cout<<"\t\t\t    4) Cumi Hitam ...................... Rp. 25.000,-\n";          
    cout<<"\t\t\t    5) Telur Rebus...................... Rp. 10.000,-\n"; 
	cout<<"\t\t\t    6) Jamur Crispy..................... Rp. 15.000,-\n";
	cout<<"\t\t\t    7) Sop Iga.......................... Rp. 50.000,-\n";         
    cout<<"\t\t\t    8) None \n\n";                                                 
    cout<<"\t\t\t____________________________________________________________\n";
    
	cout<<"\nQ: Masukan Angka Makanan Yang Akan Anda Pesan =  ";
    cin>>pm;						//pm adalah variabel untuk pilihan makanan

    if(pm==1){                      //memulai percabangan if dalam percabangan untuk kondisi 1                                    
        hm=30000;                   //hm adalah variabel untuk harga per makanan                                        
        cout<<"\nQ: Mau berapa? ";                                   
        cin>>m;}                    //m adalah variabel untuk kuantitas per makanan                                         

        else if(pm==2){             //percabangan untuk kondisi 2                                        
        hm=35000;                                                         
        cout<<"\nQ: Mau berapa? ";                                   
        cin>>m;}                                                             

        else if(pm==3){             //percabangan untuk kondisi 3                                       
        hm=45000;                                                           
        cout<<"\nQ: Mau berapa? ";                                   
        cin>>m;}                                                             

        else if(pm==4){             //percabangan untuk kondisi 4                                       
        hm=25000;                                                            
        cout<<"\nQ: Mau berapa? ";                                   
        cin>>m;}                                                             

        else if(pm==5){            //percabangan untuk kondisi 5                                         
        hm=10000;                                                          
        cout<<"\nQ: Mau berapa? ";                                   
        cin>>m;}                                                             

        else if(pm==6){            //percabangan untuk kondisi 6                                      
        hm=15000;  
		cout<<"\nQ: Mau berapa? ";                                   
        cin>>m;} 
        
		else if(pm==7){            //percabangan untuk kondisi 7                                      
        hm=50000;  
		cout<<"\nQ: Mau berapa? ";                                   
        cin>>m;}   
		
		else if(pm==8){
        hm=0;
        m=1;  }                                                                                                                   

        else if(pm!=1||2||3||4||5||6||7||8 ){                     //percabangan untuk kondisi terakhir                              
        cout<<"\nMaaf Menu Makanan Tidak Tersedia. Silahkan Memilih Kembali!\n"; 
		getch();
		system("cls");
		goto menu1;                 //perintah untuk kembali ke menu1                                                                    
        }
        
		tm=m*hm;					//tm adalah variabel untuk total harga makanan dengan mengalikan m dan hm
		
			switch(pm){             //percabangan switch untuk memunculkan array makanan yang dipesan beserta tm                                        
        		case 1:cout<<"\n\nAnda Memilih "<<"("<<m<<")"<<" "<<makanan[0]<<"	=> Rp."<<hm<<" x "<<m<<" = Rp."<<tm<<endl; break;
        		case 2:cout<<"\n\nAnda Memilih "<<"("<<m<<")"<<" "<<makanan[1]<<"	=> Rp."<<hm<<" x "<<m<<" = Rp."<<tm<<endl; break;
        		case 3:cout<<"\n\nAnda Memilih "<<"("<<m<<")"<<" "<<makanan[2]<<"	=> Rp."<<hm<<" x "<<m<<" = Rp."<<tm<<endl; break;
        		case 4:cout<<"\n\nAnda Memilih "<<"("<<m<<")"<<" "<<makanan[3]<<"	=> Rp."<<hm<<" x "<<m<<" = Rp."<<tm<<endl; break;
       			case 5:cout<<"\n\nAnda Memilih "<<"("<<m<<")"<<" "<<makanan[4]<<"	=> Rp."<<hm<<" x "<<m<<" = Rp."<<tm<<endl; break;
        		case 6:cout<<"\n\nAnda Memilih "<<"("<<m<<")"<<" "<<makanan[5]<<"	=> Rp."<<hm<<" x "<<m<<" = Rp."<<tm<<endl; break;
        		case 7:cout<<"\n\nAnda Memilih "<<"("<<m<<")"<<" "<<makanan[6]<<"	=> Rp."<<hm<<" x "<<m<<" = Rp."<<tm<<endl; break;
        		case 8:cout<<"\n\nAnda Memilih "<<"("<<m<<")"<<" "<<makanan[7]<<"	=> Rp."<<hm<<" x "<<m<<" = Rp."<<tm<<endl; break;
   			}
	goto menu2;
	}

	else if(p==2){                                                                       
menu2:                                                                                    
    cout<<"\n\n\t\t\t____________________________________________________________\n\n";
    cout<<"\t\t\t       ***********[ M I N U M A N ]***********          \n";         
    cout<<"\t\t\t____________________________________________________________\n\n\n";
    cout<<"\t\t\t    1) Coffee _ _ _ _ _ _ _ _ _ _ _ _ _ Rp. 30.000,-\n";                
    cout<<"\t\t\t    2) Iced Tea _ _ _ _ _ _ _ _ _ _ _ _ Rp. 15.000,-\n";                
    cout<<"\t\t\t    3) Mineral Water _ _ _ _ _ _ _ _ _  Rp. 10.000,-\n";                
    cout<<"\t\t\t    4) Orange Juice _ _ _ _ _ _ _ _ _ _ Rp. 28.000,-\n";                
    cout<<"\t\t\t    5) Avocado Juice _ _ _ _ _ _ _ _  _ Rp. 30.000'-\n";                
    cout<<"\t\t\t    6) None \n\n";
    cout<<"\t\t\t____________________________________________________________\n";

	cout<<"\nQ: Masukan Angka Minuman Yang Akan Anda Pesan =  "; 
    cin>>pmi;

    	if(pmi==1){               
		hmi=30000;    
        cout<<"\nQ: Mau Berapa? "; 
        cin>>mi;}                                                                

        else if(pmi==2){                                                         
        hmi=15000;                                                               
        cout<<"\nQ: Mau Berapa? ";                                    
        cin>>mi;}                                              

        else if(pmi==3){                                              
        hmi=10000;                                             
        cout<<"\nQ: Mau Berapa? ";                                    
        cin>>mi;}                                              

        else if(pmi==4){                                              
        hmi=28000;                                             
        cout<<"\nQ: Mau Berapa? ";                                    
        cin>>mi;}                                              

        else if(pmi==5){                                              
        hmi=30000;                                             
        cout<<"\nQ: Mau Berapa? ";                                    
        cin>>mi;}                                              

        else if(pmi==6){
        hmi=0;
        mi=1;
		 }                                            
        
        else if(pmi!=1||2||3||4||5||6){                                                       
        cout<<"\nMaaf Menu Minuman Tidak Tersedia. Silahkan Memilih Kembali\n"; 
        getch();
		system("cls");
		goto menu2;
        }
        
		tmi=hmi*mi;                                                       

    		switch(pmi){                                                       
    			case 1:cout<<"\n\nAnda Memilih "<<"("<<mi<<")"<<" "<<minuman[0]<<"	=> Rp."<<hmi<<" x "<<mi<<" = Rp."<<tmi<<endl; break;
    			case 2:cout<<"\n\nAnda Memilih "<<"("<<mi<<")"<<" "<<minuman[1]<<"	=> Rp."<<hmi<<" x "<<mi<<" = Rp."<<tmi<<endl; break;
   	 			case 3:cout<<"\n\nAnda Memilih "<<"("<<mi<<")"<<" "<<minuman[2]<<"	=> Rp."<<hmi<<" x "<<mi<<" = Rp."<<tmi<<endl; break;
    			case 4:cout<<"\n\nAnda Memilih "<<"("<<mi<<")"<<" "<<minuman[3]<<"	=> Rp."<<hmi<<" x "<<mi<<" = Rp."<<tmi<<endl; break;
    			case 5:cout<<"\n\nAnda Memilih "<<"("<<mi<<")"<<" "<<minuman[4]<<" 	=> Rp."<<hmi<<" x "<<mi<<" = Rp."<<tmi<<endl; break;
    			case 6:cout<<"\n\nAnda Memilih "<<"("<<mi<<")"<<" "<<minuman[5]<<" 	=> Rp."<<hmi<<" x "<<mi<<" = Rp."<<tmi<<endl; break;
			}getch();
        system("cls");
    goto menu3;                                                                          
	}
	
	else if(p==3){
menu3:                                                                               
    cout<<"\n\n\t\t\t____________________________________________________________\n\n";
    cout<<"\t\t\t         ***********[ D E S S E R T ]***********          \n";        
    cout<<"\t\t\t____________________________________________________________\n\n\n";
    cout<<"\t\t\t     1) Cake _ _ _ __ _ _ _ _ _ _ _ _ Rp. 24.000,-\n";                
    cout<<"\t\t\t     2) Ice Cream _ __ _ _ _ _ _ _ _ _Rp. 20.000,-\n";                
    cout<<"\t\t\t     3) Brownies _ _ _ _ _ _ _ _ _ _ _Rp. 27.000,-\n";                
    cout<<"\t\t\t     4) None \n\n";
    cout<<"\t\t\t____________________________________________________________\n";

	cout<<"\nQ: Masukan Angka Dessert Yang Akan Anda Pesan =  ";                                    
    cin>>pd;
	
		if(pd==1){                                                         
        hd=24000;                                                      
        cout<<"\nQ: Mau Berapa? ";                                     
        cin>>d;}                                                       

        else if(pd==2){                                                
        hd=20000;                                                      
        cout<<"\nQ: Mau Berapa? ";                                     
        cin>>d;}                                                       

        else if(pd==3){                                                
        hd=17000;                                                      
        cout<<"\nQ: Mau Berapa? ";                                     
        cin>>d;}                                                              

        else if(pd==4){                                                       
        hd=0;                                                                  
        d=1;}                                                                  

        else if(pd!=1||2||3||4){                                                      
        cout<<"\nMaaf Menu Dessert Tidak Tersedia. Silahkan Memilih Kembali!"; 
        getch();
		system("cls");
		goto menu3;                                                            
        }

        td=hd*d;      
		switch(pd){                                       
    			case 1:cout<<"\n\nAnda Memilih "<<"("<<d<<")"<<" "<<dessert[0]<<"  => Rp."<<hd<<" x "<<d<<" = Rp."<<td<<endl; break;
    			case 2:cout<<"\n\nAnda Memilih "<<"("<<d<<")"<<" "<<dessert[1]<<"  => Rp."<<hd<<" x "<<d<<" = Rp."<<td<<endl; break;
    			case 3:cout<<"\n\nAnda Memilih "<<"("<<d<<")"<<" "<<dessert[2]<<"  => Rp."<<hd<<" x "<<d<<" = Rp."<<td<<endl; break;
    			case 4:cout<<"\n\nAnda Memilih "<<"("<<d<<")"<<" "<<dessert[3]<<"  => Rp."<<hd<<" x "<<d<<" = Rp."<<td<<endl; break;
    			 }getch();
        system("cls");
	goto harga;                                                   
	}

else{                                  
    goto menu;    
	}

harga:                                 
	int TH1, TH2, kembalian, uang, di;   
	char diskon;
	cout<<"\n\n\n\n\t\t\tDiskon kode kartu member: \n";
	cout<<"\t\t\t1. G (gold) 	= 30%\n";
	cout<<"\t\t\t2. S (silver)	= 20%\n";
	cout<<"\t\t\t3. P (perak)	= 10%\n";
	getch();
	system("cls");                                 

	cout<<"\t\t\t____________________________________________________________\n\n";
	cout<<"\t\t\t             ***********[ B I L L ]***********          \n";        
	cout<<"\t\t\t____________________________________________________________\n\n";
	cout<<"\t\t\tNomor Meja Anda: "<<meja<<endl;                            

			switch(pm){                                                   
        		case 1:cout<<"\t\t\t\t\t"<<"("<<m<<")"<<" "<<makanan[0]<<"	=> Rp."<<hm<<" x "<<m<<" = Rp."<<m*hm<<endl; break;
        		case 2:cout<<"\t\t\t\t\t"<<"("<<m<<")"<<" "<<makanan[1]<<"	=> Rp."<<hm<<" x "<<m<<" = Rp."<<m*hm<<endl; break;
        		case 3:cout<<"\t\t\t\t\t"<<"("<<m<<")"<<" "<<makanan[2]<<"	=> Rp."<<hm<<" x "<<m<<" = Rp."<<m*hm<<endl; break;
        		case 4:cout<<"\t\t\t\t\t"<<"("<<m<<")"<<" "<<makanan[3]<<"	=> Rp."<<hm<<" x "<<m<<" = Rp."<<m*hm<<endl; break;
       			case 5:cout<<"\t\t\t\t\t"<<"("<<m<<")"<<" "<<makanan[4]<<"	=> Rp."<<hm<<" x "<<m<<" = Rp."<<m*hm<<endl; break;
        		case 6:cout<<"\t\t\t\t\t"<<"("<<m<<")"<<" "<<makanan[5]<<"	=> Rp."<<hm<<" x "<<m<<" = Rp."<<m*hm<<endl; break;
        		case 7:cout<<"\t\t\t\t\t"<<"("<<m<<")"<<" "<<makanan[6]<<"	=> Rp."<<hm<<" x "<<m<<" = Rp."<<m*hm<<endl; break;
        	
   			}
   			
            if(p!=1){                                                                  
            tm=0;                                                                           
            TH1=tmi+td;}                                                             

   			else if(p!=1&&p!=2){                                           
			tm=tmi=0;                                                                
			TH1=td;}                                                            

			else{                                                                   
			TH1=tm+td+tmi;} 
			                                                    
			switch(pmi){                                                       
    			case 1:cout<<"\t\t\t\t\t"<<"("<<mi<<")"<<" "<<minuman[0]<<"	=> Rp."<<hmi<<" x "<<mi<<" = Rp."<<tmi<<endl; break;
    			case 2:cout<<"\t\t\t\t\t"<<"("<<mi<<")"<<" "<<minuman[1]<<"	=> Rp."<<hmi<<" x "<<mi<<" = Rp."<<tmi<<endl; break;
   	 			case 3:cout<<"\t\t\t\t\t"<<"("<<mi<<")"<<" "<<minuman[2]<<"	=> Rp."<<hmi<<" x "<<mi<<" = Rp."<<tmi<<endl; break;
    			case 4:cout<<"\t\t\t\t\t"<<"("<<mi<<")"<<" "<<minuman[3]<<"	=> Rp."<<hmi<<" x "<<mi<<" = Rp."<<tmi<<endl; break;
    			case 5:cout<<"\t\t\t\t\t"<<"("<<mi<<")"<<" "<<minuman[4]<<"	=> Rp."<<hmi<<" x "<<mi<<" = Rp."<<tmi<<endl; break;
    		
			}
			if(p!=1){                                                                  
            tm=0;                                                                           
            TH1=tmi+td;}                                                             

   			else if(p!=1&&p!=2){                                           
			tm=tmi=0;                                                                
			TH1=td;}                                                                

			else{                                                                   
			TH1=tm+td+tmi;} 
			
			switch(pd){                                       
    			case 1:cout<<"\t\t\t\t\t"<<"("<<d<<")"<<" "<<dessert[0]<<"	=> Rp."<<hd<<" x "<<d<<" = Rp."<<td<<endl; break;
    			case 2:cout<<"\t\t\t\t\t"<<"("<<d<<")"<<" "<<dessert[1]<<"	=> Rp."<<hd<<" x "<<d<<" = Rp."<<td<<endl; break;
    			case 3:cout<<"\t\t\t\t\t"<<"("<<d<<")"<<" "<<dessert[2]<<"	=> Rp."<<hd<<" x "<<d<<" = Rp."<<td<<endl; break;
    		
    		}
    			 
    		if(p!=1&&p!=2){                                                  
			tm=tmi=0;                                                                        
			TH1=td;}                                                                

			else{                                                                           
			TH1=tm+td+tmi;}                                                          


	cout<<"\n\t\t\tHarga Total\t\t\t\t\t= Rp."<<TH1<<endl<<endl;
	cout<<"\t\t\tMasukkan kode kartu = ";
	cin>>diskon;
	getch();
	
	switch (diskon) {
		case 'G':
		case 'g':
			di = TH1*0.3;
			cout<<"\t\t\tDiskon = "<<di<<endl;
			TH2 = TH1-di;
			cout<<"\t\t\tTotal Pembayaran\t\t\t\t	= "<<"Rp."<<TH2;
			cout<<"\n\t\t\tUang Pelanggan\t\t\t\t\t	= "<<"Rp.";cin>>uang;
			kembalian=uang-TH2;
			break;
	
		case 'S':
		case 's':
			di = TH1*0.2;
			cout<<"\t\t\tDiskon = "<<di<<endl;
			TH2 = TH1-di;
			cout<<"\t\t\tTotal Pembayaran\t\t\t\t	= "<<"Rp."<<TH2;
			cout<<"\n\t\t\tUang Pelanggan\t\t\t\t\t	= "<<"Rp.";cin>>uang;
			kembalian=uang-TH2;
			break;
			
		case 'P':
		case 'p':
			di = TH1*0.1;
			cout<<"\t\t\tDiskon = "<<di<<endl;
			TH2 = TH1-di;
			cout<<"\t\t\tTotal Pembayaran\t\t\t\t	= "<<"Rp."<<TH2;
			cout<<"\n\t\t\tUang Pelanggan\t\t\t\t\t	= "<<"Rp.";cin>>uang;
			kembalian=uang-TH2;
			break;
		
		default :
			cout<<"\t\t\t*Anda tidak mendapatkan diskon :(*";
			cout<<"\n\t\t\tTotal Pembayaran\t\t\t\t= "<<"Rp."<<TH1;
			cout<<"\n\t\t\tUang Pelanggan\t\t\t\t\t= "<<"Rp.";cin>>uang;
			kembalian=uang-TH1;
	}
	
	cout<<"\t\t\tKembalian\t\t\t\t\t= "<<"Rp."<<kembalian<<endl;
	cout<<"\n\t\t\t\tTerima kasih telah berbelanja di Rumah Kayu Itera\n";
	cout<<"\t\t\t\t\tSemoga harimu menyenangkan\n";
	
	system("pause");
	return 0;
}
