#include<fstream.h>
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include<constrea.h>
#include<stdlib.h>
int code;
class bookmyshow
{
public:
int movie,hall,booking;
   char ali,f,d,g;
   char nm[20];
   int ph,acc;
   char cno;
   int check();
   char fant();
   char alita();
   char dc();
   char great();
   int book();
   int H1();
   int H2();
   int H3();
   int success();
   void card(int);
   void reg();
   int newacc();
   void wrong();

};
int bookmyshow:: check()
{
   int gdriver=EGA, gmode=EGAHI;
  initgraph(&gdriver, &gmode, "g:\\BGI");

  setbkcolor(1);

   cout<<"\n\n\n********************************************************************************"<<endl;
   cout<<"\t\t\t\tBOOK MY SHOW\n";
   cout<<"********************************************************************************"<<endl;
   cout<<"\n\n\t\t\t    NOW SHOWING IN CINEMA"<<endl;
   cout<<"\n\n===================================================="<<endl;
   cout<<"[112] FANTASTIC BEASTS AND THE CRIMES OF GRINDELWALD"<<endl;
   cout<<"[221] ALITA"<<endl;
   cout<<"[312] DETECTIVE CONAN:ZERO THE ENFORCER"<<endl;
   cout<<"[104] THE GREATEST SHOWMAN"<<endl;
   cout<<"===================================================="<<endl;
   cout<<"\n\n\tEnter the code of the movie of your choice:";
   cin>>code;
   return code;
}
char bookmyshow:: fant()
{    clrscr();
char now;
   int gdriver=EGA, gmode=EGAHI;
  initgraph(&gdriver, &gmode, "g:\\BGI");
  setbkcolor(9);
   cout<<"\n\n*******************************************************************************"<<endl;
   cout<<"\t\t FANTASTIC BEASTS AND THE CRIMES OF GRINDELWALD"<<endl;
   cout<<"*******************************************************************************"<<endl;
   cout<<"\nDuration of the movie = 2hours and 12minutes"<<endl;
   cout<<"\nGenre of the movie    = Fantasy, Drama, suspense"<<endl;
   cout<<"\nLanguage              = Hindi and English"<<endl;
   cout<<"\nIMDb rating           = 6.8/10"<<endl;
   cout<<"\nCritic reviews\n\n An enjoyabe fantastic creation of JK Rowling's imagination completed with the  twisted plots and magic.I would give 3 stars out of 5 to this film."<<endl;
 
   cout<<"\n\n\t\t\tTYPE A TO BOOK NOW\t";

  cout<<"\n\t\t\tClick anything to return to main menu"<<endl;
  cin>>now ;
  return now;
 }
char bookmyshow:: alita()
{
int gdriver=EGA, gmode=EGAHI;
  char now;
  initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
  setbkcolor(12);
   cout<<"\n\n********************************************************************************";
   cout<<"\t\t\t\tALITA"<<endl;
   cout<<"*******************************************************************************"<<endl;
   cout<<"\nDuration of the movie= 2hours and 5minutes"<<endl;
   cout<<"\nGenre of the movie=Fantasy, Action, Science fiction"<<endl;
   cout<<"\nLanguage=Hindi and English"<<endl;
   cout<<"\nIMDb rating 7.6/10"<<endl;
   cout<<"\nCritic reviews= An enjoyabe action movie completed with the twisted ending and the action scenes.I would give 3 stars out of 5 to this movie "<<endl;
   cout<<"\n\n\t\tTYPE A TO BOOK NOW\t";

   cout<<"\n\t\t\tClick anything to return to main menu\n\n\t\t\t";
   cin>>now;
   return now;
};
char bookmyshow:: dc()
{      int gdriver=EGA, gmode=EGAHI;
     char now;
  initgraph(&gdriver, &gmode, "g:\\BGI");
  setbkcolor(6);
   cout<<"\n\n********************************************************************************";
   cout<<"\t\t\tDETECTIVE CONAN:ZERO THE ENFORCER"<<endl;
   cout<<"*******************************************************************************"<<endl;
   cout<<"\nDuration of the movie= 1 hour and 55 minutes"<<endl;
   cout<<"\nGenre of the movie=Mystery, Crime, Suspense, Animation, Romantic"<<endl;
   cout<<"\nLanguage= Japanese and English"<<endl;
   cout<<"\n IMDb rating 8.9/10"<<endl;
   cout<<"\nCritic reviews= An outrageous movie with a great.This movie is full ofsuspense mystery and action.The main highlight of this movie was conan's skateboard and bourbon's drone.I would give 3 stars out of 5 to this movie "<<endl;
   cout<<"\n\n\t\t\tTYPE A TO BOOK NOW\t";

   cout<<"\n\t\t\tClick anything to return to main menu"<<endl;
     cin>>now;
  return now;
}
char bookmyshow::great()
   {  clrscr();
   char now;
   int gdriver=EGA, gmode=EGAHI;
   initgraph(&gdriver, &gmode, "g:\\BGI");
  setbkcolor(9);
   cout<<"\n\n********************************************************************************";
   cout<<"\t\t\t\tTHE GREATEST SHOWMAN"<<endl;
   cout<<"*******************************************************************************"<<endl;
   cout<<"\nDuration of the movie= 1 hour and 146 minutes"<<endl;
   cout<<"\nGenre of the movie=Drama, Romantic"<<endl;
   cout<<"\nLanguage= English"<<endl;
   cout<<"\nIMDb rating 7.6/10"<<endl;
   cout<<"\nCritic reviews= A sweet and fast movie with some great songs.This movie is full romantic and energetic songs.Although the plot is quite predictable but its track is fast and the presentation is just outstanding.I would give 4 stars out of 5 to this movie "<<endl;
   cout<<"\n\n\t\t\tTYPE A TO BOOK NOW\t";

   cout<<"\n\t\t\tClick on BACK to return to main menu"<<endl;
    cin>>now;
 return now;
};
int bookmyshow::book()
   {
   clrscr();
   int gdriver=EGA, gmode=EGAHI;
   initgraph(&gdriver, &gmode, "g:\\BGI");
  setbkcolor(2);
   char date[10];
   int ch,c;
   cout<<"******************************************************************************"<<endl;
   cout<<"\t\t\t\tTICKET BOOKING"<<endl;
   cout<<"******************************************************************************"<<endl;

   cout<<"\nThis movie would be available only on these dates:"<<endl;
   cout<<"\n[1] 12-10-19"<<endl;
   cout<<"\n[2] 13-10-19"<<endl;
   cout<<"\n[3] 15-10-19"<<endl;
   cout<<"\n[4] 17-10-19"<<endl;
   cout<<"\n\nEnter your choice:";
   cin>>c;

   if(c>4)
   {cout<<"\n\nWRONG CHOICE!!!!!PLEASE CHECK AGAIN";
    }
    clrscr();
    setbkcolor(9);
   cout<<"\n\nAvailability of Cinema Halls on"<<" "<<c<<" "<<"are:"<<endl;
   cout<<"\n\n[1] INOX\nTimings will be \n3:00pm - 6:00pm\n6:00pm - 9:00pm"<<endl;
   cout<<"\n\n[2] BLUE CITY CARNIVAL\nTimings will be \n12:00pm - 3:00pm\n5:00pm - 8:00pm"<<endl;
   cout<<"\n\n[3] NEW KOHINOOR\nTimings will be \n3:30pm - 6:15pm\n7:00pm - 10:00pm"<<endl;
   cout<<"\n\nEnter your choice";
   cin>>ch;

   if(ch>3)
   cout<<"\n\nWRONG CHOICE!!!!!PLEASE CHECK AGAIN";

   return ch;

   }
int bookmyshow::H1()
    {
    clrscr();

    int j,ch,s,plat=0,sil=0,g=0,tot_pr=0,tot_p=0,tot_pri=0;
    int gdriver=EGA, gmode=EGAHI;
   initgraph(&gdriver, &gmode, "g:\\BGI");
  setbkcolor(4);
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<"\t\t\t\tINOX"<<endl;
  cout<<"\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;

   cout<<"\nEnter the number of seats you want to book:";
   cin>>s;

   while(s>plat+sil+g)
   {
   setbkcolor(6);
   cout<<"\nTotal number of seats left for you to book are:"<<(s-(plat+sil+g))<<endl;
   cout<<"\n\nThere are 5 rows and 7 columns in each class:"<<endl;
   cout<<"\n[1] Platinum"<<endl;
   cout<<"Price per seat is Rs 280"<<endl;
   cout<<"\n\n[2] Gold"<<endl;
   cout<<"Price per seat is Rs 220"<<endl;
   cout<<"\n\n[3] Silver"<<endl;
   cout<<"Price per seat is Rs 180"<<endl;
   cout<<"\n Enter your choice:";
   cin>>ch;
      if(ch==1)
      {
     cout<<"  \nNumber of seats vacant are 15";
     cout<<"\nEnter the number of seats you want to book for platinum:";
     cin>>plat;

      tot_pr= (plat*280);
      if(s-(plat+sil+g)<plat)
      cout<<"\n\nWRONG CHOICE!!!!";
     }
      else if (ch==2)
     {
     cout<<"\nNumber of seats vacant are 12";
     cout<<"\nEnter the number of seats you want to book for gold:";
     cin>>g;
      tot_p= (g*220);
      if(s-(plat+sil+g)<g)
      cout<<"\n\nWRONG CHOICE!!!!";
     }
     else if (ch==3)
     {
     cout<<"\nNumber of seats vacant are 15";
     cout<<"\nEnter the number of seats you want to book for silver:";
     cin>>sil;
     tot_pri=(sil*180);
     if(s-(plat+sil+g)<sil)
      cout<<"\n\nWRONG CHOICE!!!!";
     }
     else
     cout<<"\n\n!!!Wrong Choice!!!";
   }
  int total=tot_pr+tot_p+tot_pri;
   cout<<"\n\n\nTotal Amount:"<<total;
return total;

  }

 int bookmyshow:: H3()
    {
    clrscr();
    int j,ch,s,plat=0,g=0,sil=0,tot_pr=0,tot_p=0,tot_pri=0;
    int gdriver=EGA, gmode=EGAHI;
   initgraph(&gdriver, &gmode, "g:\\BGI");
  setbkcolor(2);
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<"\t\t\t\tNEW KOHINOOR"<<endl;
  cout<<"\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
   cout<<"Enter the number of seats you want to book:"<<endl;
   cin>>s;
   while(s>plat+sil+g)
   {

   cout<<"\number of seats left to be booked"<<(s-(plat+g+sil)) ;
   cout<<"\n\nThere are 5 rows and 7 columns in each class:"<<endl;
   cout<<"\n[1] Platinum"<<endl;
   cout<<"Price per seat is Rs 280"<<endl;
   cout<<"\n\n[2] Gold"<<endl;
   cout<<"Price per seat is Rs 220"<<endl;
   cout<<"\n\n[3] Silver"<<endl;
   cout<<"Price per seat is Rs 180"<<endl;
   cout<<"\n Enter your choice:";
   cin>>ch;

   if(ch==1)
     {
     cout<<"\n\nNumber of seats vacant are 9";
     cout<<"\nEnter the number of seats you want to book for platinum:";
     cin>>plat;

     tot_pr= (plat*280);
     if(s-(plat+sil+g)<plat)
      cout<<"\nWRONG CHOICE!!!!";
     }
      else if (ch==2)
     {
     cout<<"\n\nNumber of seats vacant are 12";
     cout<<"\n\nEnter the number of seats you want to book for gold:";
     cin>>g;
     tot_p= (g*220);
     if(s-(plat+sil+g)<g)
      cout<<"\n\nWRONG CHOICE!!!!";
     }
     else
     {
     cout<<"\n\nNumber of seats vacant are 15";
     cout<<"\nEnter the number of seats you want to book for silver:";
     cin>>sil;
     tot_pri=(sil*180);
     if(s-(plat+sil+g)<sil)
      cout<<"\n\nWRONG CHOICE!!!!";
     }
   }
   int total=tot_pr+tot_p+tot_pri;
   cout<<"\nTotal price will be:"<<total;
 return total;

}
int bookmyshow::H2()
    {
    clrscr();
    int plat=0,g=0,sil=0,tot_pr=0,tot_p=0,tot_pri=0;
    int j,ch,s;
    int gdriver=EGA, gmode=EGAHI;
   initgraph(&gdriver, &gmode, "g:\\BGI");
  setbkcolor(2);
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<"\t\t\t\tBLUE CITY CARNIVAL"<<endl;
  cout<<"\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
   cout<<"\nEnter the number of seats you want to book:"<<endl;
   cin>>s;
   while(s>plat+sil+g)
   {

    cout<<"\nnumber of seats left to be booked"<<(s-(plat+g+sil)) ;
   cout<<"\n\nThere are 5 rows and 7 columns in each class:"<<endl;
   cout<<"\n[1] Platinum"<<endl;
   cout<<"Price per seat is Rs 280"<<endl;
   cout<<"\n\n[2] Gold"<<endl;
   cout<<"Price per seat is Rs 220"<<endl;
   cout<<"\n\n[3] Silver"<<endl;
   cout<<"Price per seat is Rs 180"<<endl;
   cout<<"\n\n Enter your choice:";
   cin>>ch;

   if(ch==1)
     {
     cout<<"Number of seats vacant are 18";
     cout<<"\nEnter the number of seats you want to book for platinum:";
     cin>>plat;

     tot_pr= (plat*280);
     if(s-(plat+sil+g)<plat)
      cout<<"\n\nWRONG CHOICE!!!!";
     }
      else if (ch==2)
     {
     cout<<"\nNumber of seats vacant are 12";
     cout<<"\nEnter the number of seats you want to book for gold:";
     cin>>g;
     tot_p= (g*220);
     if(s-(plat+sil+g)<g)
      cout<<"\n\nWRONG CHOICE!!!!";
     }
     else
     {
     cout<<"\nNumber of seats vacant are 15";
     cout<<"\nEnter the number of seats you want to book for silver:";
     cin>>sil;
     tot_pri=(sil*180);
     if(s-(plat+sil+g)<sil)
      cout<<"\n\nWRONG CHOICE!!!!";
     }
   }
   int total=tot_pr+tot_p+tot_pri;
   cout<<"\nTotal price will be:"<<total;
 return total;
}



void bookmyshow::card(int total)
  {
  clrscr();
  char c[20];
  char ch[10];
  char cvv[30];
  int gdriver=EGA, gmode=EGAHI;
   initgraph(&gdriver, &gmode, "g:\\BGI");
  setbkcolor(6);
   char name[30];
  cout<<"Enter your name:"<<endl;
  gets(name);
  cout<<"\n\nThe total price of the tickets booked will be:"<<total;
  cout<<"\n\nEnter the expiry date of the card:";
  gets(ch);
  cout<<"\nEnter the CVV number:";
  gets(cvv);
  getch();

}

int bookmyshow::success()
   {
   clrscr();
   int now;
   int gdriver=EGA, gmode=EGAHI;
   initgraph(&gdriver, &gmode, "g:\\BGI");
  setbkcolor(11);
   cout<<"\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
   cout<<"\n\t\t\t\tCONGRATULATIONS!!!!!!!!!!"<<endl;
   cout<<"\n\n\n\t\tYou Have Successfully Booked Your Ticket!! Visit Us Again\n\n"<<endl;
   cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
   cout<<"\n\n\t\tClick on A to book another ticket";
   cin>>now;
return now;

}
void bookmyshow:: reg()
   {  clrscr();
   int gdriver=EGA, gmode=EGAHI;
   initgraph(&gdriver, &gmode, "g:\\BGI");
  setbkcolor(3);
   char id;
   char ch;
   int a;
   int co;

     bookmyshow b;
     asd:
   cout<<"\n\n\t\t\t\tREGISTRATION"<<endl;
   cout<<"\nDo you already have an account(y/n):";
   cin>>ch;

      if(ch=='y')
	   {
	     cout<<"\n Enter your unique code:";
	     cin>>co;
	     ifstream fin;
	     fin.open("customer.dat");
	     if(!fin)
	     cout<<"error";
	     else
	     {
	      fin.seekg(0);
		while(!fin.eof())
		{  // fin.get(b.cno);
		fin.read((char*)&b.cno,sizeof(b.cno));
		   { if(co==b.cno)
		      {
		      cout<<b.cno<<b.nm<<b.ph<<"Success";
			cout<<"\n\n\n\t\tWELCOME!!!YOU HAVE SUCCESSFULLY LOGGED IN";
		       }
		     else
		       cout<<"error";
		    }

		}
	     fin.close();
	      }
		     }

      else if(ch=='n')
	    {  a=b.newacc();
	       cout<<"Customer no:"<<a;
	    }
      else
    {
      cout<<"\n\n\tWRONG CHOICE!!!PLEASE CHECK AGAIN!!";
       //goto asd;
      }
   getch();
}
int bookmyshow::newacc()
{

  clrscr();
  //cust c ;
  bookmyshow b;
  randomize();
  b.cno=random(100);
 // cout<<"Random no is:"<<cno;

 ofstream fout;
  fout.open("customer.dat",ios::app);
  if(!fout)
  cout<<"error";
  else
  {
   cout<<"enter name";
gets(b.nm);
cout<<"enter phone no:"<<endl;
cin>>b.ph;
cout<<"enter account no:"<<endl;
cin>>b.acc;
cout<<"Your unique number is:"<<cno;
fout<<"\n"<<b.cno<<"\t"<<b.nm<<"\t"<<b.ph<<"\t"<<b.acc;

  }
  fout.close();
return cno;
  }


void bookmyshow::wrong()
      {
      int gdriver=EGA, gmode=EGAHI;
   initgraph(&gdriver, &gmode, "g:\\BGI");
  setbkcolor(13);
  cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
  cout<<"\n\n\n\t\tERROR!!!\tPLEASE TRY AGAIN";
  cout<<"\n\n\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
};


int blink()
    { clrscr();
    int colors[3]={RED,YELLOW,BLUE};
   while(!kbhit()){
   gotoxy(37,20);
   textcolor(colors[rand()%3]+BLINK);
   cout<<"BOOK NOW"<<endl;
   delay(100);}
   int color;
   textattr(128 + 10);
   cout<<"BOOK NOW";
   return 0;
  };

void main()
{  clrscr();
   bookmyshow b;
   int movie,hall,booking,flag=0;
   char ali,f,d,g;
   asd:
   movie=b.check();
   switch(movie)
   {
       case 112:    clrscr();
		    f= b.fant();
		    if(f=='A'||f=='a')
		    {
			   booking= b.book();
			   switch(booking)
			   {
				 case 1: hall=b.H1();
					 b.reg();
					 b.card(hall);
					 b.success();
					 break;
				 case 2: hall=b.H2();
					 b.reg();
					 b.card(hall);
					 b.success();
					 break;
				 case 3: hall=b.H3();
					 b.reg();
					 b.card(hall);
					 b.success();
					 break;
				 default: b.wrong();
					 break;
			   }
		    }
		    else
		    flag=1;
		    break;
       case 221:    clrscr();
		    ali=b.alita();
		    if(ali=='A'||ali=='a')
		    {
			  booking=b.book();
			   switch(booking)
			   {
				 case 1: hall=b.H1();

					 b.reg();
					 b.card(hall);
					 b.success();
					 break;
				 case 2: hall=b.H2();

					 b.reg();
					 b.card(hall);
					 b.success();
					 break;
				 case 3: hall=b.H3();

					 b.reg();
					 b.card(hall);
					 b.success();
					 break;
				 default: b.wrong();
					 break;
			   }
		    }
		    else
		    flag=1;
		    break;
       case 312:    clrscr();
		    d=b.dc();
		    if(d=='A'||d=='a')
		    {
			  booking=b.book();
			   switch(booking)
			   {
				 case 1: hall= b.H1();

					 b.reg();
					 b.card(hall);
					 b.success();
					 break;
				 case 2: hall=b.H2();

					b.reg();
					 b.card(hall);
					 b.success();
					 break;
				 case 3: hall=b.H3();

					 b.reg();
					 b.card(hall);
					 b.success();
					 break;
				 default: b.wrong();
					 break;
			   }
		    }
		    else
		    flag=1;
		    break;
       case 104:    clrscr();
		    g=b.great();
		    if(g=='A'||g=='a')
		    {
			 booking=b.book();
			   switch(booking)
			   {
				 case 1: hall=b.H1();

					 b.reg();
					 b.card(hall);
					 b.success();
					 break;
				 case 2: hall=b.H2();

					 b.reg();
					 b.card(hall);
					 b.success();
					 break;
				 case 3: hall=b.H3();
					 b.reg();
					 b.card(hall);
					 b.success();					 break;
				 default: b.wrong();
					 break;
			   }
		    }
		    else
		    flag=1;
		    break;
       default:     clrscr();
		   b.wrong();
		    break;
   }
   if (flag==1)
   goto asd;
   getch();


}