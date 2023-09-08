#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string.h>
#include <time.h>
using namespace std;
char f[10] = "first";
char s[10] = "second";
char th[10] = "third";
char cc[10] = "chair";
char ss[10] = "seater";
char sl[10] = "sleeper";
char gn[10] = "general";
int addr, ad, flag, f1, d, m, i, k, amt;
int v=1,w=1,x=1,y=1,z=1;
float tamt;
class login
{
	public:
	int dd,mm,yy;
	char ufname[40];
	char ulname[15];
	int id;
	char pass[15];
	void getid()
	{
		time_t t;
		cout << "\nEnter User Last Name: ";
		cin >> ulname;
		cout << "\nEnter User First Name: ";
		cin >> ufname;
		strcat(ufname,ulname);
		cout << "\nEnter Date of Birth: ";
		do
		{
			cin >> dd >> mm >> yy;
			if(yy>2003)
			{
				cout << "You are not 18 years old yet.";
				continue;
			}
			else if (yy<1920||mm<01||mm>12||dd>31||dd<00)
			{
				cout << "Please recheck the information and input properly.\n";
				continue;
			}
			else if ((dd>29&&mm==02)||(dd==29&&mm==02&&(yy%4!=0)))
			{
				cout << "February has 28 days, and 29 in leap years only.Please recheck the information.\n";
				continue;
			}
			x=0;
		} while(x);
		srand((unsigned)time(&t));
		id=rand();
		strcpy(pass,ulname);
		cout << "\nUser ID: " << id;
		cout << "\nPassword: " << pass;
	}
	void displayid()
	{
	    cout << "\n\nUser ID: " << id;
	    cout << "\nPassword: " << pass;
	    cout << "\nUser Name: " << ufname;
	    cout << "\nUser D-O-B: " << dd << "-" << mm << "-" << yy;
	}
};
class Detail
{
	public:
		int tno;
		char tname[100];
		char bp[100];
		char dest[100];
		int c1,c1fare;
		int c2,c2fare;
		int c3,c3fare;
		int cc,ccfare;
		int ss,ssfare;
		int sl,slfare;
		int gn,gnfare;
		int dpth,dptm;
		int arvh,arvm;
		void getDetail()
		{
			cout << "\n--Add New details--\n";
			cout << "Train No.: ";
			cin >> tno;
			cout << "Train Name: ";
			cin >> tname;
			cout << "Boarding pt: ";
			cin >> bp;
			cout << "Destination pt: ";
			cin >> dest;
			cout << "Time of Departure: ";
			do
			{
				cout << "Hours: ";
				cin >> dpth;
				if(dpth>23 || dpth<00)
				{
					cout << "Hours has to be between 00 and 23. Please input properly.";
					continue;
				}
				cout << "Minutes: ";
				cin >> dptm;
				if(dptm>59 || dptm<00)
				{
					std::cout << "Minutes has to be between 00 and 59. Please input properly.";
					continue;
				}
				y=0;
			} while (y);
			cout << "Time of Arrival: ";
			do
			{
				cout << "Hours: ";
				cin >> arvh;
				if(arvh>23 || arvh<00)
				{
					cout << "Hours has to be between 00 and 23. Please input properly.";
					continue;
				}
				cout << "Minutes: ";
				cin >> arvm; 
				if(arvm>59 || arvm<00)
				{
					cout << "Minutes has to be between 00 and 59. Please input properly.";
					continue;
				}
				z=0;
			} while (z);
			cout << "No. of seats in 1A (AC 1st Class) & fare per ticket: ";
			cin >> c1 >> c1fare;
			cout << "No. of seats in 2A (AC 2nd Class) & fare per ticket: ";
			cin >> c2 >> c2fare;
			cout << "No. of seats in 3A (AC 3rd Class) & fare per ticket: ";
			cin >> c3 >> c3fare;
			cout << "No. of seats in CC (AC Chair Car) & fare per ticket: ";
			cin >> cc >> ccfare;
			cout << "No. of seats in 2S (Seater Class) & fare per ticket: ";
			cin >> ss >> ssfare;
			cout << "No. of seats in SL (Sleeper Class) & fare per ticket: ";
			cin >> sl >> slfare;
			cout << "No. of seats in GN (General Class) & fare per ticket: ";
			cin >> gn >> gnfare;
		}
		void displaydetail()
		{
		    cout << "\n\nTrain No.: " << tno << "\nTrain Name: " << tname; 
			cout << "\nBoarding pt: " << bp << "\nDestination pt: " << dest;
			cout << "\nTime of Departure: \n" << dpth << ":" << dptm;
			cout << "\nTime of Arrival: \n" << arvh << ":" << arvm; 
			cout << "\nSeat Chart & Fare: \n";
			cout << "\n1A (AC 1st Class)\t| " << "No. of seats available: " << c1 << "\t| Price: " << c1fare;
			cout << "\n2A (AC 2nd Class)\t| " << "No. of seats available: " << c2 << "\t| Price: " << c2fare;
			cout << "\n3A (AC 3rd Class)\t| " << "No. of seats available: " << c3 << "\t| Price: " << c3fare;
			cout << "\nCC (AC Chair Car)\t| " << "No. of seats available: " << cc << "\t| Price: " << ccfare;
			cout << "\n2S (Seater Class)\t| " << "No. of seats available: " << ss << "\t| Price: " << ssfare;
			cout << "\nSL (Sleeper Class)\t| " << "No. of seats available: " << sl << "\t| Price: " << slfare;
			cout << "\nGN (General Class)\t| " << "No. of seats available: " << gn << "\t| Price: " << gnfare;
		}
};
class reser
{
	public:
	int pnr;
	int tno;
	int mpn;
	char tname[100];
	char bp[10];
	char dest[100];
	char pname[10][100];
	int age[20];
	char clas[10];
	char ch[10];
	int nosr;
	int i;
	int d,m,y;
	int con;
	float amc;
	void getresdet()
	{
		cout<<"Enter the details as follows\n";
		cout<<"Train No.: ";
		cin>>tno;
		cout<<"Train Name: ";
		cin>>tname;
		cout<<"Boarding pt: ";
		cin>>bp;
		cout<<"Destination pt: ";
		cin>>dest;
		cout<<"No. of seats required: ";
		cin>>nosr;
		for(i=0;i<nosr;i++)
		{
			cout<< i+1 << " Passenger Name: ";
			cin >> pname[i];
			cout<< i+1 << " Passenger Age: ";
			cin>>age[i];
		}
		cout<<"\nEnter the class:\nfirst- AC 1st class\nsecond- AC 2nd class\nthird- AC 3rd class\nchair- AC Chair Car\nseater- Seater class\nsleeper- Sleeper class\ngeneral- General class\n";
		cin >> clas;
		cout<<"Date of Journey: ";
		do
		{
			cin >> d >> m >> y;
			if(y>2022)
			{
				cout << "Tickets cannot be booked for next year.";
				continue;
			}
			else if (y<2022||m<01||m>12||d>31||d<00)
			{
				cout << "Please recheck the information and input properly.\n";
				continue;
			}
			else if (d>28&&m==02)
			{
				cout << "February has 28 days only.Please recheck the information.\n";
				continue;
			}
			w=0;
		} while(w);
		do
		{
			cout<<"Enter the concession category:\n";
			cout<<"1.Military Personnel\n2.Senior citizen\n";
			cout<<"3.Children below 5 yrs\n4.None\n";
			cin>>con;
			if(con==1)
			{
				cout << "\nHow many persons are military personnels?";
				cin >> mpn;
			}
			
			cout << "\nDo you want to apply for one more category of concession?";
			cout << "\nY-Yes\tN-No";
			cin >> ch;
		} 
		while(ch=="Y"||ch=="y");
		{
		cout<<"******END OF GETTING DETAILS******\n";}
	}
	void displayresdet()
	{
		cout<<"\nPNR No: "<<pnr;
		cout<<"\nTrain No.: "<<tno;
		cout<<"\nTrain Name: "<<tname;
		cout<<"\nBoarding pt: "<<bp;
		cout<<"\nDestination pt: "<<dest;
		cout<<"\nNo. of seats reserved: "<<nosr;
		for(i=0;i<nosr;i++)
		{
			cout << "\nPassenger " << i+1 << " Name: ";puts(pname[i]);
			cout << "\nPassenger " << i+1 <<" Age: "<<age[i];
		}

		cout<<"\nClass Reserved: ";puts(clas);
		cout<<"\nDate of Journey: " << d << "-" << m << "-" << y;
		cout<<"\nTotal Fare: "<< amc << endl;
		cout<<"***********************************\n";
	}
};
class canc
{
    public:
    int pnr;
    int tno;
    char tname[100];
    char bp[10];
    char dest[100];
    char pname[10][100];
    int age[20];
    int i;
    char clas[10];
    int nosc;
    int d, m, y;
    float amr;
    void getcancdet()
    {
        cout << "Enter the details as follows----\n";
        cout << "PNR No.: ";
        cin >> pnr;
        cout << "Date of Cancellation: ";
        do
		{
			cin >> d >> m >> y;
			if (y!=2022||m<01||m>12||d>31||d<00)
			{
				cout << "Please recheck the information and input properly.\n";
				continue;
			}
			else if (d>28&&m==02)
			{
				cout << "February has 28 days only.Please recheck the information.\n";
				continue;
			}
			v=0;
		} while(v);
        cout << "******END OF GETTING DETAILS******\n";
    }
    void displaycancdet()
    {
        cout << "******************\n";
        cout << "******************\n";
        cout << "\nPNR No.: " << pnr;
        cout << "\nTrain No.: " << tno;
        cout << "\nTrain Name: " << tname;
        cout << "\nBoarding pt: " << bp;
        cout << "\nDestination pt: " << dest;
        cout << "\nYour class: " << clas;
        cout << "\nNo. of seats to be cancelled: " << nosc;
        for (i = 0; i < nosc; i++)
        {
            cout << "\nPassenger " << i+1 << " Name: " << pname[i];
            cout << "\nPassenger " << i+1 << " Age: " << age[i];
        }
        cout << "\nDate of Cancellation: " << d << "-" << m << "-" << y;
        cout << "\nYou can collect:" << amr << "rs" << endl;
        cout << "*****************************************\n";
        cout << "******END OF CANCELLATION******\n";
        cout << "*****************************************\n";
    }
};
void manage();
void user();
void database();
void res();
void displaypassdetail();
void cancel();
void enquiry();
int main(void)
{
	int ch;
	cout << "----- RAILWAY RESERVATION SYSTEM ----- \n";
	do
	{
		cout << "\n MAIN MENU \n";
		cout << "1.Admin mode\n2.User mode\n3.Exit \n";
		cout << "Enter your choice : ";
		cin >> ch;
		switch(ch)
		{
			case 1:
				database();
				break;
			case 2:
				user();
				break;
			default:
				exit(0);
		}
	}while(ch<3);

	return 0;
}

void database()
{
	char password[10];
	char pass[10] = "admin";
	cout << "\nEnter the Admin Password: ";
	cin >> password;
	Detail a;
	fstream f;
	int ch;
	char c;
	if(strcmp(pass,password)!=0)
	{
		cout << "Enter the password correctly \n";
		cout << "You are not permitted to login this mode\n";
	}
	if(strcmp(pass,password)==0)
	{
		char c;
		do
		{
			cout << "\n --- ADMINISTRATOR MENU --- \n";
			cout << "1. Create detailed Database \n";
			cout << "2. Add details \n";
			cout << "3. Display details \n";
			cout << "4. User Management \n";
			cout << "5. Display Passenger details \n";
			cout << "6. Return to Main Menu \n";
			cout << "Enter your choice : ";
			cin >> ch;

			switch(ch)
			{
				case 1:
					f.open("t.txt",ios::out|ios::binary);
					do
					{
					a.getDetail();
					f.write((char *) & a,sizeof(a));
					cout << "\nDo you want to add one more record?\n";
					cout << "y-for Yes\nn-for No\n";
					cin >> c;
					}while(c=='y');
					f.close();
					break;
				case 2:
					f.open("t.txt",ios::in|ios::out|ios::binary|ios::app);
					a.getDetail();
					f.write((char *) & a,sizeof(a));
					f.close();
					break;
				case 3:
					f.open("t.txt",ios::in|ios::out|ios::binary|ios::app);
					f.seekg(0);
					while(f.read((char *) & a,sizeof(a)))
					{
					a.displaydetail();
					}
					f.close();
					break;
				case 4:
					manage();
					break;
				case 5:
					displaypassdetail();
					break;
			}
		}while(ch<=5);
	}
}
void res()
{
    Detail a;
    reser b;
    fstream f1, f2;
    time_t t;
    f1.open("t.txt", ios::in | ios::out | ios::binary);
    f2.open("p.txt", ios::in | ios::out | ios::binary | ios::app);
    int ch;
    int count=0;
    b.getresdet();
    while (f1.read((char *)&a, sizeof(a)))
    {
        if (a.tno == b.tno)
        {
            if (strcmp(b.clas, f) == 0)
            {
                if (a.c1 >= b.nosr)
                {
                    amt = a.c1fare;
                    addr = f1.tellg();
                    ad = sizeof(a.c1);
                    f1.seekp(addr - (7 * ad));
                    a.c1 = a.c1 - b.nosr;
                    f1.write((char *)&a.c1, sizeof(a.c1));
                    if (b.con == 1)
                    {
                        cout << "Concession category: MILITARY PERSONNEL\n";
                        b.amc = (b.mpn * ((amt * 50) / 100)) + ((b.nosr - b.mpn) * amt);
                    }
                    else if (b.con == 2)
                    {
                    	for(int k=0;k<b.nosr;k++)
                    	{
                    		if(b.age[k]>=60)
                    			count++;
						}
						if(count)
						{
							cout << "Concession category: SENIOR CITIZEN\n";
							cout << count << " person(s) are eligible for this concession.";	
						}
                        else cout << "You are not eligible for this concession.";
                        b.amc = (count * ((amt * 60) / 100)) + ((b.nosr - count) * amt);
                    }
                    else if (b.con == 3)
                    {
                    	for(int k=0;k<b.nosr;k++)
                    	{
                    		if(b.age[k]<5)
                    			count++;
						}
						if(count)
						{
							cout << "Concession category: CHILDERN BELOW FIVE\n";
							cout << count << " person(s) are eligible for this concession.";
						}
                        else cout << "You are not eligible for this concession.";
                        b.amc = (b.nosr - count) * amt;	
                    }
                    else if (b.con == 4)
                    {
                        cout << "You did not apply for any concession.\n";
                        b.amc = b.nosr * amt;
                    }
                    srand((unsigned)time(&t));
                    b.pnr = rand();
                    f2.write((char *)&b, sizeof(b));
                    b.displayresdet();
                    cout << "\n-----Your ticket is reserved-----\n";
                }
                else
                {
                    cout << "**********Required no. of seats not available********\n";
                }
            }
            else if (strcmp(b.clas, s) == 0)
            {
                if (a.c2 >= b.nosr)
                {
                    amt = a.c2fare;
                    addr = f1.tellg();
                    ad = sizeof(a.c2);
                    f1.seekp(addr - (5 * ad));
                    a.c2 = a.c2 - b.nosr;
                    f1.write((char *)&a.c2, sizeof(a.c2));
                    if (b.con == 1)
                    {
                        cout << "Concession category: MILITARY PERSONNEL\n";
                        b.amc = (b.mpn * ((amt * 50) / 100)) + ((b.nosr - b.mpn) * amt);
                    }
                    else if (b.con == 2)
                    {
                    	for(int k=0;k<b.nosr;k++)
                    	{
                    		if(b.age[k]>=60)
                    			count++;
						}
						if(count)
						{
							cout << "Concession category: SENIOR CITIZEN\n";
							cout << count << " person(s) are eligible for this concession.";
						}
                        else cout << "You are not eligible for this concession.";
                        b.amc = (count * ((amt * 60) / 100)) + ((b.nosr - count) * amt);	
                    }
                    else if (b.con == 3)
                    {
                    	for(int k=0;k<b.nosr;k++)
                    	{
                    		if(b.age[k]<5)
                    			count++;
						}
						if(count)
						{
							cout << "Concession category: CHILDERN BELOW FIVE\n";
							cout << count << " person(s) are eligible for this concession.";	
						}
                        else cout << "You are not eligible for this concession.";
                        b.amc = (b.nosr - count) * amt;
                    }
                    else if (b.con == 4)
                    {
                        cout << "You did not apply for any concession.\n";
                        b.amc = b.nosr * amt;
                    }
                    srand((unsigned)time(&t));
                    b.pnr = rand();
                    f2.write((char *)&b, sizeof(b));
                    b.displayresdet();
                    cout << "\n-----Your ticket is reserved-----\n";
                }
                else
                {
                    cout << "********Required no. of seats not available*******\n";
                }
            }
            else if (strcmp(b.clas, th) == 0)
            {
                if (a.c3 >= b.nosr)
                {
                    amt = a.c3fare;
                    addr = f1.tellg();
                    ad = sizeof(a.c3);
                    f1.seekp(addr - (5 * ad));
                    a.c3 = a.c3 - b.nosr;
                    f1.write((char *)&a.c3, sizeof(a.c3));
                    if (b.con == 1)
                    {
                        cout << "Concession category: MILITARY PERSONNEL\n";
                        b.amc = (b.mpn * ((amt * 50) / 100)) + ((b.nosr - b.mpn) * amt);
                    }
                    else if (b.con == 2)
                    {
                    	for(int k=0;k<b.nosr;k++)
                    	{
                    		if(b.age[k]>=60)
                    			count++;
						}
						if(count)
						{
							cout << "Concession category: SENIOR CITIZEN\n";
							cout << count << " person(s) are eligible for this concession.";	
						}
                        else cout << "You are not eligible for this concession.";
                        b.amc = (count * ((amt * 60) / 100)) + ((b.nosr - count) * amt);
                    }
                    else if (b.con == 3)
                    {
                    	for(int k=0;k<b.nosr;k++)
                    	{
                    		if(b.age[k]<5)
                    			count++;
						}
						if(count)
						{
							cout << "Concession category: CHILDERN BELOW FIVE\n";
							cout << count << " person(s) are eligible for this concession.";	
						}
                        else cout << "You are not eligible for this concession.";
                        b.amc = (b.nosr - count) * amt;
                    }
                    else if (b.con == 4)
                    {
                        cout << "You did not apply for any concession.\n";
                        b.amc = b.nosr * amt;
                    }
                    srand((unsigned)time(&t));
                    b.pnr = rand();
                    f2.write((char *)&b, sizeof(b));
                    b.displayresdet();
                    cout << "\n-----Your ticket is reserved-----\n";
                }
                else
                {
                    cout << "********Required no. of seats not available*******\n";
                }
        	}
            else if (strcmp(b.clas, cc) == 0)
            {
                if (a.cc >= b.nosr)
                {
                    amt = a.ccfare;
                    addr = f1.tellg();
                    ad = sizeof(a.cc);
                    f1.seekp(addr - (5 * ad));
                    a.cc = a.cc - b.nosr;
                    f1.write((char *)&a.cc, sizeof(a.cc));
                    if (b.con == 1)
                    {
                        cout << "Concession category: MILITARY PERSONNEL\n";
                        b.amc = (b.mpn * ((amt * 50) / 100)) + ((b.nosr - b.mpn) * amt);
                    }
                    else if (b.con == 2)
                    {
                    	for(int k=0;k<b.nosr;k++)
                    	{
                    		if(b.age[k]>=60)
                    			count++;
						}
						if(count)
						{
							cout << "Concession category: SENIOR CITIZEN\n";
							cout << count << " person(s) are eligible for this concession.";	
						}
                        else cout << "You are not eligible for this concession.";
                        b.amc = (count * ((amt * 60) / 100)) + ((b.nosr - count) * amt);
                    }
                    else if (b.con == 3)
                    {
                    	for(int k=0;k<b.nosr;k++)
                    	{
                    		if(b.age[k]<5)
                    			count++;
						}
						if(count)
						{
							cout << "Concession category: CHILDERN BELOW FIVE\n";
							cout << count << " person(s) are eligible for this concession.";	
						}
                        else cout << "You are not eligible for this concession.";
                        b.amc = (b.nosr - count) * amt;
                    }
                    else if (b.con == 4)
                    {
                        cout << "You did not apply for any concession.\n";
                        b.amc = b.nosr * amt;
                    }
                    srand((unsigned)time(&t));
                    b.pnr = rand();
                    f2.write((char *)&b, sizeof(b));
                    b.displayresdet();
                    cout << "\n-----Your ticket is reserved-----\n";
                }
                else
                {
                    cout << "********Required no. of seats not available*******\n";
                }
        	}
            else if (strcmp(b.clas, ss) == 0)
            {
                if (a.ss >= b.nosr)
                {
                    amt = a.ssfare;
                    addr = f1.tellg();
                    ad = sizeof(a.ss);
                    f1.seekp(addr - (5 * ad));
                    a.ss = a.ss - b.nosr;
                    f1.write((char *)&a.ss, sizeof(a.ss));
                    if (b.con == 1)
                    {
                        cout << "Concession category: MILITARY PERSONNEL\n";
                        b.amc = (b.mpn * ((amt * 50) / 100)) + ((b.nosr - b.mpn) * amt);
                    }
                    else if (b.con == 2)
                    {
                    	for(int k=0;k<b.nosr;k++)
                    	{
                    		if(b.age[k]>=60)
                    			count++;
						}
						if(count)
						{
							cout << "Concession category: SENIOR CITIZEN\n";
							cout << count << " person(s) are eligible for this concession.";	
						}
                        else cout << "You are not eligible for this concession.";
            			b.amc = (count * ((amt * 60) / 100)) + ((b.nosr - count) * amt);
                    }
                    else if (b.con == 3)
                    {
                    	for(int k=0;k<b.nosr;k++)
                    	{
                    		if(b.age[k]<5)
                    			count++;
						}
						if(count)
						{
							cout << "Concession category: CHILDERN BELOW FIVE\n";
							cout << count << " person(s) are eligible for this concession.";
						}
                        else cout << "You are not eligible for this concession.";
                        b.amc = (b.nosr - count) * amt;	
                    }
                    else if (b.con == 4)
                    {
                        cout << "You did not apply for any concession.\n";
                        b.amc = b.nosr * amt;
                    }
                    srand((unsigned)time(&t));
                    b.pnr = rand();
                    f2.write((char *)&b, sizeof(b));
                    b.displayresdet();
                    cout << "\n-----Your ticket is reserved-----\n";
                }
                else
                {
                    cout << "********Required no. of seats not available*******\n";
                }
            }
            else if (strcmp(b.clas, sl) == 0)
            {
                if (a.sl >= b.nosr)
                {
                    amt = a.slfare;
                    addr = f1.tellg();
                    ad = sizeof(a.sl);
                    f1.seekp(addr - (5 * ad));
                    a.sl = a.sl - b.nosr;
                    f1.write((char *)&a.sl, sizeof(a.sl));
                    if (b.con == 1)
                    {
                        cout << "Concession category: MILITARY PERSONNEL\n";
                        b.amc = (b.mpn * ((amt * 50) / 100)) + ((b.nosr - b.mpn) * amt);
                    }
                    else if (b.con == 2)
                    {
                    	for(int k=0;k<b.nosr;k++)
                    	{
                    		if(b.age[k]>=60)
                    			count++;
						}
						if(count)
						{
							cout << "Concession category: SENIOR CITIZEN\n";
							cout << count << " person(s) are eligible for this concession.";	
						}
                        else cout << "You are not eligible for this concession.";
                        b.amc = (count * ((amt * 60) / 100)) + ((b.nosr - count) * amt);
                    }
                    else if (b.con == 3)
                    {
                    	for(int k=0;k<b.nosr;k++)
                    	{
                    		if(b.age[k]<5)
                    			count++;
						}
						if(count)
						{
							cout << "Concession category: CHILDERN BELOW FIVE\n";
							cout << count << " person(s) are eligible for this concession.";
						}
                        else cout << "You are not eligible for this concession.";
                        b.amc = (b.nosr - count) * amt;	
                    }
                    else if (b.con == 4)
                    {
                        cout << "You did not apply for any concession.\n";
                        b.amc = b.nosr * amt;
                    }
                    srand((unsigned)time(&t));
                    b.pnr = rand();
                    f2.write((char *)&b, sizeof(b));
                    b.displayresdet();
                    cout << "\n-----Your ticket is reserved-----\n";
                }
                else
                {
                    cout << "********Required no. of seats not available*******\n";
                }
            }
            else if (strcmp(b.clas, gn) == 0)
            {
                if (a.gn >= b.nosr)
                {
                    amt = a.gnfare;
                    addr = f1.tellg();
                    ad = sizeof(a.gn);
                    f1.seekp(addr - (5 * ad));
                    a.gn = a.gn - b.nosr;
                    f1.write((char *)&a.gn, sizeof(a.gn));
                    if (b.con == 1)
                    {
                        cout << "Concession category: MILITARY PERSONNEL\n";
                        b.amc = (b.mpn * ((amt * 50) / 100)) + ((b.nosr - b.mpn) * amt);
                    }
                    else if (b.con == 2)
                    {
                    	for(int k=0;k<b.nosr;k++)
                    	{
                    		if(b.age[k]>=60)
                    			count++;
						}
						if(count)
						{
							cout << "Concession category: SENIOR CITIZEN\n";
							cout << count << " person(s) are eligible for this concession.";	
						}
                        else cout << "You are not eligible for this concession.";
                        b.amc = (count * ((amt * 60) / 100)) + ((b.nosr - count) * amt);
                    }
                    else if (b.con == 3)
                    {
                    	for(int k=0;k<b.nosr;k++)
                    	{
                    		if(b.age[k]<5)
                    			count++;
						}
						if(count)
						{
							cout << "Concession category: CHILDERN BELOW FIVE\n";
							cout << count << " person(s) are eligible for this concession.";
						}
                        else cout << "You are not eligible for this concession.";
                        b.amc = (b.nosr - count) * amt;	
                    }
                    else if (b.con == 4)
                    {
                        cout << "You did not apply for any concession.\n";
                        b.amc = b.nosr * amt;
                    }
                    srand((unsigned)time(&t));
                    b.pnr = rand();
                    f2.write((char *)&b, sizeof(b));
                    b.displayresdet();
                    cout << "\n-----Your ticket is reserved-----\n";
                }
                else
                {
                    cout << "********Required no. of seats not available*******\n";
                }
            }
            else cout << "\nInvalid class of seats.";
        }
        else
        {
            flag = 0;
        }
    }
    if (flag == 0)
    {
        cout << "!\n";
    }
    f1.close();
    f2.close();
}

void displaypassdetail()
{
	cout << "\n--------Passenger Details--------\n";
	fstream f;
	reser b;
	f.open("p.txt",ios::in|ios::out|ios::binary);
	f.seekg(0);
	while(f.read((char *) & b,sizeof(b)))
	{
		b.displayresdet();
	}
	f.close();
}
void enquiry()
{
    fstream f;
    f.open("t.txt",ios::in|ios::out|ios::binary);
    Detail a;
    while(f.read((char *) & a,sizeof(a)))
    {
            a.displaydetail();
    }
}
void cancel()
{
    Detail a;
    reser b;
    canc c;
    fstream f1, f2, f3;
    f1.open("t.txt",ios::in|ios::out|ios::binary);
    f2.open("p.txt",ios::in|ios::out|ios::binary);
    f3.open("cn.txt",ios::in|ios::out|ios::binary);
    cout<<"**********CANCELLATION MENU*********\n";
    c.getcancdet();
    while(f2.read((char *) & b,sizeof(b)))
    {
        if (b.pnr == c.pnr)
        {
            c.tno = b.tno;
            strcpy(c.tname, b.tname);
            strcpy(c.bp, b.bp);
            strcpy(c.dest, b.dest);
            c.nosc = b.nosr;
            for (int j = 0; j < c.nosc; j++)
            {
                strcpy(c.pname[j], b.pname[j]);
                c.age[j] = b.age[j];
            }
            strcpy(c.clas, b.clas);
            if (strcmp(c.clas, f) == 0)
            {
                while (f1.read((char *)&a, sizeof(a)))
                {
                    if (a.tno == c.tno)
                    {
                        a.c1 = a.c1 + c.nosc;
                        d = b.d;
                        m = b.m;
                        addr = f1.tellg();
                        ad = sizeof(a.c1);
                        f1.seekp(addr - (7 * ad));
                        f1.write((char *)&a.c1, sizeof(a.c1));
                        tamt = b.amc;
                        if ((c.d == d) && (c.m == m))
                        {
                            cout << "You are cancelling at the date of departure.\n";
                            c.amr = tamt - ((tamt * 60) / 100);
                        }
                        else if (c.m == m)
                        {
                            cout << "You are cancelling at the month of departure.\n";
                            c.amr = tamt - ((tamt * 50) / 100);
                        }
                        else if (m > c.m)
                        {
                            cout << "You are cancelling one month before the date of departure.\n";
                            c.amr = tamt - ((tamt * 20) / 100);
                        }
                        else
                        {
                            cout << "You are cancelling after the departure.\n";
                            cout << "Your request cannot be completed.\n";
                            goto h;
                        }
                        c.displaycancdet();
                    }
                }
            }
            else if (strcmp(c.clas, s) == 0)
            {
                while (f1.read((char *)&a, sizeof(a)))
                {
                    if (a.tno == c.tno)
                    {
                        a.c2 = a.c2 + c.nosc;
                        d = b.d;
                        m = b.m;
                        addr = f1.tellg();
                        ad = sizeof(a.c2);
                        f1.seekp(addr - (5 * ad));
                        f1.write((char *)&a.c2, sizeof(a.c2));
                        tamt = b.amc;
                        if ((c.d == d) && (c.m == m))
                        {
                            cout << "You are cancelling at the date of departure\n";
                            c.amr = tamt - ((tamt * 60) / 100);
                        }
                        else if (c.m == m)
                        {
                            cout << "You are cancelling at the month of departure\n";
                            c.amr = tamt - ((tamt * 50) / 100);
                        }
                        else if (m > c.m)
                        {
                            cout << "You are cancelling one month before the date of departure\n";
                            c.amr = tamt - ((tamt * 20) / 100);
                        }
                        else
                        {
                            cout << "Cancelling after the departure\n";
                            cout << "Your request cannot be completed\n";
                            goto h;
                        }
                        c.displaycancdet();
                    }
                }
            }
            else if (strcmp(c.clas, th) == 0)
            {
                while (f1.read((char *)&a, sizeof(a)))
                {
                    if (a.tno == c.tno)
                    {
                        a.c3 = a.c3 + c.nosc;
                        d = b.d;
                        m = b.m;
                        addr = f1.tellg();
                        ad = sizeof(a.c3);
                        f1.seekp(addr - (7 * ad));
                        f1.write((char *)&a.c3, sizeof(a.c3));
                        tamt = b.amc;
                        if ((c.d == d) && (c.m == m))
                        {
                            cout << "You are cancelling at the date of departure.\n";
                            c.amr = tamt - ((tamt * 60) / 100);
                        }
                        else if (c.m == m)
                        {
                            cout << "You are cancelling at the month of departure.\n";
                            c.amr = tamt - ((tamt * 50) / 100);
                        }
                        else if (m > c.m)
                        {
                            cout << "You are cancelling one month before the date of departure.\n";
                            c.amr = tamt - ((tamt * 20) / 100);
                        }
                        else
                        {
                            cout << "You are cancelling after the departure.\n";
                            cout << "Your request cannot be completed.\n";
                            goto h;
                        }
                        c.displaycancdet();
                    }
                }
            }
            else if (strcmp(c.clas, cc) == 0)
            {
                while (f1.read((char *)&a, sizeof(a)))
                {
                    if (a.tno == c.tno)
                    {
                        a.cc = a.cc + c.nosc;
                        d = b.d;
                        m = b.m;
                        addr = f1.tellg();
                        ad = sizeof(a.cc);
                        f1.seekp(addr - (7 * ad));
                        f1.write((char *)&a.cc, sizeof(a.cc));
                        tamt = b.amc;
                        if ((c.d == d) && (c.m == m))
                        {
                            cout << "You are cancelling at the date of departure.\n";
                            c.amr = tamt - ((tamt * 60) / 100);
                        }
                        else if (c.m == m)
                        {
                            cout << "You are cancelling at the month of departure.\n";
                            c.amr = tamt - ((tamt * 50) / 100);
                        }
                        else if (m > c.m)
                        {
                            cout << "You are cancelling one month before the date of departure.\n";
                            c.amr = tamt - ((tamt * 20) / 100);
                        }
                        else
                        {
                            cout << "You are cancelling after the departure.\n";
                            cout << "Your request cannot be completed.\n";
                            goto h;
                        }
                        c.displaycancdet();
                    }
                }
            }
            else if (strcmp(c.clas, ss) == 0)
            {
                while (f1.read((char *)&a, sizeof(a)))
                {
                    if (a.tno == c.tno)
                    {
                        a.ss = a.ss + c.nosc;
                        d = b.d;
                        m = b.m;
                        addr = f1.tellg();
                        ad = sizeof(a.ss);
                        f1.seekp(addr - (7 * ad));
                        f1.write((char *)&a.ss, sizeof(a.ss));
                        tamt = b.amc;
                        if ((c.d == d) && (c.m == m))
                        {
                            cout << "You are cancelling at the date of departure.\n";
                            c.amr = tamt - ((tamt * 60) / 100);
                        }
                        else if (c.m == m)
                        {
                            cout << "You are cancelling at the month of departure.\n";
                            c.amr = tamt - ((tamt * 50) / 100);
                        }
                        else if (m > c.m)
                        {
                            cout << "You are cancelling one month before the date of departure.\n";
                            c.amr = tamt - ((tamt * 20) / 100);
                        }
                        else
                        {
                            cout << "You are cancelling after the departure.\n";
                            cout << "Your request cannot be completed.\n";
                            goto h;
                        }
                        c.displaycancdet();
                    }
                }
            }
            else if (strcmp(c.clas, sl) == 0)
            {
                while (f1.read((char *)&a, sizeof(a)))
                {
                    if (a.tno == c.tno)
                    {
                        a.sl = a.sl + c.nosc;
                        d = b.d;
                        m = b.m;
                        addr = f1.tellg();
                        ad = sizeof(a.sl);
                        f1.seekp(addr - (7 * ad));
                        f1.write((char *)&a.sl, sizeof(a.sl));
                        tamt = b.amc;
                        if ((c.d == d) && (c.m == m))
                        {
                            cout << "You are cancelling at the date of departure.\n";
                            c.amr = tamt - ((tamt * 60) / 100);
                        }
                        else if (c.m == m)
                        {
                            cout << "You are cancelling at the month of departure.\n";
                            c.amr = tamt - ((tamt * 50) / 100);
                        }
                        else if (m > c.m)
                        {
                            cout << "You are cancelling one month before the date of departure.\n";
                            c.amr = tamt - ((tamt * 20) / 100);
                        }
                        else
                        {
                            cout << "You are cancelling after the departure.\n";
                            cout << "Your request cannot be completed.\n";
                            goto h;
                        }
                        c.displaycancdet();
                    }
                }
            }
            else if (strcmp(c.clas, gn) == 0)
            {
                while (f1.read((char *)&a, sizeof(a)))
                {
                    if (a.tno == c.tno)
                    {
                        a.gn = a.gn + c.nosc;
                        d = b.d;
                        m = b.m;
                        addr = f1.tellg();
                        ad = sizeof(a.gn);
                        f1.seekp(addr - (7 * ad));
                        f1.write((char *)&a.gn, sizeof(a.gn));
                        tamt = b.amc;
                        if ((c.d == d) && (c.m == m))
                        {
                            cout << "You are cancelling at the date of departure.\n";
                            c.amr = tamt - ((tamt * 60) / 100);
                        }
                        else if (c.m == m)
                        {
                            cout << "You are cancelling at the month of departure.\n";
                            c.amr = tamt - ((tamt * 50) / 100);
                        }
                        else if (m > c.m)
                        {
                            cout << "You are cancelling one month before the date of departure.\n";
                            c.amr = tamt - ((tamt * 20) / 100);
                        }
                        else
                        {
                            cout << "You are cancelling after the departure.\n";
                            cout << "Your request cannot be completed.\n";
                            goto h;
                        }
                        c.displaycancdet();
                    }
                }
            }
        }
        else
        {
            flag = 0;
        }
    }
    h:
    if(flag==0)
    {
            cout << "Enter the correct PNR No.\n";
    }
    f1.close();
    f2.close();
    f3.close();
}
void user()
{
	login a;
	int ch;
	cout<<"\n-----Login User-----\n";
	char password[10];
	fstream f;
	f.open("id.txt",ios::in|ios::out|ios::binary);
	int id;
	cout << "Enter your ID : ";
	cin >> id;
	cout << "Enter your Password : ";
	cin >> password;
	while(f.read((char *) & a,sizeof(a)))
	{
		if((id==a.id)&&(strcmp(a.pass,password)==0))
		{
			do
			{
				std::cout<<"\n1.Reserve\n2.Cancel\n3.Enquiry\n4.Return to the main menu\n";
				cout<<"Enter your choice:";
				cin>>ch;
				switch(ch)
				{
					case 1:
						res();
						break;
					case 2:
						cancel();
						break;
					case 3:
						enquiry();
						break;
				}
			}while(ch<=3);
		}
		else
		{
			d=1;
		}
	}
	if(d==1)
	{
		cout<<"Enter your User ID and Password correctly.\n";
	}
}

void manage()
{
	int ch;
	fstream f;
	char c;
	login a;
	cout<<"\n---WELCOME TO THE USER MANAGEMENT MENU---\n";
	do
	{
		cout << "\n1. Create ID Database\n";
		cout << "2. Add details\n";
		cout << "3. Display details\n";
		cout << "4. Return to the main menu\n";
		cout << "Enter your choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				f.open("id.txt",ios::out|ios::binary);
				do
				{
					a.getid();
					f.write((char *) & a,sizeof(a));
					cout << "\nDo you want to add one more record\n";
					cout << "y-Yes\nn-No\n";
					cin >> c;
				}while(c == 'y');
				f.close();
				break;
			case 2:
				f.open("id.txt",ios::in|ios::out|ios::binary|ios::app);
				a.getid();
				f.write((char *) & a,sizeof(a));
				f.close();
				break;
			case 3:
				f.open("id.txt",ios::in|ios::out|ios::binary);
				f.seekg(0);
				while(f.read((char *) & a,sizeof(a)))
				{
					a.displayid();
				}
				f.close();
				break;
		}
	}while(ch<=3);
}

