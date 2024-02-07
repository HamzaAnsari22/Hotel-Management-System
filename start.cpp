#include <iostream>				//for input output
#include <windows.h>			//for coord,gotoxy
#include <conio.h>				//for getch
#include <unistd.h>				//for sleep
#include <fstream>				//for filing
#include<string>				//for string
using namespace std;				
void main1();						
void staff();						
void rsrv();						
void guest();						
void srvc(string a2);				
void food(string a3);
void mp(string a1);					
void crsrv();						
void rect(int,int,int,int);			
void front1(void);					
void front2(void);					
void end();							
void sandg(string a1);				
COORD coord={0,0};					
void gotoxy(int,int);
	


int main()
{
	
	for(int i=0;i<2;i++)
	{
		system("cls");
		if(i==0)
		{
			front1();
			getch();
		}
		if(i==1)
		{
			front2();
			getch();
		}
	}
main1();
return 0;
}
void rsrv()	
{
		
		char x,k,a;
		int j,i;
		strt:
		rect(32,4,13,2);
		gotoxy(33,5);
		cout<<" Hotel Amigo";
		gotoxy(30,8);
		cout<<"Reservation...";
	struct rsrv
	{
		string nm;
		string rm;
		string rmt;
		string adrs;
		string pno;
		string pspt;
		string ci;
		string cot;
		string nxn;
		string nxno;
	};
	struct rsrv r[100];

		gotoxy(30,9);
		cout<<"1)New Entry";
		gotoxy(30,10);
		cout<<"2)View";
		gotoxy(30,11);
		cout<<"B)Back";
		gotoxy(30,12);
		cout<<"E)Exit";
		k=getch();
		if(k==49||k==50)
		{
		
		switch (k)
		{
			case 49:
				{
					case1:
					system("cls");
					rect(10,3,13,2);
					gotoxy(11,4);
					cout<<" Hotel Amigo";
					gotoxy(26,4);
					cout<<"Enter Registration No.:";
					scanf("%d",&i);					
					gotoxy(6,6);
					cout<<"Name.\t=";
					gotoxy(6,8);
					cout<<"Room No.\t=";
					gotoxy(40,8);
					cout<<"Room Type.\t=";
					gotoxy(6,10);
					cout<<"Address.\t=";
					gotoxy(40,10);
					cout<<"Phone.\t\t=";
					gotoxy(6,12);
					cout<<"Passport No.=";
					gotoxy(6,14);
					cout<<"Check In.(DD/MM/YY)=";
					gotoxy(40,14);
					cout<<"Check Out.(DD/MM/YY)=";
					gotoxy(6,16);
					cout<<"Nationality.=";
					gotoxy(40,16);
					cout<<"NIC No.\t\t=";
					getline(cin,r[i].nm);										
					gotoxy(18,6);
					getline(cin,r[i].nm);										
					gotoxy(18,8);
					getline(cin,r[i].rm);										
					rect(57,3,20,4);
					gotoxy(58,4);
					cout<<"standard = 2500/day";
					gotoxy(60,5);
					cout<<"deluxe = 4500/day";
					gotoxy(62,6);
					cout<<"suit = 9000/day";
					gotoxy(58,8);
					getline(cin,r[i].rmt);
					if(r[i].rmt=="standard"||r[i].rmt=="deluxe"||r[i].rmt=="suit")
					{
					}
					else
					{
						gotoxy(15,19);
						cout<<"Wrong Room Type"<<endl;
						gotoxy(15,20);
						cout<<"Wanna Try Again(T) OR Exit(E)";
						x=getch();
						if(x=='t'||x=='T')
						{
							goto case1;
						}
						else if(x=='E'||x=='e')
						{
							end();
						}
						
					}										
					gotoxy(18,10);
					getline(cin,r[i].adrs);								
					gotoxy(58,10);
					getline(cin,r[i].pno);									
					gotoxy(19,12);
					getline(cin,r[i].pspt);								
					gotoxy(28,14);
					getline(cin,r[i].ci);								
					gotoxy(63,14);
					getline(cin,r[i].cot);								
					gotoxy(19,16);
					getline(cin,r[i].nxn);								
					gotoxy(58,16);
					getline(cin,r[i].nxno);								
			{
				string d="standard", b="deluxe", c="suit";
				float p=0;
				if(r[i].rmt.compare(d) == 0)
				{
					p=2500;
				}
				if(r[i].rmt.compare(b) == 0)
				{
					p=4500;
				}
				if(r[i].rmt.compare(c) == 0)
				{
					p=9000;
				}

				int d1[3],m[3];		
				d1[0]=((r[i].ci[0])*10)+(r[i].ci[1]);
				d1[1]=((r[i].cot[0])*10)+(r[i].cot[1]);
				m[0]=((r[i].ci[3])*10)+(r[i].ci[4]);
				m[1]=((r[i].cot[3])*10)+(r[i].cot[4]);
				m[2]=m[1]-m[0];
				if(m[0]==m[1])
				{
					d1[2]=(d1[1]-d1[0])+1;
				}
				else if(m[2]==1)
				{
					d1[2]=(31-d1[0])+d1[1];
				}
				p*=d1[2];

				ofstream a0;
				string a2;

				a2=r[i].nm;

				string a1;			
				a1="Hotel Amigo/Hotel/Staff/"+a2+".txt";
				a0.open(a1.c_str());
				a0<<"Name.\t\t="<<r[i].nm<<endl;
				a0<<"Room No.\t="<<r[i].rm<<endl;
				a0<<"Room type.\t="<<r[i].rmt<<endl;
				a0<<"Address.\t="<<r[i].adrs<<endl;
				a0<<"Phone.\t\t="<<r[i].pno<<endl;
				a0<<"Passport No.\t="<<r[i].pspt<<endl;
				a0<<"Check In.\t="<<r[i].ci<<endl;
				a0<<"Check Out.\t="<<r[i].cot<<endl;
				a0<<"Nationality.\t="<<r[i].nxn<<endl;
				a0<<"NIC No.\t\t="<<r[i].nxno<<endl;
				a0<<"Stays for.\t="<<d1[2]<<endl;
				a0<<"Bill amount.\t="<<p<<endl;
				a0.close();
	}
				strt3:
				gotoxy(15,19);
				cout<<"Wanna Try Again (T) or Go Back (B) or Exit (E) :";
				gotoxy(63,19);
				a=getch();
				if(a=='T'|| a=='t')
				{
					goto case1;
				}
				else if(a=='B'||a=='b')
				{
					system("cls");
					goto strt;
				}
				else if(a=='E'||a=='e')
				{
					system("cls");
					end();
					break;
				}
				else
				{
					gotoxy(27,20);
					cout<<"Wrong Entry Try Again...";
					goto strt3;
				}
	}

case 50:
	{
		int w=0;
		case2:
		system("cls");
		rect(30,3,13,2);
		gotoxy(31,4);
		cout<<" Hotel Amigo";
		gotoxy(30,6);
		ifstream a0;											
		string a2;
		gotoxy(30,6);
		cout<<"Enter Name .";
		getline(cin,a2);
		string a1,a3;
		a1="Hotel Amigo/Hotel/Staff/"+a2+".txt";
		a3="Hotel Amigo/Hotel/Customer/"+a2+".txt";
		a0.open(a1.c_str());
		if(a0.fail())
		{
    		a0.clear();
    		a0.open(a3.c_str());
			while(getline(a0,a2))
			{
    			cout<<a2<<endl;
			}
		}
		else
		{
			while(getline(a0,a2))
			{
    			cout<<a2<<endl;
			}
		}
		a0.close();
		strt4:
		gotoxy(10,19);
		cout<<"Wanna Try Again (T) or Go Back (B) or Exit (E) :";
		a=getch();
		if(a=='B'|| a=='b')
		{
			system("cls");
			goto strt;
		}
		else if(a=='T' || a=='t')
		{
			goto case2;
		}
		else if(a=='e' || a=='E')
		{
			end();

		}
		else
		{
			gotoxy(27,20);
			cout<<"Wrong Entry Try Again";
			goto strt4;
		}

		}
	}
}

		else if(k=='b'||k=='B')	
		{
			system("cls");
			staff();
		}
		else if(k=='e'||k=='E')
		{
			end();
		}
		else
		{system("cls");
		gotoxy(27,16);
		cout<<"Wrong Entry Try Again";
		goto strt;
		}
	}
void crsrv()
{
		int i=55,j=55;
		char a,x,k;
		strt:
		rect(32,4,13,2);
		gotoxy(33,5);
		cout<<" Hotel Amigo";
		gotoxy(30,8);
		cout<<"Reservation...";
		struct rsrv
		{
			char nm[25];
			string pt;
			string rmt;
			string adrs;
			string pno;
			string pspt;
			string cn;
			string cot;
			string nxn;
			string nxno;
		};
		struct rsrv r[100];
			gotoxy(30,9);
			cout<<"1)Entry";
			gotoxy(30,10);
			cout<<"2)View";
			gotoxy(30,11);
			cout<<"B)Back";
			gotoxy(30,12);
			cout<<"E)Exit";
			k=getch();
			if(k==49||k==50)
			{
			
		switch (k)
		{
			case 49:
	
			{
				case1:
			system("cls");
			rect(10,3,13,2);
			gotoxy(11,4);
			cout<<" Hotel Amigo";
		
		gotoxy(26,4);
		cout<<"Your Registration No. is : "<<i;
		gotoxy(6,6);
		cout<<"Name.\t=";
		gotoxy(6,8);
		cout<<"Payment Type.=";
		gotoxy(40,8);
		cout<<"Room type.\t=";
		gotoxy(6,10);
		cout<<"Address.\t=";
		gotoxy(40,10);
		cout<<"Phone.\t\t=";
		gotoxy(6,12);
		cout<<"Passport No.=";
		gotoxy(6,14);
		cout<<"Check In.(DD/MM/YY)=";
		gotoxy(40,14);
		cout<<"Check Out.(DD/MM/YY)=";
		gotoxy(6,16);
		cout<<"Nationality.=";
		gotoxy(40,16);
		cout<<"NIC No.\t\t=";
		gotoxy(18,6);
		gets(r[i].nm);
		gotoxy(20,8);
		getline(cin,r[i].pt);
		rect(57,3,20,4);
		gotoxy(58,4);
		cout<<"standard = 2500/day";
		gotoxy(60,5);
		cout<<"deluxe = 4500/day";
		gotoxy(62,6);
		cout<<"suit = 9000/day";
		gotoxy(58,8);
		getline(cin,r[i].rmt);	
		if(r[i].rmt=="standard"||r[i].rmt=="deluxe"||r[i].rmt=="suit")		
		{
		}
		else
		{
			gotoxy(15,20);
			cout<<"Wrong Room Type"<<endl;
			gotoxy(15,21);
			cout<<"Wanna Try Again(T) OR Exit(E)";
			x=getch();
			if(x=='t'||x=='T')
			{
				goto case1;
			}
			else if(x=='E'||x=='e')
			{
				end();
				break;			
			}
					system("cls");	
					goto strt;
						
		}
		gotoxy(18,10);
		getline(cin,r[i].adrs);
		gotoxy(58,10);
		getline(cin,r[i].pno);
		gotoxy(19,12);
		getline(cin,r[i].pspt);
		gotoxy(28,14);
		getline(cin,r[i].cn);
		gotoxy(63,14);	
		getline(cin,r[i].cot);
		gotoxy(19,16);
		getline(cin,r[i].nxn);
		gotoxy(58,16);
		getline(cin,r[i].nxno);
		{
			char d[]="standard",b[]="deluxe",c[]="suit";
			float p=0;
			if(r[i].rmt.compare(d) == 0)
			{
				p=2500;
			}
			if(r[i].rmt.compare(b) == 0)
			{
				p=4500;
			}
			if(r[i].rmt.compare(c) == 0)
			{
				p=9000;
			}
		int d1[3],m[3];
		d1[0]=((r[i].cn[0]-48)*10)+(r[i].cn[1]-48);
		d1[1]=((r[i].cot[0]-48)*10)+(r[i].cot[1]-48);
		m[0]=((r[i].cn[3]-48)*10)+(r[i].cn[4]-48);
		m[1]=((r[i].cot[3]-48)*10)+(r[i].cot[4]-48);
		m[2]=m[1]-m[0];
		if(m[0]==m[1])
		{
			d1[2]=(d1[1]-d1[0])+1;
		}
		else if(m[2]==1)
		{
			d1[2]=(31-d1[0])+d1[1];
		}
		p*=d1[2];
		ofstream a0;
		string a2;
		char f;
		f=i;
		a2=r[i].nm;
		a2=a2+" "+f;
		string a1;
		a1="Hotel Amigo/Hotel/Customer/"+a2+".txt";
		a0.open(a1.c_str());
		a0<<"Name.\t\t="<<r[i].nm<<endl;
		a0<<"Payment Type.\t="<<r[i].pt<<endl;
		a0<<"Room type.\t="<<r[i].rmt<<endl;
		a0<<"Address.\t="<<r[i].adrs<<endl;
		a0<<"Phone.\t\t="<<r[i].pno<<endl;
		a0<<"Passport No.\t="<<r[i].pspt<<endl;
		a0<<"Check In.\t="<<r[i].cn<<endl;
		a0<<"Check Out.\t="<<r[i].cot<<endl;
		a0<<"Nationality.\t="<<r[i].nxn<<endl;
		a0<<"NIC No.\t\t="<<r[i].nxno<<endl;
		a0<<"Stays for.\t="<<d1[2]<<endl;
		a0<<"Bill amount.\t="<<p<<endl;
		a0.close();
	}
	strt2:
	gotoxy(15,19);
	cout<<"Wanna Try Again (T) or Go Back (B) or Exit (E) :";
	gotoxy(63,19);
	a=getch();
	if(a=='T'|| a=='t')
	{
		i++;
		goto case1;
	}
	if(a=='B'||a=='b')
	{
		system("cls");
		i++;
		goto strt;
	}
	if(a=='e' || a=='E')
	{
		end();
		break;
	}
	else
	{
		gotoxy(27,20);
		cout<<"Wrong Entry Try Again...";
		goto strt2;
		break;
	}
}
case 50:
{
	j=55;
	case2:
	system("cls");
	rect(30,3,13,2);
	gotoxy(31,4);
	cout<<" Hotel Amigo";
	gotoxy(30,6);
	cout<<"Your Room No. is :"<<j<<endl;
	ifstream a0;
	string a2,a3;
	char f;
	f=j;
	a2=r[j].nm;
	a2=a2+" "+f;
	string a1;
	a1="Hotel Amigo/Hotel/Customer/"+a2+".txt";
	a0.open(a1.c_str());
	while(getline(a0,a2))
	{
	    cout<<a2<<endl;
	}
	a0.close();
	cout<<"Wanna Try Again (T) or Go Back (B) or Exit (E) :";
	a=getch();
	if(a=='B'|| a=='b')
	{
		system("cls");
		goto strt;
	}
	if(a=='T' || a=='t')
	{
		j++;
		system("cls");
		goto case2;
	}
	if(a=='e' || a=='E')
	{
		end();
		break;
	}
	else
	{
		gotoxy(27,20);
		cout<<"Wrong Entry Try Again...";
		goto case2;
	}
		}
	}
}
	else if(k=='b'||k=='B')
	{
		guest();	
	}
	else if(k=='e'||k=='E')
	{	
		end();
		
	}
	else
	{
		system("cls");
		gotoxy(27,16);
		cout<<"Wrong Entry Try Again";
		goto strt;
	}
}
void srvc(string a2)
{
		char r;
		system("cls");
		strt:
		rect(32,4,13,2);
		gotoxy(33,5);
		cout<<" Hotel Amigo";
		gotoxy(30,8);
		cout<<"Services..";
		gotoxy(30,9);
		cout<<"1)Laundary";
		gotoxy(30,10);
		cout<<"2)Room Cleaning";
		gotoxy(30,11);
		cout<<"3)Order Meal";
		gotoxy(30,12);
		cout<<"B)Back";
		gotoxy(30,13);
		cout<<"E)Exit";
		r=getch();
		if(r==49||r==50||r==51)
		{
			switch (r)
			{
				case 49:
				case 50:
				{
					system("cls");
					rect(34,11,13,2);
					gotoxy(35,12);
					cout<<" Hotel Amigo";
					gotoxy(33,15);
					cout<<"Consider it Done...";
					sleep(1);
					system("cls");
					goto strt;
				}
				case 51:
				{
					system("cls");
					food(a2);
					break;
				}
				
			}
		}
		else if(r=='b'||r=='B')
		{		
				system("cls");
				if(a2=="Staff...")
				{
					staff();
				}
				else
				{
					guest();
				}
		}
		else if(r=='e'||r=='E')	
		{
			end();
		}
		else
		{		
				system("cls");
				gotoxy(27,16);
				cout<<"Wrong Entry Try Again";
				goto strt;	
		}		
}
void mp(string a1)
{
	char b=-52,c=-53,d=-54,e=-71,f=-51,g=-70;
	char a;
	strt1:
	rect(34,1,13,2);
	gotoxy(35,2);
	cout<<" Hotel Amigo";
	gotoxy(20,5);	
	cout<<"0)Ground Floor";
	gotoxy(50,5);
	cout<<"1)1st Floor";
	gotoxy(20,7);
	cout<<"2)2nd Floor";
	gotoxy(50,7);
	cout<<"3)3rd Floor";
	gotoxy(20,9);
	cout<<"4)4th Floor";
	gotoxy(50,9);
	cout<<"5)5th Floor";
	gotoxy(20,11);
	cout<<"6)6th Floor";
	gotoxy(50,11);
	cout<<"7)7th Floor";	
	gotoxy(20,13);
	cout<<"8)8th Floor";
	gotoxy(50,13);
	cout<<"9)9th Floor";
	gotoxy(20,15);
	cout<<"B)Back";
	gotoxy(50,15);
	cout<<"E)Exit\n";
	a=getch();
	switch(a)
	{
		case 48:
		system("cls");
		rect(34,1,13,2);
		gotoxy(35,2);
		cout<<" Hotel Amigo";
//ground floor
		rect(4,4,10,5);
		rect(15,4,10,5);
		rect(26,4,8,4);
		rect(44,6,2,2);
		rect(44,5,2,2);
		rect(44,4,2,2);
		rect(52,5,2,2);
		rect(52,4,2,2);
		rect(52,6,2,2);
		rect(48,4,2,2);
		rect(49,4,0,2);
		rect(47,6,4,2);
		rect(35,4,8,4);
		rect(55,4,10,6);
		rect(66,4,10,6);
		rect(50,12,26,12);
		rect(36,10,14,3);
		rect(36,13,13,11);
		rect(4,11,24,5);
		rect(4,18,24,6);
		rect(4,11,8,5);
		rect(4,18,7,6);
		rect(12,18,8,6);
//Boundary
		rect(4,4,72,20);
//extra
		gotoxy(15,4);
		cout<<c;
		gotoxy(26,4);
		cout<<c;
		gotoxy(35,4);
		cout<<c;
		gotoxy(44,4);
		cout<<c;
		gotoxy(55,4);
		cout<<c;
		gotoxy(66,4);
		cout<<c;
		gotoxy(13,11);
		cout<<c;
		gotoxy(12,18);
		cout<<c;
		gotoxy(21,18);
		cout<<c;
		gotoxy(50,13);
		cout<<c;
		gotoxy(50,12);
		cout<<b;
		gotoxy(15,9);
		cout<<d;
		gotoxy(35,8);
		cout<<d;
		gotoxy(66,10);
		cout<<d;
		gotoxy(13,16);
		cout<<d;
		gotoxy(12,24);
		cout<<d;
		gotoxy(21,24);
		cout<<d;
		gotoxy(29,24);
		cout<<d;
		gotoxy(36,24);
		cout<<d;
		gotoxy(50,24);
		cout<<d;
		gotoxy(36,13);
		cout<<b;
		gotoxy(4,18);
		cout<<b;
		gotoxy(4,9);
		cout<<b;
		gotoxy(4,11);
		cout<<b;
		gotoxy(4,16);
		cout<<b;
		gotoxy(26,8);
		cout<<b;
		gotoxy(77,10);
		cout<<e;
		gotoxy(77,12);
		cout<<e;
		gotoxy(8,18);
		cout<<"  ";
		gotoxy(16,18);
		cout<<"  ";
		gotoxy(24,18);
		cout<<"  ";
		gotoxy(9,9);
		cout<<"  ";
		gotoxy(20,9);
		cout<<"  ";
		gotoxy(33,8);
		cout<<"  ";
		gotoxy(36,8);
		cout<<"  ";
		gotoxy(50,12);
		cout<<" ";
		gotoxy(49,8);
		cout<<"  ";
		gotoxy(59,10);
		cout<<"    ";
		gotoxy(70,10);
		cout<<"    ";
		gotoxy(57,12);
		cout<<"     "<<f<<f<<f<<f<<f<<"     ";
		gotoxy(36,12);
		cout<<" ";
		gotoxy(36,11);
		cout<<" ";
		gotoxy(36,14);
		cout<<" ";
		gotoxy(36,15);
		cout<<" ";
		gotoxy(36,21);
		cout<<" ";
		gotoxy(36,22);
		cout<<" ";
		gotoxy(18,16);
		cout<<"       ";
		gotoxy(8,16);
		cout<<"   ";
		gotoxy(31,13);
		cout<<"====";
//names
	gotoxy(6,6);
	cout<<"Deluxe";
	gotoxy(7,7);
	cout<<"Room";
	gotoxy(18,6);
	cout<<"Deluxe";
	gotoxy(19,7);
	cout<<"Room";	
	gotoxy(27,6);
	cout<<"Standard";
	gotoxy(29,7);
	cout<<"Room";	
	gotoxy(36,6);
	cout<<"Standard";
	gotoxy(37,7);
	cout<<"Room";
	gotoxy(48,7);
	cout<<"LIFT";
	gotoxy(59,7);
	cout<<"Suit";
	gotoxy(70,7);
	cout<<"Suit";
	gotoxy(5,13);
	cout<<"Chinese";
	gotoxy(6,14);
	cout<<"Foods";
	gotoxy(16,13);
	cout<<"Desi Foods";
	gotoxy(39,11);
	cout<<"Reception";
	gotoxy(39,18);
	cout<<"Parking";
	gotoxy(57,18);
	cout<<"Golf Club/Garden";
	gotoxy(13,21);
	cout<<"Spanish";
	gotoxy(14,22);
	cout<<"Foods";
	gotoxy(5,21);
	cout<<"French";
	gotoxy(6,22);
	cout<<"Foods";
	gotoxy(22,21);
	cout<<"Italian";
	gotoxy(23,22);
	cout<<"Foods";
	getch();
	system("cls");
	goto strt1;

case 49:
case 50:
case 51:
case 52:
case 54:
case 55:
case 56:
case 57:
	system("cls");
	rect(34,1,13,2);
	gotoxy(35,2);
	cout<<" Hotel Amigo";
//rooms
	rect(4,4,10,5);
	rect(15,4,10,5);
	rect(26,4,8,4);
	rect(44,6,2,2);
	rect(44,5,2,2);
	rect(44,4,2,2);
	rect(52,5,2,2);
	rect(52,4,2,2);
	rect(52,6,2,2);
	rect(48,4,2,2);
	rect(49,4,0,2);
	rect(47,6,4,2);
	rect(35,4,8,4);
	rect(55,4,10,6);
	rect(66,4,10,6);
	rect(28,10,23,4);
//Boundary
	rect(4,4,72,8);
//extra
	gotoxy(15,4);
	cout<<c;
	gotoxy(26,4);
	cout<<c;
	gotoxy(35,4);
	cout<<c;
	gotoxy(44,4);
	cout<<c;
	gotoxy(55,4);
	cout<<c;
	gotoxy(66,4);
	cout<<c;
	gotoxy(28,12);
	cout<<e<<"                       "<<b;
	gotoxy(77,10);
	cout<<e;
	gotoxy(4,9);
	cout<<b;
	gotoxy(26,8);
	cout<<b;
	gotoxy(15,9);
	cout<<d;
	gotoxy(35,8);
	cout<<d;
	gotoxy(66,10);
	cout<<d;
//names
	gotoxy(33,12);
	cout<<"Dining Area";
	gotoxy(6,6);
	cout<<"Deluxe";
	gotoxy(7,7);
	cout<<"Room";
	gotoxy(18,6);
	cout<<"Deluxe";
	gotoxy(19,7);
	cout<<"Room";
	gotoxy(27,6);
	cout<<"Standard";
	gotoxy(29,7);
	cout<<"Room";
	gotoxy(36,6);
	cout<<"Standard";
	gotoxy(37,7);
	cout<<"Room";
	gotoxy(48,7);
	cout<<"LIFT";
	gotoxy(59,7);
	cout<<"Suit";
	gotoxy(70,7);
	cout<<"Suit";
	gotoxy(5,13);
	getch();
	system("cls");
	goto strt1;
case 53:
	system("cls");
	rect(34,1,13,2);
	gotoxy(35,2);
	cout<<" Hotel Amigo";
//rooms
	rect(4,4,10,5);
	rect(15,4,10,5);
	rect(26,4,8,4);
	rect(44,6,2,2);
	rect(44,5,2,2);
	rect(44,4,2,2);
	rect(52,5,2,2);
	rect(52,4,2,2);
	rect(52,6,2,2);
	rect(48,4,2,2);
	rect(49,4,0,2);
	rect(47,6,4,2);
	rect(35,4,8,4);
	rect(55,4,10,6);
	rect(66,4,10,6);
	rect(30,10,20,8);
	rect(4,11,25,5);
	rect(58,12,18,4);
//Boundary
	rect(4,4,72,8);
//extra
	gotoxy(15,4);
	cout<<c;
	gotoxy(26,4);
	cout<<c;
	gotoxy(35,4);
	cout<<c;
	gotoxy(44,4);
	cout<<c;
	gotoxy(55,4);
	cout<<c;
	gotoxy(66,4);
	cout<<c;
	gotoxy(4,11);
	cout<<b;
	gotoxy(58,12);
	cout<<c;
	gotoxy(77,12);
	cout<<e;
	gotoxy(30,11);
	cout<<e;
	gotoxy(30,16);
	cout<<e;
	gotoxy(4,12);
	cout<<e;
	gotoxy(5,12);
	cout<<"                         "<<g<<"                    "<<b;
	gotoxy(77,10);
	cout<<e;
	gotoxy(4,9);
	cout<<b;
	gotoxy(26,8);
	cout<<b;
	gotoxy(15,9);
	cout<<d;
	gotoxy(35,8);
	cout<<d;
	gotoxy(66,10);
	cout<<d;
//names
	gotoxy(14,13);
	cout<<"Pool B";
	gotoxy(10,14);
	cout<<"(Max Depth 4ft)";
	gotoxy(38,13);
	cout<<"Pool A";
	gotoxy(34,14);
	cout<<"(Max Depth 6.5ft)";
	gotoxy(62,14);
	cout<<"Shower.";
	gotoxy(6,6);
	cout<<"Deluxe";
	gotoxy(7,7);
	cout<<"Room";
	gotoxy(18,6);
	cout<<"Deluxe";
	gotoxy(19,7);
	cout<<"Room";
	gotoxy(27,6);
	cout<<"Standard";
	gotoxy(29,7);
	cout<<"Room";
	gotoxy(36,6);
	cout<<"Standard";
	gotoxy(37,7);
	cout<<"Room";
	gotoxy(48,7);
	cout<<"LIFT";
	gotoxy(59,7);
	cout<<"Suit";
	gotoxy(70,7);
	cout<<"Suit";
	gotoxy(5,13);
	getch();
	system("cls");
	goto strt1;
	
case 98:					//98=b
case 66:					//66=B
	if(a1=="Staff...")
	{
		staff();
	}
	else
		{
			guest();
			break;
		}
case 69:					//69=E
case 101:					//101=e
	end();
	break;
default:
	system("cls");
	rect(29,19,22,2);
	gotoxy(30,20);
	cout<<"Wrong Entry Try Again.";
	goto strt1;
	}
}
void front1()
{
	system("cls");
	char a=-37,b=-36,c=22,d=-69,e=-56,f=-55;
	gotoxy(29,5);
	cout<<"A Place For Everyone";
	gotoxy(7,7);
	cout<<"Welcome To...";
	rect(18,8,32,6);
	gotoxy(20,9);
	cout<<a<<"    "<<a;
	gotoxy(20,10);
	cout<<a<<"    "<<a;
	gotoxy(20,11);	
	cout<<a<<a<<a<<a<<a<<a<<"  "<<a<<a<<a<<a<<"  "<<a<<a<<a<<a<<a<<"  "<<a<<a<<a<<a<<" "<<a;
	gotoxy(20,12);
	cout<<a<<"    "<<a<<"  "<<a<<"  "<<a<<"    "<<a<<"    "<<a<<c<<c<<"  "<<a;
	gotoxy(20,13);
	cout<<a<<"    "<<a<<"  "<<a<<b<<b<<a<<"    "<<a<<"    "<<a<<b<<b<<b<<" "<<a<<b<<b<<b;
	rect(33,14,32,6);
	gotoxy(35,15); 
	cout<<" "<<b<<b<<b;
	gotoxy(35,16);
	cout<<a<<"   "<<a;
	gotoxy(35,17);	
	cout<<a<<c<<c<<c<<a<<" "<<a<<"\\\\//"<<a<<" "<<b<<b<<b<<" "<<b<<b<<b<<b<<" "<<b<<b<<b<<b;
	gotoxy(35,18);
	cout<<a<<"   "<<a<<" "<<a<<" \\/ "<<a<<"  "<<a<<"  "<<a<<" "<<b<<b<<" "<<a<<"  "<<a;
	gotoxy(35,19);
	cout<<a<<"   "<<a<<" "<<a<<"    "<<a<<" "<<b<<a<<b<<" "<<a<<b<<b<<a<<" "<<a<<b<<b<<a;
	gotoxy(33,14);
	cout<<d<<"                 "<<e;
	rect(6,21,68,2);
	gotoxy(8,22);
	cout<<" A  Preferred  Choice  For  Passionate  And  Liesure  Travellers";
	rect(24,23,32,1);
	gotoxy(24,23);;
	cout<<d<<" Located In The Heart Of Karachi ";
	gotoxy(57,23);
	cout<<f;
}
void front2()
{
	char a=15;
	rect(34,6,13,2);
	gotoxy(35,7);
	cout<<" Hotel Amigo";
	rect(5,9,70,10);
	gotoxy(8,11);
	cout<<a<<" Variety Of Rooms";
	gotoxy(40,11);
	cout<<a<<" Stylish Restaurants";
	gotoxy(8,12);
	cout<<a<<" Rent A Car Available";
	gotoxy(40,12);
	cout<<a<<" Free WIFI";
	gotoxy(8,13);
	cout<<a<<" Valle Parking";
	gotoxy(40,13);
	cout<<a<<" Free Breakfast";
	gotoxy(40,14);
	cout<<a<<" Contemporary Business Facilities";
	gotoxy(8,14);
	cout<<a<<" Golf Club And Garden";
	gotoxy(8,15);
	cout<<a<<" Swimming Pool";
	gotoxy(40,15);
	cout<<a<<" Farnished Rooms";
	gotoxy(8,16);
	cout<<a<<" Full Air Conditioned";
	gotoxy(40,16);
	cout<<a<<" Standby Generators";	
	gotoxy(40,17);
	cout<<a<<" Security";
	gotoxy(8,17);
	cout<<a<<" 24 Hour Room Service";
	gotoxy(8,18);
	cout<<a<<" LED screen TV with Local/International Channels and Refrigerator";
}
void main1()
{
	char a;
	system("cls");
	strt:
	rect(29,5,13,2);
	gotoxy(30,6);
	cout<<" Hotel Amigo";
	gotoxy(32,9);
	cout<<"1)Staff.";
	gotoxy(32,11);
	cout<<"2)Guest.";
	gotoxy(32,13);
	cout<<"E)Exit.";
	a=getch();
	if(a==49||a==50)			//49 ascii of 1    50 ascii of 2
	{
		switch (a)
		{
			case 49:			//49=1
			{
				system("cls");
				int j=0;
				char p0[]="amigo";
				string a4,a1="talha",a0="hamza",a2="osama";
				char p[25];
				rect(29,7,13,2);
				gotoxy(30,8);
				cout<<" Hotel Amigo";
				gotoxy(27,11);
				cout<<"Enter Username:";
				getline(cin,a4);
				if(a4.compare(a1)==0 || a4.compare(a2)==0 || a4.compare(a0)==0)
				{
					pswd:
    				system("cls");
					rect(29,7,13,2);
					gotoxy(30,8);
					cout<<" Hotel Amigo";
					gotoxy(27,11);
					cout<<"Enter Password:";
					for(j=0;j<5;j++)
					{
						p[j]=getch();
						cout<<"*";
					}
					if(p[0]=='a' && p[1]=='m' && p[2]=='i'&& p[3]=='g'&& p[4]=='o')
					{
						getch();
						system("cls");
						rect(33,11,13,2);
						gotoxy(35,12);
						cout<<"Welcome..";
						sleep(1);
						system("cls");
						staff();
					}
					else
					{
						gotoxy(28,15);
						cout<<"Invalid Password";
						gotoxy(24,18);
						cout<<"Try Again (T)";
						gotoxy(39,18);
						cout<<"Back (B)";
						char l;
						l=getch();
						if (l=='t' || l=='T')
						{
							goto pswd;
						}
						else
						{
							system("cls");
							goto strt;
						}
					}
				}
				else
				{
					gotoxy(28,15);
					cout<<"Invalid Username";
					sleep(1);
					system("cls");
					goto strt;
				}
				break;
			}
		
	
			case 50:			//50=2
			{
				system("cls");
				guest();
				break;
			}
		}
	}
	
	else if (a=='e'||a=='E')
	{
		end();		
	}
	else
	{
		system("cls");
		gotoxy(27,19);
		cout<<"Wrong Entry Try Again";
		goto strt;
	}		
}
void staff()
{
	sandg("Staff...");
}
void guest()
{
	sandg("Guest...");
}
void sandg(string a1)
{
		char a;
		system("cls");
		strt:
		rect(32,4,13,2);
		gotoxy(33,5);
		cout<<" Hotel Amigo";
		gotoxy(30,8);
		cout<<a1;
		gotoxy(30,9);
		cout<<"1)Reservation";
		gotoxy(30,10);
		cout<<"2)Map";
		gotoxy(30,11);
		cout<<"3)Services";
		gotoxy(30,12);
		cout<<"B)Back";
		gotoxy(30,13);
		cout<<"E)Exit";
		a=getch();
	if(a==49||a==50||a==51)
	{	
		switch (a)
		{
			case 49:
			{
				system("cls");
				if(a1=="Staff...")
				{
				rsrv();
				break;
				}
				else
				{
					crsrv();
					break;
				}
			}
			case 50:
			{
				system("cls");
				mp(a1);
				break;
			}
			case 51:
			{
				system("cls");
				srvc(a1);
				break;
			}
		}
	}
	else if (a=='b'||a=='B')
		{
				system("cls");
				main1();
			
		}
	else if(a=='e'||a=='E')		
		{
			end();
		}	
	else
	{
	
				system("cls");
				gotoxy(27,16);
				cout<<"Wrong Entry Try Again";
				goto strt;
	}
}
void food(string a3)
{
		home:
		int p=0,t,j,k,h[61];
		char r;
		struct food
			{
				char n[50];
				int k,p;
			};
		struct food f[100];
//foods
		{	
			for(j=0;j<=60;j++)
			{
				f[j].k=0;
				f[j].p=0;
				h[j]=0;
			}
		}

		{
    		ifstream s;
//    string line;
    		int l=1;
    //Filing start/.../././././
    		{
    //1st
    //items
    			s.open("Hotel Amigo/Restaurant/Chinese/items.txt");
    			while ( !s.eof())
        		{
            		s.getline(f[l].n,50);
            		l++;
        		}
    			s.close();
    //prices
    		l-=10;
    			s.open("Hotel Amigo/Restaurant/Chinese/prices.txt");
    			while ( !s.eof())
       			{
            		s>>f[l].p;
            		l++;
        		}
    			s.close();

    		}
    		{
        //2nd
        //items
    			s.open("Hotel Amigo/Restaurant/Italian/items.txt");
    			while ( !s.eof())
        		{
            		s.getline(f[l].n,50);
            		l++;
        		}
    			s.close();
    //prices
    		l-=10;
    			s.open("Hotel Amigo/Restaurant/Italian/prices.txt");
    			while ( !s.eof())
        		{
            		s>>f[l].p;
            		l++;
        		}
    			s.close();
    		}
    		{
        //3rd
        //items
   				s.open("Hotel Amigo/Restaurant/French/items.txt");
   				while ( !s.eof())
        		{
            		s.getline(f[l].n,50);
            		l++;
        		}
    			s.close();
        //prices
    		l-=10;
    			s.open("Hotel Amigo/Restaurant/French/prices.txt");
    			while ( !s.eof())
        		{
            		s>>f[l].p;
            		l++;
        		}
    			s.close();

    		}
    		{
        //4th
        //items
    			s.open("Hotel Amigo/Restaurant/Spanish/items.txt");
    			while ( !s.eof())
        		{
            		s.getline(f[l].n,50);
            		l++;
        		}
    			s.close();
        //prices
    		l-=10;
    			s.open("Hotel Amigo/Restaurant/Spanish/prices.txt");
    			while ( !s.eof())
        		{
            		s>>f[l].p;
            		l++;
        		}
    			s.close();

    		}
    		{
        //5th
        //items
    			s.open("Hotel Amigo/Restaurant/Desi/items.txt");
    			while ( !s.eof())
        		{
            		s.getline(f[l].n,50);
            		l++;
        		}
    			s.close();
        //prices
    		l-=10;
    			s.open("Hotel Amigo/Restaurant/Desi/prices.txt");
    			while ( !s.eof())
        		{
            		s>>f[l].p;
            		l++;
        		}
    			s.close();

    		}
    		{
        //6th
        //items
    			s.open("Hotel Amigo/Restaurant/Beverages/items.txt");
    			while ( !s.eof())
        		{
            		s.getline(f[l].n,50);
        		    l++;
        		}
    			s.close();
        //prices
    		l-=10;
    			s.open("Hotel Amigo/Restaurant/Beverages/prices.txt");
    			while ( !s.eof())
        		{
            		s>>f[l].p;
        		    l++;
        		}
    			s.close();
    		}
}

	strt:
	rect(31,3,13,2);
	gotoxy(32,4);
	cout<<" Hotel Amigo";
	gotoxy(32,7);
	cout<<"Restaurants..";
	gotoxy(26,9);
	cout<<"1)Happy Dragon   (Chinese)";
	gotoxy(26,10);
	cout<<"2)Milan's        (italian)";
	gotoxy(26,11);
	cout<<"3)Evangeline     (French)";
	gotoxy(26,12);
	cout<<"4)El Pollo       (Spanish)";
	gotoxy(26,13);
	cout<<"5)Shinwari       (Pakistani)";
	gotoxy(26,14);
	cout<<"6)Beverages";
	gotoxy(33,16);
	cout<<"C)See your Bill";
	gotoxy(35,17);
	cout<<"O)Order it..";
	gotoxy(37,18);
	cout<<"B)Back";
	gotoxy(37,19);
	cout<<"E)Exit";
	r=getch();

	switch (r)
	{
		case 49:
		system("cls");
		case1:
		for(j=1;j<=10;j++)
		{
			if(j==t-47)			
			{
				h[j]=t-48;
				break;
			}
		}
		for(j=1;j<=10;j++)			
		{
			if(f[j].k!=0)
			{
				gotoxy(65,7+h[j]);
				cout<<"x"<<f[j].k;
			}
		}
	rect(10,3,12,2);
	gotoxy(11,4);
	cout<<"Happy Dragon\n";
	gotoxy(30,7);
	cout<<"0)"<<f[1].n<<"\tRs."<<f[1].p;
	gotoxy(30,8);
	cout<<"1)"<<f[2].n<<"\t\tRs."<<f[2].p;
	gotoxy(30,9);
	cout<<"2)"<<f[3].n<<"\tRs."<<f[3].p;
	gotoxy(30,10);
	cout<<"3)"<<f[4].n<<"\t\tRs."<<f[4].p;	
	gotoxy(30,11);
	cout<<"4)"<<f[5].n<<"\tRs."<<f[5].p;
	gotoxy(30,12);
	cout<<"5)"<<f[6].n<<"\tRs."<<f[6].p;	
	gotoxy(30,13);
	cout<<"6)"<<f[7].n<<"\tRs."<<f[7].p;	
	gotoxy(30,14);
	cout<<"7)"<<f[8].n<<"\tRs."<<f[8].p;	
	gotoxy(30,15);
	cout<<"8)"<<f[9].n<<"\tRs."<<f[9].p;	
	gotoxy(30,16);
	cout<<"9)"<<f[10].n<<"\t\tRs."<<f[10].p;	
	gotoxy(15,19);
	cout<<"If Done (D) or Go Back (B) or Exit (E) Use Shift for Cancel:";
	gotoxy(55,19);
	t=getch();
	if(t=='0')
	{
		p+=f[1].p;
		f[1].k++;
		goto case1;
	}
	else if(t=='1')
	{
		p+=f[2].p;
		f[2].k++;
		
		goto case1;
	}
	else if(t=='2')
	{
		p+=f[3].p;
		f[3].k++;
		
		goto case1;
	}
	else if(t=='3')
	{
		p+=f[4].p;
		f[4].k++;
		
		goto case1;
	}
	else if(t=='4')
	{
		p+=f[5].p;
		f[5].k++;
		
		goto case1;
	}
	else if(t=='5')
	{
		p+=f[6].p;
		f[6].k++;
		
		goto case1;
	}
	else if(t=='6')
	{
		p+=f[7].p;
		f[7].k++;
		
		goto case1;
	}
	else if(t=='7')
	{
		p+=f[8].p;
		f[8].k++;
		
		goto case1;
	}
	else if(t=='8')
	{
		p+=f[9].p;
		f[9].k++;
		
		goto case1;
	}
	else if(t=='9')
	{
		p+=f[10].p;
		f[10].k++;
		
		goto case1;
	}
	else if(t==')')
	{
    	if(f[1].k>0)
    	{
       		p-=f[1].p;
        	f[1].k--;
        	
        	system("cls");
        }	goto case1;
    		
	}
	else if(t=='!')
	{
    	if(f[2].k>0)
    	{
        	p-=f[2].p;
        	f[2].k--;
        	
        	system("cls");
        }	goto case1;
    	
	}
	else if(t=='@')
	{
    	if(f[3].k>0)
    	{
       		p-=f[3].p;
        	f[3].k--;
        	
        	system("cls");
        	}goto case1;
    	
	}
	else if(t=='#')
	{
    	if(f[4].k>0)
    	{
        	p-=f[4].p;
        	f[4].k--;
        	
        	system("cls");
        	}goto case1;
    	
	}

	else if(t=='$')
	{
    	if(f[5].k>0)
    	{
        	p-=f[5].p;
        	f[5].k--;
        	
        	system("cls");
        	}goto case1;
    	
	}
	else if(t=='%')
	{
    	if(f[6].k>0)
    	{
        	p-=f[6].p;
        	f[6].k--;
        	
        	system("cls");
        	}goto case1;
    	
	}
	else if(t=='^')
	{
    	if(f[7].k>0)
    	{
       		p-=f[7].p;
        	f[7].k--;
        	
        	system("cls");
        	}goto case1;
    	
	}
	else if(t=='&')
	{
    	if(f[8].k>0)
    	{
        	p-=f[8].p;
        	f[8].k--;
        	
        	system("cls");
        	}goto case1;
    	
	}
	else if(t=='*')
	{
    	if(f[9].k>0)
    	{
        	p-=f[9].p;
        	f[9].k--;
        	
        	system("cls");
        	}goto case1;
    	
	}
	else if(t=='(')
	{
    	if(f[10].k>0)
    	{
        	p-=f[10].p;
        	f[10].k--;
        	
        	system("cls");
        	}goto case1;
    	
	}



	else if(t=='D'|| t=='d')
	{
		system("cls");
		k=0;
		for(j=1;j<=60;j++)
		{
			if(f[j].k!=0)
			{
				k++;
				gotoxy(2,2+k);
				cout<<f[j].n;
				gotoxy(30,2+k);
				cout<<f[j].k;
			}
		}
				gotoxy(28,18);
				cout<<"Your Order Bill is :"<<p;
				gotoxy(15,19);
				cout<<"Wanna Try Again (T) or Go Back (B) or Exit (E) :";
				gotoxy(63,19);
				t=getch();
				if(t=='B'|| t=='b')
				{
					system("cls");
					goto strt;
				}
				else if(t=='T' || t=='t')
				{
					system("cls");
					goto case1;
				}
				else
				{
					end();			
					break;
				}
	}
			else if(t=='B'||t=='b')
			{
				system("cls");
				goto strt;
			}
			else
			{
				end();
				break;
			}

	case 50:
		case2:
		system("cls");
		for(j=11;j<=20;j++)
		{
			if(j==t-37)
			{
				h[j]=t-48;
				break;
			}
		}
		for(j=11;j<=20;j++)
		{
			if(f[j].k!=0)
			{
				gotoxy(75,7+h[j]);
				cout<<"x"<<f[j].k;
			}
		}
				rect(9,3,9,2);
				gotoxy(11,4);
				cout<<"Milan's\n";
				gotoxy(30,7);
				cout<<"0)"<<f[11].n<<"\tRs."<<f[11].p;
				gotoxy(30,8);
				cout<<"1)"<<f[12].n<<"\t\t\tRs."<<f[12].p;
				gotoxy(30,9);
				cout<<"2)"<<f[13].n<<"\t\t\tRs."<<f[13].p;
				gotoxy(30,10);
				cout<<"3)"<<f[14].n<<"\t\t\tRs."<<f[14].p;
				gotoxy(30,11);
				cout<<"4)"<<f[15].n<<"\t\tRs."<<f[15].p;
				gotoxy(30,12);
				cout<<"5)"<<f[16].n<<"\t\t\tRs."<<f[16].p;
				gotoxy(30,13);
				cout<<"6)"<<f[17].n<<"\t\tRs."<<f[17].p;
				gotoxy(30,14);
				cout<<"7)"<<f[18].n<<"\t\t\tRs."<<f[18].p;
				gotoxy(30,15);
				cout<<"8)"<<f[19].n<<"\t\t\tRs."<<f[19].p;
				gotoxy(30,16);
				cout<<"9)"<<f[20].n<<"\t\t\tRs."<<f[20].p;
				gotoxy(15,19);
				cout<<"If Done (D) or Go Back (B) or Exit (E) Use Shift for Cancel:";
				gotoxy(55,19);
				t=getch();
				if(t=='0')
				{
					p+=f[11].p;
					f[11].k++;
					
					goto case2;
				}
				else if(t=='1')
				{
					p+=f[12].p;
					f[12].k++;
					
					goto case2;
				}
				else if(t=='2')
				{
					p+=f[13].p;
					f[13].k++;
					
					goto case2;
				}
				else if(t=='3')
				{
					p+=f[14].p;
					f[14].k++;
					
					goto case2;
				}
				else if(t=='4')
				{
					p+=f[15].p;
					f[15].k++;
					
					goto case2;
				}
				else if(t=='5')
				{
					p+=f[16].p;
					f[16].k++;
					
					goto case2;
				}
				else if(t=='6')
				{
					p+=f[17].p;
					f[17].k++;
					
					goto case2;}
				else if(t=='7')
				{
					p+=f[18].p;
					f[18].k++;
					
					goto case2;
				}
				else if(t=='8')
				{
					p+=f[19].p;
					f[19].k++;
					
					goto case2;
				}
				else if(t=='9')
				{
					p+=f[20].p;
					f[20].k++;
					
					goto case2;
				}
				else if(t==')')
				{
    				if(f[11].k>0)
    				{
        				p-=f[11].p;
        				f[11].k--;
        				
        				system("cls");
        				}goto case2;
    				
				}
				else if(t=='!')
				{
    				if(f[12].k>0)
    				{
        				p-=f[12].p;
        				f[12].k--;
        				
        				system("cls");
        				}goto case2;
    				
				}
				else if(t=='@')
				{
    				if(f[13].k>0)
   					{
        				p-=f[13].p;
        				f[13].k--;
        				
        				system("cls");
        				}goto case2;
    				
				}
				else if(t=='#')
				{
    				if(f[14].k>0)
    				{
        				p-=f[14].p;
        				f[14].k--;
        				
        				system("cls");
        				}goto case2;
    				
				}
				else if(t=='$')
				{
    				if(f[15].k>0)
    				{
        				p-=f[15].p;
        				f[15].k--;
        				
        				system("cls");
        				}goto case2;
    				
				}
				else if(t=='%')
				{
    				if(f[16].k>0)
    				{
        				p-=f[16].p;
        				f[16].k--;
        				
        				system("cls");
        				}goto case2;
    				
				}
				else if(t=='^')
				{
    				if(f[17].k>0)
    				{
        				p-=f[17].p;
        				f[17].k--;
        				
        				system("cls");
        				}goto case2;
    				
				}
				else if(t=='&')
				{
    				if(f[18].k>0)
    				{
        				p-=f[18].p;
        				f[18].k--;
        				
        				system("cls");
        				}goto case2;
    				
				}
				else if(t=='*')
				{
    				if(f[19].k>0)
    				{
        				p-=f[19].p;
        				f[19].k--;
        				
        				system("cls");
        				}goto case2;
    				
				}
				else if(t=='(')
				{
    				if(f[20].k>0)
    				{
        				p-=f[20].p;
        				f[20].k--;
        				
        				system("cls");
        				}goto case2;
    				
				}
				else if(t=='D'|| t=='d')
				{
					system("cls");
					k=0;
					for(j=1;j<=60;j++)
					{
						if(f[j].k!=0)
						{
							k++;
							gotoxy(2,2+k);
							cout<<f[j].n;
							gotoxy(30,2+k);
							cout<<"x"<<f[j].k;
						}
					}
			gotoxy(28,18);
			cout<<"Your Order Bill is :"<<p;
			gotoxy(15,19);
			cout<<"Wanna Try Again (T) or Go Back (B) or Exit (E) :";
			gotoxy(63,19);
			t=getch();
			if(t=='B'|| t=='b')
			{
				system("cls");
				goto strt;
			}
			else if(t=='T' || t=='t')
			{
				goto case2;
			}
			else
			{
				end();
				break;
			}
		}
			else if(t=='B'||t=='b')
			{
				system("cls");
				goto strt;
			}
			else
			{
				end();
				break;
			}

	case 51:
		case3:
		system("cls");
		for(j=21;j<=30;j++)
		{
			if(j==t-27)
			{
				h[j]=t-48;
				break;
			}
		}
		for(j=21;j<=30;j++)
		{
			if(f[j].k!=0)
			{
				gotoxy(75,7+h[j]);
				cout<<"x"<<f[j].k;
			}
		}
		rect(10,3,10,2);
		gotoxy(11,4);
		cout<<"Evangeline\n";
		gotoxy(30,7);
		cout<<"0)"<<f[21].n<<"\t\t\tRs."<<f[21].p;
		gotoxy(30,8);
		cout<<"1)"<<f[22].n<<"\t\tRs."<<f[22].p;
		gotoxy(30,9);
		cout<<"2)"<<f[23].n<<"\tRs."<<f[23].p;
		gotoxy(30,10);
		cout<<"3)"<<f[24].n<<"\tRs."<<f[24].p;
		gotoxy(30,11);
		cout<<"4)"<<f[25].n<<"\t\tRs."<<f[25].p;
		gotoxy(30,12);
		cout<<"5)"<<f[26].n<<"\t\t\tRs."<<f[26].p;
		gotoxy(30,13);
		cout<<"6)"<<f[27].n<<"\t\tRs."<<f[27].p;
		gotoxy(30,14);
		cout<<"7)"<<f[28].n<<"\t\t\tRs."<<f[28].p;
		gotoxy(30,15);
		cout<<"8)"<<f[29].n<<"\t\t\tRs."<<f[29].p;
		gotoxy(30,16);
		cout<<"9)"<<f[30].n<<"\t\tRs."<<f[30].p;
		gotoxy(15,19);
		cout<<"If Done (D) or Go Back (B) or Exit (E) Use Shift for Cancel:";
		gotoxy(55,19);
		t=getch();
		if(t=='0')
		{
			p+=f[21].p;
			f[21].k++;
			
			goto case3;
		}
		else if(t=='1')
		{
			p+=f[22].p;
			f[22].k++;
			
			goto case3;
		}
		else if(t=='2')
		{
			p+=f[23].p;
			f[23].k++;
			
			goto case3;
		}
		else if(t=='3')
		{
			p+=f[24].p;
			f[24].k++;
			
			goto case3;
		}
		else if(t=='4')
		{
			p+=f[25].p;
			f[25].k++;
			
			goto case3;
		}
		else if(t=='5')
		{
			p+=f[26].p;
			f[26].k++;
			
			goto case3;
		}
		else if(t=='6')
		{
			p+=f[27].p;
			f[27].k++;
			
			goto case3;
		}
		else if(t=='7')
		{
			p+=f[28].p;
			f[28].k++;
			
			goto case3;
		}
		else if(t=='8')
		{
			p+=f[29].p;
			f[29].k++;
			
			goto case3;
		}
		else if(t=='9')
		{
			p+=f[30].p;
			f[30].k++;
			
			goto case3;
		}
		else if(t==')')
		{
    		if(f[21].k>0)
    		{
        		p-=f[21].p;
        		f[21].k--;
        		
        		system("cls");
        		}goto case3;
    		
		}
		else if(t=='!')
		{
    		if(f[22].k>0)
    		{
       			p-=f[22].p;
        		f[22].k--;
        		
        		system("cls");
        		}goto case3;
    		
		}
		else if(t=='@')
		{
    		if(f[23].k>0)
    		{
        		p-=f[23].p;
        		f[23].k--;
        		
        		system("cls");
        		}goto case3;
    		
		}
		else if(t=='#')
		{
    		if(f[24].k>0)
    		{
        		p-=f[24].p;
        		f[24].k--;
        		
        		system("cls");
        		}goto case3;
    		
		}
		else if(t=='$')
		{
    		if(f[25].k>0)
    		{
        		p-=f[25].p;
        		f[25].k--;
        		
        		system("cls");
        		}goto case3;
    		
		}
		else if(t=='%')
		{
    		if(f[26].k>0)
    		{
        		p-=f[26].p;
        		f[26].k--;
        		
        		system("cls");
        		}goto case3;
    		
		}
		else if(t=='^')
		{
    		if(f[27].k>0)
    		{
        		p-=f[27].p;
        		f[27].k--;
        		
        		system("cls");
        		}goto case3;
    		
		}
		else if(t=='&')
		{
    		if(f[28].k>0)
    		{
        		p-=f[28].p;
        		f[28].k--;
        		
        		system("cls");
        		}goto case3;
    		
		}
		else if(t=='*')
		{
    		if(f[29].k>0)
    		{
        		p-=f[29].p;
        		f[29].k--;
        		
        		system("cls");
        		}goto case3;
    		
		}
		else if(t=='(')
		{
    		if(f[30].k>0)
    		{
        		p-=f[30].p;
        		f[30].k--;
        		
        		system("cls");
        		}goto case3;
    		
		}
		else if(t=='D'|| t=='d')
		{
			system("cls");
			k=0;
			for(j=1;j<=60;j++)
			{
				if(f[j].k!=0)
				{
					k++;
					gotoxy(2,2+k);
					cout<<f[j].n;
					gotoxy(30,2+k);
					cout<<"x"<<f[j].k;
				}
			}
			gotoxy(28,18);
			cout<<"Your Order Bill is :"<<p;
			gotoxy(15,19);
			cout<<"Wanna Try Again (T) or Go Back (B) or Exit (E) :";
			gotoxy(63,19);
			t=getch();
			if(t=='B'|| t=='b')
			{
				system("cls");
				goto strt;
			}
		else if(t=='T' || t=='t')
		{
			goto case3;
		}
		else
		{
			end();
			break;
		}
	}
		else if(t=='B'||t=='b')
		{
			system("cls");
			goto strt;
		}
		else
		{
			end();
		}

	case 52:
	case4:
	system("cls");
	for(j=31;j<=40;j++)
	{
		if(j==t-17)
		{
			h[j]=t-48;
			break;
		}
	}
	for(j=31;j<=40;j++)
	{
		if(f[j].k!=0)
		{
			gotoxy(75,7+h[j]);
			cout<<"x"<<f[j].k;
		}
	}
	rect(10,3,8,2);
	gotoxy(11,4);
	cout<<"El Pollo";
	gotoxy(30,7);
	cout<<"0)"<<f[31].n<<"\t\t\tRs."<<f[31].p;
	gotoxy(30,8);
	cout<<"1)"<<f[32].n<<"\tRs."<<f[32].p;
	gotoxy(30,9);
	cout<<"2)"<<f[33].n<<"\t\t\tRs."<<f[33].p;
	gotoxy(30,10);
	cout<<"3)"<<f[34].n<<"\t\t\t\tRs."<<f[34].p;
	gotoxy(30,11);
	cout<<"4)"<<f[35].n<<"\t\t\tRs."<<f[35].p;
	gotoxy(30,12);
	cout<<"5)"<<f[36].n<<"\t\t\tRs."<<f[36].p;
	gotoxy(30,13);
	cout<<"6)"<<f[37].n<<"\t\t\tRs."<<f[37].p;
	gotoxy(30,14);
	cout<<"7)"<<f[38].n<<"\t\t\tRs."<<f[38].p;
	gotoxy(30,15);
	cout<<"8)"<<f[39].n<<"\t\t\tRs."<<f[39].p;
	gotoxy(30,16);
	cout<<"9)"<<f[40].n<<"\t\t\tRs."<<f[40].p;
	gotoxy(15,19);
	cout<<"If Done (D) or Go Back (B) or Exit (E) Use Shift for Cancel:";
	gotoxy(55,19);
	t=getch();
	if(t=='0')
	{
		p+=f[31].p;
		f[31].k++;
		
		goto case4;
	}
	else if(t=='1')
	{
		p+=f[32].p;
		f[32].k++;
		
		goto case4;
	}
	else if(t=='2')
	{
		p+=f[33].p;
		f[33].k++;
		
		goto case4;
	}
	else if(t=='3')
	{
		p+=f[34].p;
		f[34].k++;
		
		goto case4;
	}
	else if(t=='4')
	{
		p+=f[35].p;
		f[35].k++;
		
		goto case4;
	}
	else if(t=='5')
	{
		p+=f[36].p;
		f[36].k++;
		
		goto case4;
	}
	else if(t=='6')
	{
		p+=f[37].p;
		f[37].k++;
		
		goto case4;
	}
	else if(t=='7')
	{
		p+=f[38].p;
		f[38].k++;
		
		goto case4;
	}
	else if(t=='8')
	{
		p+=f[39].p;
		f[39].k++;
		
		goto case4;
	}
	else if(t=='9')
	{
		p+=f[40].p;
		f[40].k++;
		
		goto case4;
	}
	else if(t==')')
	{
    	if(f[31].k>0)
    	{
        	p-=f[31].p;
        	f[31].k--;
        
        	system("cls");
        }	goto case4;
    	
	}
	else if(t=='!')
	{
    	if(f[32].k>0)
    	{
    	    p-=f[32].p;
        	f[32].k--;
        
        	system("cls");
        }	goto case4;
    	
	}
	else if(t=='@')
	{
    	if(f[33].k>0)
    	{
       		p-=f[33].p;
        	f[33].k--;
        
        	system("cls");
        }	goto case4;
    	
	}
	else if(t=='#')
	{
    	if(f[34].k>0)
    	{
    	    p-=f[34].p;
    	    f[34].k--;
    	
    	    system("cls");
    	}    goto case4;
    	
	}
	else if(t=='$')
	{
    	if(f[35].k>0)
    	{
    	    p-=f[35].p;
    	    f[35].k--;
    	
    	    system("cls");
   		}    goto case4;
    	
	}
	else if(t=='%')
	{
	    if(f[36].k>0)
    	{
    	    p-=f[36].p;
    	    f[36].k--;
    	
    	    system("cls");
    	}    goto case4;
    	
	}
	else if(t=='^')
	{
    	if(f[37].k>0)
    	{
    	    p-=f[37].p;
    	    f[37].k--;
    	
    	    system("cls");
    	}    goto case4;
    	
	}
	else if(t=='&')
	{
    	if(f[38].k>0)
    	{
    	    p-=f[38].p;
    	    f[38].k--;
        
        	system("cls");
        }	goto case4;
    	
	}
	else if(t=='*')
	{
    	if(f[39].k>0)
    	{
    	    p-=f[39].p;
    	    f[39].k--;
    	
    	    system("cls");
    	}    goto case4;
    	
	}
	else if(t=='(')
	{
    	if(f[40].k>0)
    	{
    	    p-=f[40].p;
    	    f[40].k--;
    	
    	    system("cls");
    	}    goto case4;
    	
	}
	else if(t=='D'|| t=='d')
	{
		system("cls");
		k=0;
		for(j=1;j<=60;j++)
		{
			if(f[j].k!=0)
			{
				k++;
				gotoxy(2,2+k);
				cout<<f[j].n;
				gotoxy(30,2+k);
				cout<<"x"<<f[j].k;
			}
		}
		gotoxy(28,18);
		cout<<"Your Order Bill is :"<<p;
		gotoxy(15,19);
		cout<<"Wanna Try Again (T) or Go Back (B) or Exit (E) :";
		gotoxy(63,19);
		t=getch();
	if(t=='B'|| t=='b')
		{
			system("cls");
			goto strt;
		}
	else if(t=='T' || t=='t')
		{
			goto case4;
		}
	else
	{
		end();
		break;
	}
}
	else if(t=='B'||t=='b')
	{
		system("cls");
		goto strt;
	}
	else
	{
		end();
		break;
	}
	case 53:
	case5:
	system("cls");
	for(j=41;j<=50;j++)
	{
		if(j==t-7)
		{
			h[j]=t-48;
			break;
		}
	}
	for(j=41;j<=50;j++)
	{
		if(f[j].k!=0)
		{
			gotoxy(65,7+h[j]);
			cout<<"x"<<f[j].k;
		}
	}
			rect(10,3,8,2);
			gotoxy(11,4);
			cout<<"Shinwari\n";
			gotoxy(30,7);
			cout<<"0)"<<f[41].n<<"\t\tRs."<<f[41].p;
			gotoxy(30,8);
			cout<<"1)"<<f[42].n<<"\t\tRs."<<f[42].p;
			gotoxy(30,9);
			cout<<"2)"<<f[43].n<<"\tRs."<<f[43].p;
			gotoxy(30,10);
			cout<<"3)"<<f[44].n<<"\t\tRs."<<f[44].p;
			gotoxy(30,11);
			cout<<"4)"<<f[45].n<<"\t\tRs."<<f[45].p;
			gotoxy(30,12);
			cout<<"5)"<<f[46].n<<"\t\tRs."<<f[46].p;
			gotoxy(30,13);
			cout<<"6)"<<f[47].n<<"\tRs."<<f[47].p;
			gotoxy(30,14);
			cout<<"7)"<<f[48].n<<"\t\tRs."<<f[48].p;
			gotoxy(30,15);
			cout<<"8)"<<f[49].n<<"\tRs."<<f[49].p;
			gotoxy(30,16);
			cout<<"9)"<<f[50].n<<"\tRs."<<f[50].p;
			gotoxy(15,19);
			cout<<"If Done (D) or Go Back (B) or Exit (E) Use Shift for Cancel:";
			gotoxy(55,19);
			t=getch();
		if(t=='0')
		{
			p+=f[41].p;
			f[41].k++;
			
			goto case5;
		}
		else if(t=='1')
		{
			p+=f[42].p;
			f[42].k++;
			
			goto case5;
		}
		else if(t=='2')
		{
			p+=f[43].p;
			f[43].k++;
			
			goto case5;
		}
		else if(t=='3')
		{
			p+=f[44].p;
			f[44].k++;
			
			goto case5;
		}
		else if(t=='4')
		{
			p+=f[45].p;
			f[45].k++;
			
			goto case5;
		}
		else if(t=='5')
		{
			p+=f[46].p;
			f[46].k++;
			
			goto case5;
		}
		else if(t=='6')
		{
			p+=f[47].p;
			f[47].k++;
			
			goto case5;
		}
		else if(t=='7')
		{
			p+=f[48].p;
			f[48].k++;
			
			goto case5;
		}
		else if(t=='8')
		{
			p+=f[49].p;
			f[49].k++;
			
			goto case5;
		}
		else if(t=='9')
		{
			p+=f[50].p;
			f[50].k++;
			
			goto case5;
		}
		else if(t==')')
		{
    		if(f[41].k>0)
    		{
        		p-=f[41].p;
        		f[41].k--;
        	
        		system("cls");
        	}	goto case5;
    		
		}
		else if(t=='!')
		{
    		if(f[42].k>0)
    		{
        		p-=f[42].p;
        		f[42].k--;
        	
        		system("cls");
        	}	goto case5;
    		
		}
		else if(t=='@')
		{
    		if(f[43].k>0)
    		{
        		p-=f[43].p;
        		f[43].k--;
        	
        		system("cls");
        	}	goto case5;
    		
		}
		else if(t=='#')
		{
    		if(f[44].k>0)
    		{
        		p-=f[44].p;
        		f[44].k--;
        	
        		system("cls");
        	}	goto case5;
    		
		}
		else if(t=='$')
		{
    		if(f[45].k>0)
    		{
        		p-=f[45].p;
        		f[45].k--;
        	
        		system("cls");
        	}	goto case5;
    		
		}
		else if(t=='%')
		{
    		if(f[46].k>0)
    		{
        		p-=f[46].p;
        		f[46].k--;
        	
        		system("cls");
        	}	goto case5;
    		
		}
		else if(t=='^')
		{
    		if(f[47].k>0)
    		{
        		p-=f[47].p;
        		f[47].k--;
        	
        		system("cls");
        	}	goto case5;
    		
		}
		else if(t=='&')
		{
    		if(f[48].k>0)
    		{
        		p-=f[48].p;
        		f[48].k--;
        	
        		system("cls");
        	}	goto case5;
    		
		}
		else if(t=='*')
		{
    		if(f[49].k>0)
    		{
        		p-=f[49].p;
        		f[49].k--;
        	
        		system("cls");
        	}	goto case5;
    		
		}
		else if(t=='(')
		{
    		if(f[50].k>0)
    		{
        		p-=f[50].p;
        		f[50].k--;
        	
        		system("cls");
        	}	goto case5;
    		
		}
		else if(t=='D'|| t=='d')
		{
			system("cls");
			k=0;
			for(j=1;j<=60;j++)
			{
				if(f[j].k!=0)
				{
					k++;
					gotoxy(2,2+k);
					cout<<f[j].n;
					gotoxy(30,2+k);
					cout<<"x"<<f[j].k;
				}
			}
			gotoxy(28,18);
			cout<<"Your Order Bill is :"<<p;
			gotoxy(15,19);
			cout<<"Wanna Try Again (T) or Go Back (B) or Exit (E) :";
			gotoxy(63,19);
			t=getch();
			if(t=='B'|| t=='b')
			{
				system("cls");
				goto strt;
			}
			else if(t=='T' || t=='t')
			{
				goto case5;
			}
			else
			{
				end();
				break;
			}
	}
		else if(t=='B'||t=='b')
		{
			system("cls");
			goto strt;
		}
		else
		{
			end();
			break;
		}

	case 54:
		case6:
		system("cls");
		for(j=51;j<=60;j++)
		{
			if(j==t+3)
			{
				h[j]=t-48;
				break;
			}
		}
		for(j=51;j<=60;j++)
		{
			if(f[j].k!=0)
			{
				gotoxy(65,7+h[j]);
				cout<<"x"<<f[j].k;
			}
		}
				rect(10,3,9,2);
				gotoxy(11,4);
				cout<<"Beverages\n";
				gotoxy(30,7);
				cout<<"0)"<<f[51].n<<"\t\tRs."<<f[51].p;
				gotoxy(30,8);
				cout<<"1)"<<f[52].n<<"\t\tRs."<<f[52].p;
				gotoxy(30,9);
				cout<<"2)"<<f[53].n<<"\t\tRs."<<f[53].p;
				gotoxy(30,10);
				cout<<"3)"<<f[54].n<<"\t\tRs."<<f[54].p;
				gotoxy(30,11);
				cout<<"4)"<<f[55].n<<"\tRs."<<f[55].p;
				gotoxy(30,12);
				cout<<"5)"<<f[56].n<<"\tRs."<<f[56].p;
				gotoxy(30,13);
				cout<<"6)"<<f[57].n<<"\t\tRs."<<f[57].p;
				gotoxy(30,14);
				cout<<"7)"<<f[58].n<<"\tRs."<<f[58].p;
				gotoxy(30,15);
				cout<<"8)"<<f[59].n<<"\t\tRs."<<f[59].p;
				gotoxy(30,16);
				cout<<"9)"<<f[60].n<<"\t\tRs."<<f[60].p;
				gotoxy(15,19);
				cout<<"If Done (D) or Go Back (B) or Exit (E) Use Shift for Cancel:";
				gotoxy(55,19);
				t=getch();
				if(t=='0')
				{
					p+=f[51].p;
					f[51].k++;
					
					goto case6;
				}
				else if(t=='1')
				{
					p+=f[52].p;
					f[52].k++;
					
					goto case6;
				}
				else if(t=='2')
				{
					p+=f[53].p;
					f[53].k++;
					
					goto case6;
				}
				else if(t=='3')
				{
					p+=f[54].p;
					f[54].k++;
					
					goto case6;
				}
				else if(t=='4')
				{
					p+=f[55].p;
					f[55].k++;
					
					goto case6;
				}
				else if(t=='5')
				{
					p+=f[56].p;
					f[56].k++;
					
					goto case6;
				}
				else if(t=='6')		
				{
					p+=f[57].p;
					f[57].k++;
					
					goto case6;
				}
				else if(t=='7')
				{
					p+=f[58].p;
					f[58].k++;
					
					goto case6;
				}
				else if(t=='8')
				{
					p+=f[59].p;
					f[59].k++;
					
					goto case6;
				}
				else if(t=='9')
				{
					p+=f[60].p;
					f[60].k++;
					
					goto case6;
				}
				else if(t==')')
				{
    				if(f[51].k>0)
    				{
        				p-=f[51].p;
        				f[51].k--;
        			
        				system("cls");
        			}	goto case6;
    				
				}
				else if(t=='!')
				{
    				if(f[52].k>0)
    				{
        				p-=f[52].p;
        				f[52].k--;
        			
        				system("cls");
        			}	goto case6;
    				
				}
				else if(t=='@')
				{
    				if(f[53].k>0)
    				{
        				p-=f[53].p;
       					f[53].k--;
        			
        				system("cls");
        			}	goto case6;
    				
				}
				else if(t=='#')
				{
    				if(f[54].k>0)
    				{
        				p-=f[54].p;
        				f[54].k--;
        			
        				system("cls");
        			}	goto case6;
    				
				}
				else if(t=='$')
				{
    				if(f[55].k>0)
    				{
        				p-=f[55].p;
        				f[55].k--;
        			
        				system("cls");
        			}	goto case6;
    				
				}
				else if(t=='%')
				{
    				if(f[56].k>0)
    				{
        				p-=f[56].p;
        				f[56].k--;
        			
        				system("cls");
        			}	goto case6;
    				
				}
				else if(t=='^')
				{
    				if(f[57].k>0)
    				{
        				p-=f[57].p;
        				f[57].k--;
        			
        				system("cls");
        			}	goto case6;
    							
				}
				else if(t=='&')
				{
    				if(f[58].k>0)
    				{
        				p-=f[58].p;
        				f[58].k--;
        			
        				system("cls");
        			}	goto case6;
    				
				}
				else if(t=='*')
				{
    				if(f[59].k>0)
    				{
        				p-=f[59].p;
        				f[59].k--;
        			
        				system("cls");
        			}	goto case6;
    				
				}
				else if(t=='(')
				{
    				if(f[60].k>0)
    				{
        				p-=f[60].p;
        				f[60].k--;
        			
        				system("cls");
        			}	goto case6;
    				
				}
				else if(t=='D'|| t=='d')
				{
					system("cls");
					k=0;
					for(j=1;j<=60;j++)
					{	
						if(f[j].k!=0)
						{
							k++;
							gotoxy(2,2+k);
							cout<<f[j].n;
							gotoxy(30,2+k);
							cout<<"x"<<f[j].k;
						}
					}
					gotoxy(28,18);
					cout<<"Your Order Bill is :"<<p;
					gotoxy(15,19);
					cout<<"Wanna Try Again (T) or Go Back (B) or Exit (E) :";
					gotoxy(63,19);
					t=getch();
					if(t=='B'|| t=='b')
					{
						system("cls");
						goto strt;
					}
					else if(t=='T' || t=='t')
					{
						goto case6;
					}
					else
					{
						end();
						break;
					}
}
	else if(t=='B'||t=='b')
	{
		system("cls");
		goto strt;
	}
	else
	{
		end();	
		break;
	}

case 67:
case 99:
	system("cls");
	k=0;
	gotoxy(2,1+k);
	cout<<"Name:\t\t\t\t  Price    Quantity   Total";
	for(j=1;j<=60;j++)
	{
		if(f[j].k!=0)
		{
			k++;
			gotoxy(2,2+k);
			cout<<f[j].n;
			gotoxy(34,2+k);
			cout<<"x"<<f[j].p;
			gotoxy(43,2+k);
			cout<<"x"<<f[j].k;
			gotoxy(54,2+k);
			cout<<"x"<<(f[j].k)*(f[j].p);
		}
	}
	gotoxy(28,4+k);
	cout<<"Your Order Bill is :"<<p;
	gotoxy(27,6+k);
	cout<<"Go Back (B) or Exit (E) :";
	gotoxy(40,19);
	t=getch();
	if(t=='B'|| t=='b')
	{	
		system("cls");
		goto strt;
	}
	else
	{
		end();
		break;
	}
case 79:
case 111:
	system("cls");
	rect(34,11,13,2);
	gotoxy(35,12);
	cout<<" Hotel Amigo";
	gotoxy(27,15);
	cout<<"Order Will be Deliver soon...";
	sleep(1);
	system("cls");
	goto home;
case 98:
case 66:
	system("cls");
	srvc(a3);
	break;
case 69:
case 101:
	end();
	break;
default:
	system("cls");
	gotoxy(30,20);
	cout<<"Wrong Entry Try Again";
	goto strt;
	}
}
void rect(int x1,int y1,int x,int y)
{
		int i,j;
		char a=-55,b=-56,c=-70,d=-51,e=-69,f=-68;
		for(i=0;i<=y;i++)
		{
			gotoxy(x1,i+y1);
			if(i==0)
			{
				cout<<a;
			}
			else if(i==y)
			{
				cout<<b;
			}
			else
			{
				cout<<c;
			}
		}
		for(j=1;j<=x;j++)
		{
			gotoxy(j+x1,y1);
			{
			cout<<d;
			}
		}
		for(i=0;i<=y;i++)
		{
			gotoxy(x+x1+1,i+y1);
			if(i==0)
			{
				cout<<e;
			}
			else if(i==y)
			{
				cout<<f;
			}
			else
			{
				cout<<c;
			}
		}
		for(j=1;j<=x;j++)
		{	
			gotoxy(j+x1,i+y1-1);
			{
				cout<<d;
			}
		}
}
void end()
{
		system("cls");
		rect(34,11,13,2);
		gotoxy(35,12);
		cout<<" Hotel Amigo";
		gotoxy(33,15);
		cout<<"Have A Good Day..";
		sleep(1);
}
void gotoxy(int x,int y)
{	
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
