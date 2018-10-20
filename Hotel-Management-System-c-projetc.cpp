#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdio.h>
#include<dos.h>
#include<cstdlib>
#include<windows.h>
#include<time.h>
#define ENTER 13
#define BKSPC 8
using namespace std;
class food
{
	protected:
		char ch;
		int total;
		int quantity,item,select,price;
		int b1,b2,b3,b4,b5,b6,b7,b8,b9,b10;
		int l1,l2,l3,l4,l5;
		int d1,d2,d3,d4,d5,d6;
	public:	
	food()
	{
		total=0,b1=0,b2=0,b3=0,b4=0,b5=0,b6=0,b7=0,b8=0,b9=0,b10=0;
		l1=0,l2=0,l3=0,l4=0,l5=0;
		d1=0,d2=0,d3=0,d4=0,d5=0,d6=0;
	}
int orderfood()
	{
		int choice;
		system("cls");
		cout<<"Welcome to the food section:"<<endl;
		cout<<"1)breakfast"<<endl;
		cout<<"2)lunch"<<endl;
		cout<<"3)dinner"<<endl;
		cout<<"4)Exit"<<endl;
		cout<<"Enter your desired choice:"<<endl;
		cin>>choice;
		switch(choice)
		{
		case 1:breakfast();break;
		case 2:lunch();break;	
		case 3:dinner();break;
		case 4:exit(1);
		break;
		default:cout<<"Invalid choice"<<endl;break;
	    }
}
void breakfast()
        {
			cout<<"Welcome to breakfast section:"<<endl<<endl;
			cout<<"ITEMS                                           PRICE"<<endl<<endl;
			cout<<"1)EGG SANDWICHES                                350/="<<endl;
			cout<<"2)SPECIAL TEA + CAKE RUSK                       150/="<<endl;
			cout<<"3)PIZZA PARATHA                                 200/="<<endl;
			cout<<"4)FEATHERLITE PANCAKE                           150/="<<endl;
			cout<<"5)STIFFED EGG                                   200/="<<endl;
			cout<<"6)FRENCH TOAST                                  250/="<<endl;
			cout<<"7)WHITE BREAD + MIX FRUIT JAM                   300/="<<endl;
			cout<<"8)GOLDEN APPLE OATMEAL                          350/="<<endl;
			cout<<"9)COFFEE CAKE                                   150/="<<endl;
			cout<<"10)SPECIAL CHEESE PARATHA WITH CHOCO SPREAD     400/="<<endl;
			
			cout<<"\tPress 0 for Bill"<<endl;
			while(1)
				{
					cout<<"\nSELECT any item you want: ";
					cin>>item;
					
					switch(item)
					{
						case 1:
						{
							cout<<"-you selected egg sandwiches-"<<endl;
							cout<<"Enter Quantity:\n\t";
							cin>>quantity;
							b1=quantity;
							break;
						}
						case 2:
						{
							cout<<"You selected special tea + cake rusk"<<endl;
							cout<<"enter quantity"<<endl;
							cin>>quantity;
							b2=quantity;
							break;
						}
						case 3:
						{
							cout<<"-you selected pizza paratha"<<endl;
							cout<<"Enter Quantity:"<<endl;
							cin>>quantity;
							b3=quantity;
							break;	
						}
						case 4:
						{
							cout<<"-you selected featherlite pancake"<<endl;
							cout<<"Enter Quantity:"<<endl;
							cin>>quantity;
							b4=quantity;
							break;
						}
						case 5:
						{
							cout<<"-you selected stiffed egg "<<endl;
							cout<<"Enter Quantity:"<<endl;
							cin>>quantity;
							b5=quantity;
							
							break;	
						}
						case 6:
						{
							cout<<"-you selected french toast"<<endl;
							cout<<"Enter Quantity:"<<endl;
							cin>>quantity;
							b6=quantity;
							
							break;		
						}
						case 7:
						{
							cout<<"-you selected white bread + mix fruit jam"<<endl;
							cout<<"Enter Quantity:"<<endl;
							cin>>quantity;
							b7=quantity;
							
							break;	
						}
						case 8:
						{
							cout<<"-you selected golden apple oatmeal"<<endl;
							cout<<"Enter Quantity:"<<endl;
							cin>>quantity;
							b8=quantity;
							
							break;	
						}
					    case 9:
						{
                            cout<<"-you selected coffee cake"<<endl;
							cout<<"Enter Quantity:"<<endl;
							cin>>quantity;
							b9=quantity;
							
							break;	
						}
						case 10:
						{
							cout<<"-you selected special cheese paratha with choco spread"<<endl;
							cout<<"Enter Quantity:"<<endl;
							cin>>quantity;
							b10=quantity;
							
							break;	
						}
						case 99:
							{
								system("cls");
								orderfood();
							break;
							}
						case 0:
							system("cls");
							foodbill();
							cout<<"\tPress any key to continue"<<endl;
							getch();
							system("cls");
							orderfood();
							break;									
						default:
						{
							cout<<"Invalid Choice"<<endl;
							break;
						}
					
				}
		
		}
}	
void foodbill()
{
	cout<<"**** FOOD BILL ****\n"<<endl;
	cout<<"YOUR BILL\nQuantity   Item\t  \t\t                               Price"<<endl;
		if(b1>0)
		{
			price=(b1*350);
			cout<<"    "<<b1<<"      Egg sandwiches                                       " <<price<<endl;
			total+=price;
		}
		if(b2>0)
		{
			price=(b2*150);
			cout<<"    "<<b2<<"      SPECIAL TEA + CAKE RUSK                              " <<price<<endl;
			total+=price;
		}
		if(b3>0)
		{
			price=(b3*200);
			cout<<"    "<<b3<<"      PIZZA PARATHA                                        " <<price<<endl;
			total+=price;
		}
		if(b4>0)
		{
			price=(b4*150);
			cout<<"    "<<b4<<"      FEATHERLITE PANCAKE                                  " <<price<<endl;
			total+=price;
		}
		if(b5>0)
		{
			price=(b5*200);
			cout<<"    "<<b5<<"      STIFFED EGG                                          " <<price<<endl;
			total+=price;
		}
		if(b6>0)
		{
			price=(b6*250);
			cout<<"    "<<b6<<"      FRENCH TOAST                                         " <<price<<endl;
			total+=price;
		}
		if(b7>0)
		{
			price=(b7*300);
			cout<<"    "<<b7<<"      WHITE BREAD + MIX FRUIT JAM                          " <<price<<endl;
			total+=price;
		}
		if(b8>0)
		{
			price=(b8*150);
			cout<<"    "<<b8<<"      GOLDEN APPLE OATMEAL                                 " <<price<<endl;
			total+=price;
		}
		if(b9>0)
		{
			price=(b9*150);
			cout<<"    "<<b9<<"      COFFEE CAKE                                          " <<price<<endl;
			total+=price;
		}
		if(b10>0)
		{
			price=(b10*400);
			cout<<"    "<<b10<<"      SPECIAL CHEESE PARATHA WITH CHOCO SPREAD             " <<price<<endl;
			total+=price;
		}
		if(l1>0)
		{
			price=(l1*150);
			cout<<"    "<<l1<<"      CHICKEN BIRYANI                                      " <<price<<endl;
			total+=price;
		}
		if(l2>0)
		{
			price=(l2*1250);
			cout<<"    "<<l2<<"      MUTTON KARAHI                                        " <<price<<endl;
			total+=price;
		}
		if(l3>0)
		{
			price=(l3*500);
			cout<<"    "<<l3<<"      SPECIAL NIHARI                                       " <<price<<endl;
			total+=price;
		}
		if(l4>0)
		{
			price=(l4*350);
			cout<<"    "<<l4<<"      SINGAPORIAN RICE + SAUCE                             " <<price<<endl;
			total+=price;
		}
		if(l5>0)
		{
			price=(l5*150);
			cout<<"    "<<l5<<"      MILKY ROTI                                           " <<price<<endl;
			total+=price;
		}
		if(d1>0)
		{
			price=(d1*400);
			cout<<"    "<<d1<<"      TIKKA + PARATHA + SAUCE                              " <<price<<endl;
			total+=price;
		}
		if(d2>0)
		{
			price=(d2*500);
			cout<<"    "<<d2<<"      MUTTON SAJJI + YOUGURT                               " <<price<<endl;
			total+=price;
		}
		if(d3>0)
		{
			price=(d3*200);
			cout<<"    "<<d3<<"      ZINGER BURGER                                        " <<price<<endl;
			total+=price;
		}
		if(d4>0)
		{
			price=(d4*150);
			cout<<"    "<<d4<<"      QUARTER BROAST                                       " <<price<<endl;
			total+=price;
		}
		if(d5>0)
		{
			price=(d5*150);
			cout<<"    "<<d5<<"      PIZZA LARGE                                          " <<price<<endl;
			total+=price;
		}
		if(d6>0)
		{
			price=(d6*150);
			cout<<"    "<<d6<<"      SHAWARMA                                             " <<price<<endl;
			total+=price;
		}
		cout<<endl;
		cout<<"Total Bill is: "<<total<<endl;
}
void lunch()
		{
				cout<<"Welcome to lunch section:"<<endl;
			 	cout<<"ITEMS                           PRICE"<<endl<<endl;
				cout<<"1)Chicken birynai               150/="<<endl;
				cout<<"2)mutton karahi                 1250/="<<endl;
				cout<<"3)special nahari                500/="<<endl;
				cout<<"4)Singaporian rice + sauce      350/="<<endl;
				cout<<"5)Milky Roti                    10/="<<endl;
				cout<<"\tPress '0' for bill:"<<endl;
			while(1)
			{
				cout<<"SELECT any item you want"<<endl;
				cin>>item;
					switch(item)
					{
						case 1:
						{
							cout<<"-you selected chiken biryani"<<endl;
							cout<<"Enter Quantity:"<<endl;
							cin>>quantity;
							l1=quantity;
							
							break;
						}	
						case 2:
						{
							cout<<"You selected mutton karahi"<<endl;
							cout<<"enter quantity"<<endl;
							cin>>quantity;
							l2=quantity;
							
							break;
						}
						case 3:
						{
							cout<<"-you selected special nahari"<<endl;
							cout<<"Enter Quantity:"<<endl;
							cin>>quantity;
							l3=quantity;
							
							break;	
						}
						case 4:
						{
							cout<<"-you selected singaporian rice + sauce"<<endl;
							cout<<"Enter Quantity:"<<endl;
							cin>>quantity;
							l4=quantity;
							
							break;
						}
						case 5:
						{
							cout<<"-you selected milky roti "<<endl;
							cout<<"Enter Quantity:"<<endl;
							cin>>quantity;
							l5=quantity;
							
							break;	
						}
						case 0:
							system("cls");
							foodbill();
							cout<<"\nPress any key to continue"<<endl;
							getch();
							system("cls");
							orderfood();
		        	}
		    }
	}
		
		
		void dinner()
		{
				cout<<"Welcome to dinner section"<<endl;
				cout<<"ITEMS                                    PRICE"<<endl<<endl;		
				cout<<"1)TIKKA + PARATHA + SAUCE                400/="<<endl;
				cout<<"2)MUTTON SAJJI + YOUGURT                 1500/="<<endl;
				cout<<"3)ZINGER BURGER                          200/="<<endl;
				cout<<"4)QUARTER BROAST                         300/="<<endl;
				cout<<"5)PIZZA LARGE                            999/="<<endl;
				cout<<"6)SHAWARMA                               150/="<<endl;
				cout<<"\tpress '0' for bill"<<endl;
			
			while(1)
			{
				cout<<"SELECT any item you want"<<endl;
				cin>>item;
					switch(item)
					{
						case 1:
						{
							cout<<"-you selected TIKKA + PARATHA + SAUCE"<<endl;
							cout<<"Enter Quantity:"<<endl;
							cin>>quantity;
							d1=quantity;
							
							break;
						}	
						case 2:
						{
							cout<<"You selected MUTTON SAJJI + YOUGURT"<<endl;
							cout<<"enter quantity"<<endl;
							cin>>quantity;
							d2=quantity;
							
							break;
						}
						case 3:
						{
							cout<<"-you selected ZINGER BURGER"<<endl;
							cout<<"Enter Quantity:"<<endl;
							cin>>quantity;
							d3=quantity;
							
							break;	
						}
						case 4:
						{
							cout<<"-you selected QUARTER BROAST"<<endl;
							cout<<"Enter Quantity:"<<endl;
							cin>>quantity;
							d4=quantity;
							
							break;
						}
						case 5:
						{
							cout<<"-you selected LARGE PIZZA "<<endl;
							cout<<"Enter Quantity:"<<endl;
							cin>>quantity;
							d5=quantity;
							
							break;
						}
						case 6:
						{
							cout<<"-you selected SHAWARMA "<<endl;
							cout<<"Enter Quantity:"<<endl;
							cin>>quantity;
							d6=quantity;
							
							break;
						}	
						case 0:
							system("cls");
							foodbill();
							cout<<"\tPress any key to continue"<<endl;
							getch();
							system("cls");
							orderfood();
						default:
						{
							cout<<"invalid choice"<<endl;	
						}
					}
			}
			  
		}		
	};





class room{
	protected:
		int indate,inmonth,inyear,inhour,inmin,outdate,outmonth,outyear,outhour,outmin,totaldays;
	public:
		room()
		{
			indate=0,inmonth=0,inyear=0,inhour=0,inmin=0,outdate=0,outmonth=0,outyear=0,outhour=0,outmin=0,totaldays=0;
		}
		void checkin();
		void checkout();
		void roombill();
};
void room::checkin()
		{
			cout<<"Enter Check In \n\tDate: ";cin>>indate;cout<<"\n\tMonth: ";cin>>inmonth;cout<<"\n\tYear: ";cin>>inyear;
			cout<<endl;
			cout<<"Enter Check In Time\n\tHour: ";cin>>inhour;cout<<"\n\tMinutes: ";cin>>inmin;
			cout<<endl;
		}
void room::checkout()
		{
			cout<<"Enter Check Out \n\tDate: ";cin>>outdate;cout<<"\n\tMonth: ";cin>>outmonth;cout<<"\n\tYear: ";cin>>outyear;
			cout<<endl;
			cout<<"Enter Check Out Time\n\tHour: ";cin>>outhour;cout<<"\n\tMinutes: ";cin>>outmin;
			cout<<endl;
		}
void room::roombill()
		{
			totaldays=(outdate+(outmonth*30)+(outyear*365))-(indate+(inmonth*30)+(inyear*365));
			cout<<"**** ROOM BILL ****\n"<<endl;
			cout<<"Check In \n\tDate : "<<indate<<"\n\tMonth: "<<inmonth<<"\n\tYear : "<<inyear<<endl;
			cout<<"Check Out \n\tDate : "<<outdate<<"\n\tMonth: "<<outmonth<<"\n\tYear : "<<outyear<<endl;
			cout<<"\nBill for "<<totaldays<<" days: "<<(totaldays*5000)<<endl;
		}




class internet{
	protected:
		int speed;
		int amount;
	public:
	internet()
	{
		speed=0;
		amount=0;	
	}
	void getdata();
	void internetbill();
}i;
void internet:: getdata()
{
	int j;	
		cout<<"Speed of Internet Available Are:\n1) 1mb\n2) 2mb\n3) 5mb\n4) 10mb\n"<<endl;
		cout<<"Enter Your Speed:"<<endl;
		cin>>j;
		switch(j)
		{
			case 1:speed=1,amount=500;break;
			case 2:speed=2,amount=700;break;
			case 3:speed=5,amount=900;break;
			case 4:speed=10,amount=1100;break;
		}
			
		cout<<"Internet Speed: "<<speed<<"MB with 10GB data usage"<<endl;
		
}
void internet::internetbill()
{
		cout<<"**** INTERNET BILL ****\n"<<endl;
    	cout<<"\nInternet Speed: "<<speed<<"MB with 10GB data usage"<<endl;
		cout<<"Total Bill="<<amount<<endl;

}
		
	


class bill:public internet,public room,public food{
	public:
			void allbill()
			{
				roombill();
				cout<<"\n\n"<<endl;
				foodbill();
				cout<<"\n\n"<<endl;
				internetbill();	
			}
	    };




void dis1();
void delay(int milliseconds);
void gotoxy(int,int);
COORD coord={0,0}; 
void loop_load(){
	cout<<"\n\n";
			int i;
			
			for(i=1;i<=149;i++){
				cout<<"=";
				delay(15);
			}
}
void gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void delay(int milliseconds)
{
    long pause;
    clock_t now,then;

    pause = milliseconds*(CLOCKS_PER_SEC/1000);
    now = then = clock();
    while( (now-then) < pause )
        now = clock();
}
void dis1()
{   gotoxy(25,1);
delay(400);
cout<<"\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB \n";
	gotoxy(25,2);
	delay(150);
	cout<<"\xDB \xDB                                                                      \xDB \xDB \n";
	gotoxy(25,3);
	delay(150);
	cout<<"\xDB \xDB                                                                      \xDB \xDB \n";
    gotoxy(25,4);
    delay(150);
	cout<<"\xDB \xDB                                                                      \xDB \xDB \n";
    gotoxy(25,5);
    delay(150);
	cout<<"\xDB \xDB                                                                      \xDB \xDB \n";
    gotoxy(25,6);
    delay(150);
	cout<<"\xDB \xDB                                                                      \xDB \xDB \n";
	gotoxy(25,7);
	delay(150);
	cout<<"\xDB \xDB                                                                      \xDB \xDB \n";
    gotoxy(25,8);
    delay(150);
	cout<<"\xDB \xDB                                                                      \xDB \xDB \n";
    gotoxy(25,9);
    delay(150);
	cout<<"\xDB \xDB                                                                      \xDB \xDB \n";
    gotoxy(25,10);
    delay(150);
	cout<<"\xDB \xDB                                                                      \xDB \xDB \n";
    gotoxy(25,11);
    delay(150);
	cout<<"\xDB \xDB                                                                      \xDB \xDB \n";
    gotoxy(25,12);
    delay(150);
	cout<<"\xDB \xDB                                                                      \xDB \xDB \n";
    gotoxy(25,13);
    delay(150);
	cout<<"\xDB \xDB                                                                      \xDB \xDB \n";
    gotoxy(25,14);
    delay(150);
	cout<<"\xDB \xDB                                                                      \xDB \xDB \n";
    gotoxy(25,15);
    delay(150);
	cout<<"\xDB \xDB                                                                      \xDB \xDB \n";
	gotoxy(25,16);
	delay(150);
	cout<<"\xDB \xDB                                                                      \xDB \xDB \n";
    gotoxy(25,17);
    delay(150);
	cout<<"\xDB \xDB                                                                      \xDB \xDB \n";
    gotoxy(25,18);
    delay(150);
	cout<<"\xDB \xDB                                                                      \xDB \xDB \n";
    gotoxy(25,19);
    delay(150);
	cout<<"\xDB \xDB                                                                      \xDB \xDB \n";
    gotoxy(25,20);
    delay(150);
	cout<<"\xDB \xDB                                                                      \xDB \xDB \n";
    gotoxy(25,21);
    delay(150);
	cout<<"\xDB \xDB                                                                      \xDB \xDB \n";
    gotoxy(25,22);
    delay(150);
	cout<<"\xDB \xDB                                                                      \xDB \xDB \n";
    gotoxy(25,23);
    delay(150);
	cout<<"\xDB \xDB                                                                      \xDB \xDB \n";
 	gotoxy(25,24);
 	delay(150);
	cout<<"\xDB \xDB                                                                      \xDB \xDB \n";
    gotoxy(25,25);
    delay(150);
cout<<"\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB \n";
	gotoxy(25,13);
 	delay(200);
	cout<<"\xDB \xDB                      HOTEL MANAGEMENT SYSTEM                         \xDB \xDB \n";	
	getch();
	system("cls");
}
class Recepetionist {
	
	protected:
		char Name[100];
		int id;
		int Phone_Num;
		char Location[100];
		int room_no;
		bill b1;
		
	public:
		int CheckRoom(int);
		void BookRoom();
		void AllocateRooms();
		void EditRecord();
		void Delete(int);
		void Modify(int);
		void displayy();
		void billl();
		
}s;

void Recepetionist::displayy(){
	
	int roomm;
	int checkk;
			//used to read info from file
			
			//ios::in open file for eading
			
			ifstream fin;
			fin.open("Record.dat",ios::binary);
			
			cout<<endl;
			
			cout<<"Enter Room Number =";
			cin>>roomm;
			system("cls");
			
			//fin is fstream objects
			//eof member of fstream  class which return true or false
			
			while(fin.read((char*)&s,sizeof(s))){
				
				
			
        if(room_no==roomm)
        {
//            clrscr();
cout<<endl;
            cout<<"\n Cusromer Details";
            cout<<"\n ****************";
            cout<<"\n\n Room no: "<<room_no;
            cout<<"\n Name: "<<Name;
            cout<<"\n Address: "<<Location;
            cout<<"\n Phone no: "<<Phone_Num;
            
            
            checkk=1;
            break;
        }
        else if(checkk == 0){
        cout<<"\n Sorry Room no. not found or vacant!!";
        break;	
		}
    }
    
    
			
//			if(checkk==0)
        
    fin.close();
    cout<<"\n\n Press any key to continue!!";
    getch();
}

void Recepetionist::EditRecord(){
	
	int choose,rom;
    system("cls");
    cout<<"\n EDIT MENU";
    cout<<"\n *********";
    cout<<"\n\n 1.Modify Customer Record";
    cout<<"\n 2.Delete Customer Record";
    cout<<endl;
    
    cout<<"\n Enter your choice: ";
    cin>>choose;
    
//    clrscr();
    cout<<"\n Enter room no: ";
    cin>>rom;
    
    switch(choose)
    {
        case 1: Modify(rom);
                break;
        case 2: Delete(rom);
                break;
        default: cout<<"\n Wrong Choice!!";
    }
    
    cout<<"\n Press any key to continue!!!";
    getch();
    system("cls");
}

void Recepetionist::Modify(int r){
	
	long pos,flag=0;
	
	//both properties of and ifstream
	//can read write both
	
    fstream file;
	file.open("Record.dat",ios::in|ios::out);
    
    while(file.read((char*)&s,sizeof(s)))
    {

//        pos=file.tellg();
        if(room_no==r)
        {
        	cout<<endl;
            cout<<"\n Enter New Details";
            cout<<"\n *****************";
            cout<<endl;
            cout<<"\n Enter Your Name: ";
            		fflush(stdin);
            gets(Name);
            cout<<endl;
            cout<<" Enter Your Address: ";
            		fflush(stdin);
            gets(Location);
            cout<<endl;
            
            cout<<" Enter Your Phone Number: ";
            		fflush(stdin);
            cin>>Phone_Num;
            
//            file.seekg(pos);
            file.seekp(-sizeof(s),ios::cur);
//			fl.write((char*)&s,sizeof(s));
            file.write((char*)&s,sizeof(s));
            cout<<"\n Record is modified!!";
            flag=1;
            break;
        }
        else if(flag == 0){
        	
        cout<<"\n Sorry Room no"<<room_no<<" not found or vacant!!";
        break;
		}
    }
    
//    if(flag==0)
        
    file.close();
    
	
}

void Recepetionist::Delete(int r){
	
	
	
	int flag=0;
    char ch;
    //read
    ifstream fin;
	ofstream fout;
	fin.open("Record.dat",ios::binary);
	fout.open("temp.txt",ios::binary|ios::app);
    //create
    
    while(fin.read((char*)&s,sizeof(s)))
    {

        if(room_no==r)
        {
          
			cout<<"\n Name: "<<Name;
            cout<<"\n Address: "<<Location;
            cout<<"\n Pone No: "<<Phone_Num;
        
            cout<<"\n\n Do you want to delete this record(y/n): ";
            cin>>ch;
            
            if(ch=='y'){
            fout.write((char*)&s,sizeof(s));
            
            flag=1;
            cout<<endl;
            cout<<"Deletion Complete!";
            break;
			}
		}
        else{
            fout.write((char*)&s,sizeof(s));
		break;
		}
        }
    
    fin.close();
    fout.close();
    
    if(flag==0)
        cout<<"\n Sorry room no. not found or vacant!!";
    else
    {
        remove("Record.dat");
        rename("temp.dat","Record.dat");
    }
    
	
}

void Recepetionist::BookRoom(){
	
	int roomm,checkk;
	
	    //create file and write information
	    
	    ofstream fout;
		
		fout.open("Record.dat",ios::binary|ios::app);
	 system("cls");   
	cout<<"\n Enter Customer Detalis";
    cout<<"\n **********************";
    cout<<"\n\n Room no: ";
    cin>>roomm;
    
    checkk=CheckRoom(roomm);
    
    if(checkk){
	
    	cout<<"Sorry!,Room has Already Been Booked!";
    	exit(1);
    }
	
//	else{
		room_no=roomm;
		fflush(stdin);	
				cout<<endl;	
		cout<<" Enter Your Name: ";
//		cout<<endl;
		gets(Name);
		fflush(stdin);
				cout<<endl;
        cout<<" Enter Your Address: ";
        gets(Location);
        		cout<<endl;
		cout<<" Enter Your Phone No: ";
        cin>>Phone_Num;
        		cout<<endl;
        fout.write((char*)&s,sizeof(s));
        cout<<"\n Congratulations! Room has been booked!!!";
//	}
			cout<<endl;
    fout.close();
	cout<<"\n Press any key to continue!!";
    getch();
    system("cls");
	
	
}

int Recepetionist::CheckRoom(int r)
{
    int flag=0;
    ifstream fin("Record.dat",ios::binary);//opening a file for reading
    //while end of file
    while(!fin.eof())
    {
        fin.read((char*)&s,sizeof(s));
        if(room_no==r)
        {
            flag=1;
                break;
        }
    }
    //closing a file
    fin.close();
    return(flag);
}

void Recepetionist::AllocateRooms(){
	
	
	  
	//read data
	ifstream fin;
	fin.open("Record.dat",ios::binary);
    if(fin==NULL){
    		cout<<endl;
    		cout<<"File is Empty";
    		
		}
		else{
			system("cls");
	cout<<"\n\t\t\tList Of Rooms Allotted";
    cout<<"\n\t\t\t*********************";
    cout<<"\n\n Room No.\tName\t\tAddress\t\tPhone No.\n";
    
    while(fin.read((char*)&s,sizeof(s)))
    {
    	if(fin==NULL){
    		cout<<endl;
    		cout<<"File is Empty";
    		break;
		}
		else{
//        fin.read((char*)&s,sizeof(s));
        cout<<"\n\n "<<room_no<<"\t\t"<<Name;
        cout<<"\t\t"<<Location<<"\t\t"<<Phone_Num;
		}
    
		}
    
    fin.close();
    cout<<"\n\n\n\t\t\tPress any key to continue!!";
    getch();
    system("cls");
}
}
void Recepetionist::billl()
{
	system("cls");
	b1.allbill();
	getch();
	system("cls");
}
	

class Guest{
	private:
		food f1;
		internet i1;
		room r1;
	public:
		void menu()
		{
			int choice;
			char ch;
			while((ch=getch())!='4')
			{
			system("cls");
			cout<<"\n\t\t\t\t*************";
        	cout<<"\n\t\t\t\t* MAIN MENU *";
        	cout<<"\n\t\t\t\t*************";
        	cout<<"\n\n\n\t\t\t\t1.Room";
        	cout<<"\n\t\t\t\t2.Order Food";
        	cout<<"\n\t\t\t\t3.Internet Services";
        	cout<<"\n\t\t\t\t4.Total Bill";
        	cout<<"\n\t\t\t\t5.Exit";
        	cout<<"\n\n\t\t\t\tEnter Your Choice: ";
        	cin>>choice;
        
        switch(choice)
		{
        	case 1:
        		system("cls");
        		r1.checkin();
        		r1.checkout();
        		break;
        	case 2:
        		system("cls");
        		f1.orderfood();
        		break;
        	case 3:
        		system("cls");
        		i1.getdata();
        		break;
        	case 4:
        		system("cls");
        		r1.roombill();
        		cout<<"\n"<<endl;
        		f1.foodbill();
        		cout<<"\n"<<endl;
        		i1.internetbill();
        		break;
        	case 5:
        		return;
        	default:cout<<"Invalid Choice"<<endl;
		}}}
};
main(){
		
	Recepetionist R1;
	Guest g1;
	int choices;
	char b;
	
	USER:
   char Name[30]="SAIF", UName[20] ,ch,pass[30];
   	  int i=0,j,n=1;
	string UserName;
	 hello:
	 	system("cls");
	 	dis1();
	 	system("cls");
 	cout<<"\t\t======***Welcome to SFC Hotel***======\n\n\t1) Reception\n\t2) Guest Mode\n\t3)EXIT"<<endl;
 	b=getch();
 	if(b=='2')
 	{
 		system("cls");
		g1.menu();
	 }
	else if(b=='3')
	{
		exit(0);
	}
	else 
	begin:
	system("cls");
 			cout<<endl;
	cout<<"============================================== HOTEL MANAGEMENT SYSTEM ==============================================";
	cout<<endl;
	cout<<endl;
		cout<<"\n\n Enter User Name = ";
		gets(UName);
    	
         if(strcmp(Name,UName)==0)
	        {
			
	      }
                    else{
					

                  	  printf("\n\n Invalid Username!");
                  	  goto USER;
//                  	  exit(0);
                     }
                     
           
//		   psd:
 cout<<"\n Enter Password = ";
    while(1)
 {
  ch = getch();
  pass[i] = ch;
  if(ch==BKSPC)
        {
        	continue; 
		}
	    	 if (ch==ENTER)
		    {
			   break;
		    }
		printf("*");
		i++;
 }
 pass[i] = '\0';
		   
		if(strcmp("1234",pass)==0){
		system("cls");
		delay(500);
			cout<<"\n\t\t\t\t\t\t\t  Access Granted!";
				delay(1000);
				delay(1500);
	    			    		system("cls");
		    		cout<<"\n\t\t\t\t****************LOADING PLEASE WAIT****************";
	    			    		delay(1000);
    			    		
cout<<"\n\n\n\n";
loop_load();
system("cls");

	

		cout<<endl;
		while(choices!=6){

			option:
		system("cls");
		cout<<"\n\t\t\t\t*************";
        cout<<"\n\t\t\t\t* MAIN MENU *";
        cout<<"\n\t\t\t\t*************";
        cout<<"\n\n\n\t\t\t\t1.Book A Room";
        cout<<"\n\t\t\t\t2.Customer Record";
        cout<<"\n\t\t\t\t3.Rooms Allotted";
        cout<<"\n\t\t\t\t4.Edit Record";
        cout<<"\n\t\t\t\t5.Generate Bill";
        cout<<"\n\t\t\t\t6.Exit";
        cout<<"\n\n\t\t\t\tEnter Your Choice: ";
        cin>>choices;
        
        switch(choices){
        	
        	
        	case 1:
        		
			system("cls");
        		R1.BookRoom();
        		break;
        	case 2:
        		
			system("cls");
        		R1.displayy();
        		
        		break;
        	case 3:
        		
			system("cls");
        		R1.AllocateRooms();
        		break;
        	
        	case 4:
        		
			system("cls");
        		R1.EditRecord();
        		break;
        		
        	case 5:
        		
			system("cls");
        		R1.billl();
        		break;
        		
        	case 6:
        		goto hello;        		
        	default:
        		cout<<endl<<"Enter a Valid Options!";
        		goto option;
        		
		}
		}	
	}
	else{
		cout<<"Login Failed!";
		cout<<endl;
		goto begin;

	}
	
}
