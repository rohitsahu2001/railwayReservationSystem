/*

    PROJECT NAME  : ONLINE RAILWAY RESERVATION
    GROUP MEMBERS :
       1.ROHIT SAHU
       2.SHIVAM KUMAR
       3.PRATIK KUMAR
		   

    

*/
//wap to create a system of railway online booking
#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<string.h>
#include<graphics.h>
void tinform();
void line();
void menu();
void savail();
void tcharge();
void tbooking();
void verify();
void cancel();
void seat(int i);

//structure for ticket
struct ticket
{
 char name[50],clas[20],gen[10],d[20],adr[20],j[20];
 int trno,age,tno,code,price;char trn[20];
};
//declaring ticket array..
ticket b[60];
int n=0,tn=1,sum;
//array for no. of seats..
int a[60]={10,10,10,10,10,10,10,10,10,10,
	   10,10,10,10,10,10,10,10,10,10
	   ,10,10,10,10,10,10,10,10,10,10
	   ,10,10,10,10,10,10,10,10,10,10
	   ,10,10,10,10,10,10,10,10,10,10
	   ,10,10,10,10,10,10,10,10,10,10};

//function for verifying ticket..
void verify()
{
  cout<<"\n\n\n\t\t";
	 line();
	 cout<<"\n\t\t\t  <-Ticket Verification->";
	 cout<<"\n\t\t";
	 line();
	 int p;
	 cout<<"\n\t\tEnter Ticket Number to confirm:";
	 cin>>p;
 char found='f';
 for(int i=0;i<n;i++)
 {
  if(p==b[i].tno)
  {
  found='t';
  cout<<"\n\t\tTicket Number:"<<b[i].tno;
  cout<<"\n\t\tTrain Name:";
  puts(b[i].trn);
  cout<<"\t\tTrain no.:"<<b[i].trno;
  cout<<"\n\t\tClass of Travel:";
  puts(b[i].clas);
  cout<<"\t\tPassenger name:";
  puts(b[i].name);
  cout<<"\t\tAge:"<<b[i].age;
  cout<<"\n\t\tGender:";
  puts(b[i].gen);
  cout<<"\t\tAddress:";
  puts(b[i].adr);
  cout<<"\t\tDate of booking:"<<b[i].d;
  cout<<"\n\n\t\tpress ANY KEY to return MAIN MENU...";
  getch();
  clrscr();
  }
 }
if(found=='f')
  {
  cout<<"\n\n\t\t!!!Record not found!!!";
  getch();
  clrscr();
 }
}
//function for displaying train information..
void tinform()
{
int choice;
do
{
 cout<<"\n\n\n\t\t";
 line();
 cout<<"\n\t\t\t  <-All Trains Information->";
 cout<<"\n\t\t";
 line();
 cout<<"\n\n\t\t1.Muri Express";
 cout<<"\n\t\t2.Satabadi Express";
 cout<<"\n\t\t3.Rnc Jansatabadi";
 cout<<"\n\t\t4.Pnbe Jansatabadi";
 cout<<"\n\t\t5.Jharkhand Sj Express";
 cout<<"\n\t\t6.Bbs Garib Rath";
 cout<<"\n\t\t7.Dhn Alappuzha Expess";
 cout<<"\n\t\t8.Dhanbad Express";
 cout<<"\n\t\t9.Jat Muri Rou Express";
 cout<<"\n\t\t10.Rnc Bgp Express";
 cout<<"\n\n\t\t11.Current Seat availability";
 cout<<"\n\t\t12.Main Menu";
 cout<<"\n\n\tEnter Your choice:";
 cin>>choice;
clrscr();
switch(choice)
 {
  case 1: //information of murli express...
	 cout<<"\n\n\n\t\t";
	 line();
	 cout<<"\n\t\t\t  <-All Trains Information->";
	 cout<<"\n\t\t";
	 line();
	 cout<<"\n\n\t\tTRAIN NAME :Muri Express";
	 cout<<"\n\t\tTRAIN NO.:  18102";
	 cout<<"\n\t\tBOARDING POINT : jammu Tavi";
	 cout<<"\n\t\tDESTINATION POINT : Tata nagar jn";
	 cout<<"\n\t\tARRIVES :  9:40";
	 cout<<"\n\t\tDEPARTS :  10:10";
	 cout<<"\n\n\tPress ANY KEY to return MAIN MENU....";
	 getch();
	 clrscr();
	 break;
  case 2://Satabadi Express..
	 cout<<"\n\n\n\t\t";
	 line();
	 cout<<"\n\t\t\t  <-All Trains Information->";
	 cout<<"\n\t\t";
	 line();
	 cout<<"\n\n\t\tTRAIN NAME :Satabadi Express";
	 cout<<"\n\t\tTRAIN NO.:  12019";
	 cout<<"\n\t\tBOARDING POINT : Ranchi";
	 cout<<"\n\t\tDESTINATION POINT : Howrah Junction";
	 cout<<"\n\t\tARRIVES :  13:45";
	 cout<<"\n\t\tDEPARTS :  13:55";
	 cout<<"\n\n\tPress ANY KEY to return MAIN MENU....";
	 getch();
	 clrscr();
	 break;
  case 3://Rnc Jansatabadi..
	 cout<<"\n\n\n\t\t";
	 line();
	 cout<<"\n\t\t\t  <-All Trains Information->";
	 cout<<"\n\t\t";
	 line();
	 cout<<"\n\n\t\tTRAIN NAME :Rnc Jansatabadi";
	 cout<<"\n\t\tTRAIN NO.:  12365";
	 cout<<"\n\t\tBOARDING POINT : Patna Junction";
	 cout<<"\n\t\tDESTINATION POINT : Ranchi";
	 cout<<"\n\t\tARRIVES :  13:55";
	 cout<<"\n\t\tDEPARTS :  14:15";
	 cout<<"\n\n\tPress ANY KEY to return MAIN MENU....";
	 getch();
	 clrscr();
	 break;
  case 4://Pnbe Jansatabadi..
	 cout<<"\n\n\n\t\t";
	 line();
	 cout<<"\n\t\t\t  <-All Trains Information->";
	 cout<<"\n\t\t";
	 line();
	 cout<<"\n\n\t\tTRAIN NAME :Pnbe Jansatabadi";
	 cout<<"\n\t\tTRAIN NO.:  12366";
	 cout<<"\n\t\tBOARDING POINT : Ranchi";
	 cout<<"\n\t\tDESTINATION POINT : Patna Junction";
	 cout<<"\n\t\tARRIVES :  14:25";
	 cout<<"\n\t\tDEPARTS :  14:55";
	 cout<<"\n\n\tPress ANY KEY to return MAIN MENU....";
	 getch();
	 clrscr();
	 break;
  case 5://Jharkhand Sj Express..
	 cout<<"\n\n\n\t\t";
	 line();
	 cout<<"\n\t\t\t  <-All Trains Information->";
	 cout<<"\n\t\t";
	 line();
	 cout<<"\n\n\t\tTRAIN NAME :Jharkhand Sj Express";
	 cout<<"\n\t\tTRAIN NO.:  12817";
	 cout<<"\n\t\tBOARDING POINT : Hatia";
	 cout<<"\n\t\tDESTINATION POINT : Anand vihar TRM";
	 cout<<"\n\t\tARRIVES :  14:55";
	 cout<<"\n\t\tDEPARTS :  15:15";
	 cout<<"\n\n\tPress ANY KEY to return MAIN MENU....";
	 getch();
	 clrscr();
	 break;
  case 6://Bbs Garib Rath.....
	 cout<<"\n\n\n\t\t";
	 line();
	 cout<<"\n\t\t\t  <-All Trains Information->";
	 cout<<"\n\t\t";
	 line();
	 cout<<"\n\n\t\tTRAIN NAME :Bbs Garib Rath";
	 cout<<"\n\t\tTRAIN NO.:  12831";
	 cout<<"\n\t\tBOARDING POINT : Dhanbad";
	 cout<<"\n\t\tDESTINATION POINT : Bhubaneshwar";
	 cout<<"\n\t\tARRIVES :  19:55";
	 cout<<"\n\t\tDEPARTS :  20:15";
	 cout<<"\n\n\tPress ANY KEY to return MAIN MENU....";
	 getch();
	 clrscr();
	 break;
  case 7://Dhn Alappuzha Expess.....
	 cout<<"\n\n\n\t\t";
	 line();
	 cout<<"\n\t\t\t  <-All Trains Information->";
	 cout<<"\n\t\t";
	 line();
	 cout<<"\n\n\t\tTRAIN NAME :Dhn Alappuzha Expess";
	 cout<<"\n\t\tTRAIN NO.:  13351";
	 cout<<"\n\t\tBOARDING POINT : Dhanbad Juction";
	 cout<<"\n\t\tDESTINATION POINT : Alleppey";
	 cout<<"\n\t\tARRIVES :  14:50";
	 cout<<"\n\t\tDEPARTS :  15:10";
	 cout<<"\n\n\tPress ANY KEY to return MAIN MENU....";
	 getch();
	 clrscr();
	 break;
  case 8://Dhanbad Express.....
	 cout<<"\n\n\n\t\t";
	 line();
	 cout<<"\n\t\t\t  <-All Trains Information->";
	 cout<<"\n\t\t";
	 line();
	 cout<<"\n\n\t\tTRAIN NAME :Dhanbad Express";
	 cout<<"\n\t\tTRAIN NO.:  13352";
	 cout<<"\n\t\tBOARDING POINT : Alleppey";
	 cout<<"\n\t\tDESTINATION POINT : Dhanbad Junction";
	 cout<<"\n\t\tARRIVES :  8:40";
	 cout<<"\n\t\tDEPARTS :  8:55";
	 cout<<"\n\n\tPress ANY KEY to return MAIN MENU....";
	 getch();
	 clrscr();
	 break;
  case 9://Jat Muri Rou Express.....
	 cout<<"\n\n\n\t\t";
	 line();
	 cout<<"\n\t\t\t  <-All Trains Information->";
	 cout<<"\n\t\t";
	 line();
	 cout<<"\n\n\t\tTRAIN NAME :Jat Muri Rou Express";
	 cout<<"\n\t\tTRAIN NO.:  18110";
	 cout<<"\n\t\tBOARDING POINT : Jammu Tavi";
	 cout<<"\n\t\tDESTINATION POINT : Rourkela";
	 cout<<"\n\t\tARRIVES :  9:35";
	 cout<<"\n\t\tDEPARTS :  9:55";
	 cout<<"\n\n\tPress ANY KEY to return MAIN MENU....";
	 getch();
	 clrscr();
	 break;
  case 10://Rnc Bgp Express....
	 cout<<"\n\n\n\t\t";
	 line();
	 cout<<"\n\t\t\t  <-All Trains Information->";
	 cout<<"\n\t\t";
	 line();
	 cout<<"\n\n\t\tTRAIN NAME :Rnc Bgp Express";
	 cout<<"\n\t\tTRAIN NO.:  18603";
	 cout<<"\n\t\tBOARDING POINT : Ranchi";
	 cout<<"\n\t\tDESTINATION POINT : Bhagalpur";
	 cout<<"\n\t\tARRIVES :  15:10";
	 cout<<"\n\t\tDEPARTS :  15:30";
	 cout<<"\n\n\tPress ANY KEY to return MAIN MENU....";
	 getch();
	 clrscr();
	 break;
  case 11://returning to current seat availabilty page..
	  clrscr();
	  savail();
	  break;
  case 12://returning to main menu..
	 clrscr();
	 menu();
	 break;
  default:
  cout<<"\n\n\n\t\t\tInvalid choice.!!!\n\t\tPlease enter valid choice from 1 to 12.";
	  getch();
	  clrscr();
	  menu();
 }
}
while(choice!=12);
}
//current seat availability
void savail()
{
int choice;
 cout<<"\n\n\n\t\t";
 line();
 cout<<"\n\t\t\t  <-All Seats Information->";
 cout<<"\n\t\t";
 line();
 cout<<"\n\t\t1.Verifying Train no.";
 cout<<"\n\t\t2.See trains Available";
 cout<<"\n\t\t3.Return Main Page.";
 cout<<"\n\n\n\t\tEnter your choice:";
 cin>>choice;
 switch(choice)
    {
 case 1:int j;
       clrscr();
       cout<<"\n\n\n\t\t";
       line();
       cout<<"\n\t\t\t  <-All Seats Information->";
       cout<<"\n\t\t";
       line();
       cout<<"\n\n\t\t<>Enter the Train no.:";
       cin>>j;
       clrscr();
       switch(j)
      {
  case 18102: //information of murli express
	 cout<<"\n\n\n\t\t";
	 line();
	 cout<<"\n\t\t\t  <-All Trains Information->";
	 cout<<"\n\t\t";
	 line();
	 cout<<"\n\n\t\tTRAIN NAME :Muri Express";
	 cout<<"\n\t\tTRAIN NO.:  18102";
	 cout<<"\n\n\t\tClass of Travel\t\tNo.of seats";
	 cout<<"\t\t\t\t\t\t******\t\t****";
	 cout<<"\n\n\t\tSecond(sitting)       :\t "<<a[0];
	 cout<<"\n\t\tSleeper               :\t "<<a[1];
	 cout<<"\n\t\tAc Chair Car          :\t "<<a[2];
	 cout<<"\n\t\tAc Three Tier         :\t "<<a[3];
	 cout<<"\n\t\tAc Two Tier           :\t "<<a[4];
	 cout<<"\n\t\tExecutive             :\t "<<a[5];
	 cout<<"\n\n\tPress ANY KEY to return MAIN MENU....";
	 getch();
	 clrscr();
	 menu();
	 break;
  case 12019://Satabadi Express..
	 cout<<"\n\n\n\t\t";
	 line();
	 cout<<"\n\t\t\t  <-All Trains Information->";
	 cout<<"\n\t\t";
	 line();
	 cout<<"\n\n\t\tTRAIN NAME :Satabadi Express";
	 cout<<"\n\t\tTRAIN NO.:  12019";
	 cout<<"\n\n\t\tClass of Travel\t\tNo.of seats";
	 cout<<"\t\t\t\t\t\t******\t\t****";
	 cout<<"\n\n\t\tSecond(sitting)       :\t "<<a[6];
	 cout<<"\n\t\tSleeper               :\t "<<a[7];
	 cout<<"\n\t\tAc Chair Car          :\t "<<a[8];
	 cout<<"\n\t\tAc Three Tier         :\t "<<a[9];
	 cout<<"\n\t\tAc Two Tier           :\t "<<a[10];
	 cout<<"\n\t\tExecutive             :\t "<<a[11];
	 cout<<"\n\n\tPress ANY KEY to return MAIN MENU....";
	 getch();
	 clrscr();
	 menu();
	 break;
  case 12365://Rnc Jansatabadi..
	 cout<<"\n\n\n\t\t";
	 line();
	 cout<<"\n\t\t\t  <-All Trains Information->";
	 cout<<"\n\t\t";
	 line();
	 cout<<"\n\n\t\tTRAIN NAME :Rnc Jansatabadi";
	 cout<<"\n\t\tTRAIN NO.:  12365";
	 cout<<"\n\n\t\tClass of Travel\t\tNo.of seats";
	 cout<<"\t\t\t\t\t\t******\t\t****";
	 cout<<"\n\n\t\tSecond(sitting)       :\t "<<a[12];
	 cout<<"\n\t\tSleeper               :\t "<<a[13];
	 cout<<"\n\t\tAc Chair Car          :\t "<<a[14];
	 cout<<"\n\t\tAc Three Tier         :\t "<<a[15];
	 cout<<"\n\t\tAc Two Tier           :\t "<<a[16];
	 cout<<"\n\t\tExecutive             :\t "<<a[17];
	 cout<<"\n\n\tPress ANY KEY to return MAIN MENU....";
	 getch();
	 clrscr();
	 menu();
	 break;
  case 12366://Pnbe Jansatabadi..
	 cout<<"\n\n\n\t\t";
	 line();
	 cout<<"\n\t\t\t  <-All Trains Information->";
	 cout<<"\n\t\t";
	 line();
	 cout<<"\n\n\t\tTRAIN NAME :Pnbe Jansatabadi";
	 cout<<"\n\t\tTRAIN NO.:  12366";
	 cout<<"\n\n\t\tClass of Travel\t\tNo.of seats";
	 cout<<"\t\t\t\t\t\t******\t\t****";
	 cout<<"\n\n\t\tSecond(sitting)       :\t "<<a[18];
	 cout<<"\n\t\tSleeper               :\t "<<a[19];
	 cout<<"\n\t\tAc Chair Car          :\t "<<a[20];
	 cout<<"\n\t\tAc Three Tier         :\t "<<a[21];
	 cout<<"\n\t\tAc Two Tier           :\t "<<a[22];
	 cout<<"\n\t\tExecutive             :\t "<<a[23];
	 cout<<"\n\n\tPress ANY KEY to return MAIN MENU....";
	 getch();
	 clrscr();
	 menu();
	 break;
  case 12817://Jharkhand Sj Express..
	 cout<<"\n\n\n\t\t";
	 line();
	 cout<<"\n\t\t\t  <-All Trains Information->";
	 cout<<"\n\t\t";
	 line();
	 cout<<"\n\n\t\tTRAIN NAME :Jharkhand Sj Express";
	 cout<<"\n\t\tTRAIN NO.:  12817";
	 cout<<"\n\n\t\tClass of Travel\t\tNo.of seats";
	 cout<<"\t\t\t\t\t\t******\t\t****";
	 cout<<"\n\n\t\tSecond(sitting)       :\t "<<a[24];
	 cout<<"\n\t\tSleeper               :\t "<<a[25];
	 cout<<"\n\t\tAc Chair Car          :\t "<<a[26];
	 cout<<"\n\t\tAc Three Tier         :\t "<<a[27];
	 cout<<"\n\t\tAc Two Tier           :\t "<<a[28];
	 cout<<"\n\t\tExecutive             :\t "<<a[29];
	 cout<<"\n\n\tPress ANY KEY to return MAIN MENU....";
	 getch();
	 clrscr();
	 menu();
	 break;
  case 12831://Bbs Garib Rath.....
	 cout<<"\n\n\n\t\t";
	 line();
	 cout<<"\n\t\t\t  <-All Trains Information->";
	 cout<<"\n\t\t";
	 line();
	 cout<<"\n\n\t\tTRAIN NAME :Bbs Garib Rath";
	 cout<<"\n\t\tTRAIN NO.:  12831";
	 cout<<"\n\n\t\tClass of Travel\t\tNo.of seats";
	 cout<<"\t\t\t\t\t\t******\t\t****";
	 cout<<"\n\n\t\tSecond(sitting)       :\t "<<a[30];
	 cout<<"\n\t\tSleeper               :\t "<<a[31];
	 cout<<"\n\t\tAc Chair Car          :\t "<<a[32];
	 cout<<"\n\t\tAc Three Tier         :\t "<<a[33];
	 cout<<"\n\t\tAc Two Tier           :\t "<<a[34];
	 cout<<"\n\t\tExecutive             :\t "<<a[35];
	 cout<<"\n\n\tPress ANY KEY to return MAIN MENU....";
	 getch();
	 clrscr();
	 menu();
	 break;
  case 13351://Dhn Alappuzha Expess....
	 cout<<"\n\n\n\t\t";
	 line();
	 cout<<"\n\t\t\t  <-All Trains Information->";
	 cout<<"\n\t\t";
	 line();
	 cout<<"\n\n\t\tTRAIN NAME :Dhn Alappuzha Expess";
	 cout<<"\n\t\tTRAIN NO.:  13351";
	 cout<<"\n\n\t\tClass of Travel\t\tNo.of seats";
	 cout<<"\t\t\t\t\t\t******\t\t****";
	 cout<<"\n\n\t\tSecond(sitting)       :\t "<<a[36];
	 cout<<"\n\t\tSleeper               :\t "<<a[37];
	 cout<<"\n\t\tAc Chair Car          :\t "<<a[38];
	 cout<<"\n\t\tAc Three Tier         :\t "<<a[39];
	 cout<<"\n\t\tAc Two Tier           :\t "<<a[40];
	 cout<<"\n\t\tExecutive             :\t "<<a[41];
	 cout<<"\n\n\tPress ANY KEY to return MAIN MENU....";
	 getch();
	 clrscr();
	 menu();
	 break;
  case 13352://Dhanbad Express....
	 cout<<"\n\n\n\t\t";
	 line();
	 cout<<"\n\t\t\t  <-All Trains Information->";
	 cout<<"\n\t\t";
	 line();
	 cout<<"\n\n\t\tTRAIN NAME :Dhanbad Express";
	 cout<<"\n\t\tTRAIN NO.:  13352";
	 cout<<"\n\n\t\tClass of Travel\t\tNo.of seats";
	 cout<<"\t\t\t\t\t\t******\t\t****";
	 cout<<"\n\n\t\tSecond(sitting)       :\t "<<a[42];
	 cout<<"\n\t\tSleeper               :\t "<<a[43];
	 cout<<"\n\t\tAc Chair Car          :\t "<<a[44];
	 cout<<"\n\t\tAc Three Tier         :\t "<<a[45];
	 cout<<"\n\t\tAc Two Tier           :\t "<<a[46];
	 cout<<"\n\t\tExecutive             :\t "<<a[47];
	 cout<<"\n\n\tPress ANY KEY to return MAIN MENU....";
	 getch();
	 clrscr();
	 menu();
	 break;
  case 18110://Jat Muri Rou Express.....
	 cout<<"\n\n\n\t\t";
	 line();
	 cout<<"\n\t\t\t  <-All Trains Information->";
	 cout<<"\n\t\t";
	 line();
	 cout<<"\n\n\t\tTRAIN NAME :Jat Muri Rou Express";
	 cout<<"\n\t\tTRAIN NO.:  18110";
	 cout<<"\n\n\t\tClass of Travel\t\tNo.of seats";
	 cout<<"\t\t\t\t\t\t******\t\t****";
	 cout<<"\n\n\t\tSecond(sitting)       :\t "<<a[48];
	 cout<<"\n\t\tSleeper               :\t "<<a[49];
	 cout<<"\n\t\tAc Chair Car          :\t "<<a[50];
	 cout<<"\n\t\tAc Three Tier         :\t "<<a[51];
	 cout<<"\n\t\tAc Two Tier           :\t "<<a[52];
	 cout<<"\n\t\tExecutive             :\t "<<a[53];
	 cout<<"\n\n\tPress ANY KEY to return MAIN MENU....";
	 getch();
	 clrscr();
	 menu();
	 break;
  case 18603://Rnc Bgp Express.....
	 cout<<"\n\n\n\t\t";
	 line();
	 cout<<"\n\t\t\t  <-All Trains Information->";
	 cout<<"\n\t\t";
	 line();
	 cout<<"\n\n\t\tTRAIN NAME :Rnc Bgp Express";
	 cout<<"\n\t\tTRAIN NO.:  18603";
	 cout<<"\n\n\t\tClass of Travel\t\tNo.of seats";
	 cout<<"\t\t\t\t\t\t******\t\t****";
	 cout<<"\n\n\t\tSecond(sitting)       :\t "<<a[54];
	 cout<<"\n\t\tSleeper               :\t "<<a[55];
	 cout<<"\n\t\tAc Chair Car          :\t "<<a[56];
	 cout<<"\n\t\tAc Three Tier         :\t "<<a[57];
	 cout<<"\n\t\tAc Two Tier           :\t "<<a[58];
	 cout<<"\n\t\tExecutive             :\t "<<a[59];
	 cout<<"\n\n\tPress ANY KEY to return MAIN MENU....";
	 getch();
	 clrscr();
	 menu();
	 break;
  default:
	 cout<<"\n\n\n\t\t\tInvalid Train no.!!!\n\t\t     Please enter valid train no.";
	 getch();
	 clrscr();
	 savail();
 }
  case 2:  clrscr();
	   tinform();
	   break;
  case 3:
	   clrscr();
	   menu();
	   break;
 default: clrscr();
	  cout<<"\n\t\t\t!!Invalid choice!!";
	  cout<<"\n\t\t Press ANY KEY to return MAIN MENU....";
	  getch();
	  clrscr();
}
}
//ticket charges fuction....
void tcharge()
{
	 cout<<"\n\n\n\t\t";
	 line();
	 cout<<"\n\t\t\t     <-Ticket Information->";
	 cout<<"\n\t\t";
	 line();
	 cout<<"\n\n\t\tClass of Travel\t\tMinimum Tatkal Charges(in Rs.)";
	 cout<<"\t\t\t\t******\t\t***********";
	 cout<<"\n\n\t\tSecond(sitting)       :\t\t10 ";
	 cout<<"\n\t\tSleeper               :\t\t90 ";
	 cout<<"\n\t\tAc Chair Car          :\t\t100 ";
	 cout<<"\n\t\tAc Three Tier         :\t\t250 ";
	 cout<<"\n\t\tAc Two Tier           :\t\t300 ";
	 cout<<"\n\t\tExecutive             :\t\t300 ";
	 cout<<"\n\n\tPress ANY KEY to return MAIN MENU....";
	 getch();
	 clrscr();
}
// Fuction for Booking ticket...
void tbooking()
{
 int choice;
       cout<<"\n\n\n\t\t";
       line();
       cout<<"\n\t\t\t  <-Booking Tickets->";
       cout<<"\n\t\t";
       line();
       cout<<"\n\n\t\t<>Enter the Train no.:";
       cin>>b[n].trno;
       clrscr();
       switch(b[n].trno)
      {
  case 18102: //information of murli express
	 cout<<"\n\n\n\t\t";
	 line();
	 cout<<"\n\t\t\t  <-Class of Travel->";
	 cout<<"\n\t\t";
	 line();
	 cout<<"\n\n\t\t1.Second(sitting)";
	 cout<<"\n\t\t2.Sleeper";
	 cout<<"\n\t\t3.Ac Chair Car ";
	 cout<<"\n\t\t4.Ac Three Tier";
	 cout<<"\n\t\t5.Ac Two Tier";
	 cout<<"\n\t\t6.Executive";
	 cout<<"\n\n\n\tEnter your choice:";
	 cin>>choice;
	 switch(choice)
	 {
	  case 1:
		 if(a[0]<=10)
		 {
		 a[0]--;
		 strcpy(b[n].clas,"Second (sitting)");
		 strcpy(b[n].trn,"Murli express");
		 b[n].price=10;
		 b[n].code=1;
		 }
		 else if(a[0]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 2:
		 if(a[1]<=10)
		 {
		 a[1]--;
		 strcpy(b[n].clas,"Sleeper");
		 strcpy(b[n].trn,"Murli express");
		 b[n].price=90;
		 b[n].code=2;
		 }
		 else if(a[1]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 3:
		 if(a[2]<=10)
		 {
		 a[2]--;
		 strcpy(b[n].clas,"Ac Chair Car");
		 strcpy(b[n].trn,"Murli express");
		 b[n].price=100;
		 b[n].code=3;
		 }
		 else if(a[2]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 4:
		 if(a[3]<=10)
		 {
		 a[3]--;
		 strcpy(b[n].clas,"Ac Three Tier");
		 strcpy(b[n].trn,"Murli express");
		 b[n].price=250;
		 b[n].code=4;
		 }
		 else if(a[3]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 5:
		 if(a[4]<=10)
		 {
		 a[4]--;
		 strcpy(b[n].clas,"Ac Two Tier");
		 strcpy(b[n].trn,"Murli express");
		 b[n].price=300;
		 b[n].code=5;
		 }
		 else if(a[4]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 6:
		 if(a[5]<=10)
		 {
		 a[5]--;
		 strcpy(b[n].clas,"Executive");
		 strcpy(b[n].trn,"Murli express");
		 b[n].price=300;
		 b[n].code=6;
		 }
		 else if(a[5]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  default :
		  clrscr();
		   cout<<"\n\t\t\t !!!Invalid choice!!!";
		   cout<<"\n\n\tPress ANY KEY to return (Booking page)...";
		   getch();
		   clrscr();
		   tbooking();
	      }
       break;
  case 12019://Satabadi Express..
	 clrscr();
	 cout<<"\n\n\n\t\t";
	 line();
	 cout<<"\n\t\t\t  <-Class of Travel->";
	 cout<<"\n\t\t";
	 line();
	 cout<<"\n\n\t\t1.Second(sitting)";
	 cout<<"\n\t\t2.Sleeper";
	 cout<<"\n\t\t3.Ac Chair Car ";
	 cout<<"\n\t\t4.Ac Three Tier";
	 cout<<"\n\t\t5.Ac Two Tier";
	 cout<<"\n\t\t6.Executive";
	 cout<<"\n\n\n\tEnter yor choice:";
	 cin>>choice;
	 switch(choice)
	 {
	  case 1:
		 if(a[6]<=10)
		 {
		 a[6]--;
		  strcpy(b[n].clas,"Second (sitting)");
		  strcpy(b[n].trn,"Satabadi Express");
		  b[n].price=10;
		  b[n].code=7;
		 }
		 else if(a[6]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 2:
		 if(a[7]<=10)
		 {
		 a[7]--;
		  strcpy(b[n].clas,"Sleeper");
		  strcpy(b[n].trn,"Satabadi Express");
		  b[n].price=90;
		  b[n].code=8;

		 }
		 else if(a[7]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 3:
		 if(a[8]<=10)
		 {
		 a[8]--;
		  strcpy(b[n].clas,"Ac Chair Car");
		  strcpy(b[n].trn,"Satabadi Express");
		  b[n].price=100;
		  b[n].code=9;
		 }
		 else if(a[8]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 4:
		 if(a[9]<=10)
		 {
		 a[9]--;
		  strcpy(b[n].clas,"Ac Three Tier");
		  strcpy(b[n].trn,"Satabadi Express");
		  b[n].price=250;
		  b[n].code=10;
		 }
		 else if(a[9]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 5:
		 if(a[10]<=10)
		 {
		 a[10]--;
		  strcpy(b[n].clas,"Ac Two Tier");
		  strcpy(b[n].trn,"Satabadi Express");
		  b[n].price=300;
		  b[n].code=11;
		 }
		 else if(a[10]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;

	  case 6:
		 if(a[11]<=10)
		 {
		 a[11]--;
		  strcpy(b[n].clas,"Executive");
		  strcpy(b[n].trn,"Satabadi Express");
		  b[n].price=300;
		  b[n].code=12;
		 }

		 else if(a[11]<1)
		{
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;

	  default :
		  clrscr();
		   cout<<"\n\t\t\t !!!Invalid choice!!!";
		   cout<<"\n\n\tPress ANY KEY to return (Booking page)...";
		   getch();
		   clrscr();
		   tbooking();
	 }
       break;
  case 12365://Rnc Jansatabadi..
	 clrscr();
	 cout<<"\n\n\n\t\t";
	 line();
	 cout<<"\n\t\t\t  <-Class of Travel->";
	 cout<<"\n\t\t";
	 line();
	 cout<<"\n\n\t\t1.Second(sitting)";
	 cout<<"\n\t\t2.Sleeper";
	 cout<<"\n\t\t3.Ac Chair Car ";
	 cout<<"\n\t\t4.Ac Three Tier";
	 cout<<"\n\t\t5.Ac Two Tier";
	 cout<<"\n\t\t6.Executive";
	 cout<<"\n\n\n\tEnter yor choice:";
	 cin>>choice;
	 switch(choice)
	 {
	  case 1:
		 if(a[12]<=10)
		 {
		 a[12]--;
		  strcpy(b[n].clas,"Second (sitting)");
		  strcpy(b[n].trn,"Rnc Jansatabadi");
		  b[n].price=10;
		  b[n].code=13;
		 }

		 else if(a[12]<1)
		{
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 2:
		 if(a[13]<=10)
		 {
		 a[13]--;
		   strcpy(b[n].clas,"Sleeper");
		   strcpy(b[n].trn,"Rnc Jansatabadi");
		   b[n].price=90;
		   b[n].code=14;
		 }

		 else if(a[13]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 3:
		 if(a[14]<=10)
		 {
		 a[14]--;
		  strcpy(b[n].clas,"Ac Chair Car");
		  strcpy(b[n].trn,"Rnc Jansatabadi");
		  b[n].price=100;
		  b[n].code=15;
		 }

		 else if(a[14]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 4:
		 if(a[15]<=10)
		 {
		 a[15]--;
		  strcpy(b[n].clas,"Ac Three Tier");
		  strcpy(b[n].trn,"Rnc Jansatabadi");
		  b[n].price=250;
		  b[n].code=16;
		 }
		 else if(a[15]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 5:
		 if(a[16]<=10)
		 {
		 a[16]--;
		 strcpy(b[n].clas,"Ac Two Tier");
		 strcpy(b[n].trn,"Rnc Jansatabadi");
		 b[n].price=300;
		 b[n].code=17;
		 }

		 else if(a[16]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 6:
		 if(a[17]<=10)
		 {
		 a[17]--;
		 strcpy(b[n].clas,"Executive");
		 strcpy(b[n].trn,"Rnc Jansatabadi");
		 b[n].price=300;
		 b[n].code=18;
		 }
		 else if(a[17]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  default :
		   clrscr();
		   cout<<"\n\t\t\t !!!Invalid choice!!!";
		   cout<<"\n\n\tPress ANY KEY to return (Booking page)...";
		   getch();
		   clrscr();
		   tbooking();
       }
       break;
  case 12366://Pnbe Jansatabadi..
	 clrscr();
	 cout<<"\n\n\n\t\t";
	 line();
	 cout<<"\n\t\t\t  <-Class of Travel->";
	 cout<<"\n\t\t";
	 line();
	 cout<<"\n\n\t\t1.Second(sitting)";
	 cout<<"\n\t\t2.Sleeper";
	 cout<<"\n\t\t3.Ac Chair Car ";
	 cout<<"\n\t\t4.Ac Three Tier";
	 cout<<"\n\t\t5.Ac Two Tier";
	 cout<<"\n\t\t6.Executive";
	 cout<<"\n\n\n\tEnter yor choice:";
	 cin>>choice;
	 switch(choice)
	 {
	  case 1:
		 if(a[18]<=10)
		 {
		  a[18]--;
		  strcpy(b[n].clas,"Second (sitting)");
		  strcpy(b[n].trn,"Pnbe Jansatabadi");
		  b[n].price=10;
		  b[n].code=19;
		 }

		 else if(a[18]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 2:
		 if(a[19]<=10)
		 {
		  a[19]--;
		  strcpy(b[n].clas,"Sleeper");
		  strcpy(b[n].trn,"Pnbe Jansatabadi");
		  b[n].price=90;
		  b[n].code=20;
		 }
		 else if(a[19]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 3:
		 if(a[20]<=10)
		 {
		 a[20]--;
		 strcpy(b[n].clas,"Ac Chair Car");
		 strcpy(b[n].trn,"Pnbe Jansatabadi");
		 b[n].price=100;
		 b[n].code=21;
		 }
		 else if(a[20]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 4:
		 if(a[21]<=10)
		 {
		 a[21]--;
		 strcpy(b[n].clas,"Ac Three Tier");
		 strcpy(b[n].trn,"Pnbe Jansatabadi");
		 b[n].price=250;
		 b[n].code=22;
		 }
		 else if(a[21]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 5:
		 if(a[22]<=10)
		 {
		 a[22]--;
		 strcpy(b[n].clas,"Ac Two Tier");
		 strcpy(b[n].trn,"Pnbe Jansatabadi");
		 b[n].price=300;
		 b[n].code=23;
		 }
		 else if(a[22]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 6:
		 if(a[23]<=10)
		 {
		 a[23]--;
		 strcpy(b[n].clas,"Executive");
		 strcpy(b[n].trn,"Pnbe Jansatabadi");
		 b[n].price=300;
		 b[n].code=24;
		 }
		 else if(a[23]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	default :
		   cout<<"\n!!!Invalid choice!!!";
		   getch();
		   clrscr();
		   tbooking();
       }
       break;
  case 12817://Jharkhand Sj Express..
	 clrscr();
	 cout<<"\n\n\n\t\t";
	 line();
	 cout<<"\n\t\t\t  <-Class of Travel->";
	 cout<<"\n\t\t";
	 line();
	 cout<<"\n\n\t\t1.Second(sitting)";
	 cout<<"\n\t\t2.Sleeper";
	 cout<<"\n\t\t3.Ac Chair Car ";
	 cout<<"\n\t\t4.Ac Three Tier";
	 cout<<"\n\t\t5.Ac Two Tier";
	 cout<<"\n\t\t6.Executive";
	 cout<<"\n\n\n\tEnter yor choice:";
	 cin>>choice;
	 switch(choice)
	 {
	  case 1:
		 if(a[24]<=10)
		 {
		 a[24]--;
		 strcpy(b[n].clas,"Second (sitting)");
		 strcpy(b[n].trn,"Jharkhand Sj Express");
		 b[n].price=10;
		 b[n].code=25;
		 }
		 else if(a[24]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 2:
		 if(a[25]<=10)
		 {
		 a[25]--;
		  strcpy(b[n].clas,"Sleeper");
		  strcpy(b[n].trn,"Jharkhand Sj Express");
		  b[n].price=90;
		  b[n].code=26;
		 }
		 else if(a[25]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 3:
		 if(a[26]<=10)
		 {
		 a[26]--;
		 strcpy(b[n].clas,"Ac Chair Car");
		 strcpy(b[n].trn,"Jharkhand Sj Express");
		 b[n].price=100;
		 b[n].code=27;
		 }
		 else if(a[26]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 4:
		 if(a[27]<=10)
		 {
		 a[27]--;
		 strcpy(b[n].clas,"Ac Three Tier");
		 strcpy(b[n].trn,"Jharkhand Sj Express");
		 b[n].price=250;
		 b[n].code=28;
		 }
		 else if(a[27]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 5:
		 if(a[28]<=10)
		 {
		 a[28]--;
		 strcpy(b[n].clas,"Ac Two Tier");
		 strcpy(b[n].trn,"Jharkhand Sj Express");
		 b[n].price=300;
		 b[n].code=29;
		 }
		 else if(a[28]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 6:
		 if(a[29]<=10)
		 {
		 a[29]--;
		 strcpy(b[n].clas,"Executive");
		 strcpy(b[n].trn,"Jharkhand Sj Express");
		 b[n].price=300;
		 b[n].code=30;
		 }
		 else if(a[29]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	default :
		   clrscr();
		   cout<<"\n\t\t\t !!!Invalid choice!!!";
		   cout<<"\n\n\tPress ANY KEY to return (Booking page)...";
		   getch();
		   clrscr();
		   tbooking();
       }
       break;
  case 12831://Bbs Garib Rath.....
	 clrscr();
	 cout<<"\n\n\n\t\t";
	 line();
	 cout<<"\n\t\t\t  <-Class of Travel->";
	 cout<<"\n\t\t";
	 line();
	 cout<<"\n\n\t\t1.Second(sitting)";
	 cout<<"\n\t\t2.Sleeper";
	 cout<<"\n\t\t3.Ac Chair Car ";
	 cout<<"\n\t\t4.Ac Three Tier";
	 cout<<"\n\t\t5.Ac Two Tier";
	 cout<<"\n\t\t6.Executive";
	 cout<<"\n\n\n\tEnter yor choice:";
	 cin>>choice;
	 switch(choice)
	 {
	  case 1:
		 if(a[30]<=10)
		 {
		 a[30]--;
		 strcpy(b[n].clas,"Second (sitting)");
		 strcpy(b[n].trn,"Bbs Garib Rath");
		 b[n].price=10;
		 b[n].code=31;
		 }
		 else if(a[30]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 2:
		 if(a[31]<=10)
		 {
		 a[31]--;
		 strcpy(b[n].clas,"Sleeper");
		 strcpy(b[n].trn,"Bbs Garib Rath");
		 b[n].price=90;
		 b[n].code=32;
		 }
		 else if(a[31]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 3:
		 if(a[32]<=10)
		 {
		 a[32]--;
		 strcpy(b[n].clas,"Ac Chair Car");
		 strcpy(b[n].trn,"Bbs Garib Rath");
		 b[n].price=100;
		 b[n].code=33;
		 }
		 else if(a[32]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 4:
		 if(a[33]<=10)
		 {
		 a[33]--;
		 strcpy(b[n].clas,"Ac Three Tier");
		 strcpy(b[n].trn,"Bbs Garib Rath");
		 b[n].price=250;
		 b[n].code=34;
		 }
		 else if(a[33]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 5:
		 if(a[34]<=10)
		 {
		 a[34]--;
		 strcpy(b[n].clas,"Ac Two Tier");
		 strcpy(b[n].trn,"Bbs Garib Rath");
		 b[n].price=300;
		 b[n].code=35;
		 }
		 else if(a[34]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 6:
		 if(a[35]<=10)
		 {
		 a[35]--;
		 strcpy(b[n].clas,"Executive");
		 strcpy(b[n].trn,"Bbs Garib Rath");
		 b[n].price=300;
		 b[n].code=36;
		 }
		 else if(a[35]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;

	  default :
		   clrscr();
		   cout<<"\n\t\t\t !!!Invalid choice!!!";
		   cout<<"\n\n\tPress ANY KEY to return (Booking page)...";
		   getch();
		   clrscr();
		   tbooking();
       }
       break;
  case 13351://Dhn Alappuzha Expess.....
	 clrscr();
	 cout<<"\n\n\n\t\t";
	 line();
	 cout<<"\n\t\t\t  <-Class of Travel->";
	 cout<<"\n\t\t";
	 line();
	 cout<<"\n\n\t\t1.Second(sitting)";
	 cout<<"\n\t\t2.Sleeper";
	 cout<<"\n\t\t3.Ac Chair Car ";
	 cout<<"\n\t\t4.Ac Three Tier";
	 cout<<"\n\t\t5.Ac Two Tier";
	 cout<<"\n\t\t6.Executive";
	 cout<<"\n\n\n\tEnter yor choice:";
	 cin>>choice;
	 switch(choice)
	 {
	  case 1:
		 if(a[36]<=10)
		 {
		 a[36]--;
		 strcpy(b[n].clas,"Second (sitting)");
		 strcpy(b[n].trn,"Dhn Alappuzha Expess");
		 b[n].price=10;
		 b[n].code=37;
		 }
		 else if(a[36]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 2:
		 if(a[37]<=10)
		 {
		 a[37]--;
		 strcpy(b[n].clas,"Sleeper");
		 strcpy(b[n].trn,"Dhn Alappuzha Expess");
		 b[n].price=90;
		 b[n].code=38;
		 }

		 else if(a[37]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 3:
		 if(a[38]<=10)
		 {
		 a[38]--;
		 strcpy(b[n].clas,"Ac Chair Car");
		 strcpy(b[n].trn,"Dhn Alappuzha Expess");
		 b[n].price=100;
		 b[n].code=39;
		 }
		 else if(a[38]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 4:
		 if(a[39]<=10)
		 {
		 a[39]--;
		 strcpy(b[n].clas,"Ac Three Tier");
		 strcpy(b[n].trn,"Dhn Alappuzha Expess");
		 b[n].price=250;
		 b[n].code=40;
		 }

		 else if(a[39]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 5:
		 if(a[40]<=10)
		 {
		 a[40]--;
		 strcpy(b[n].clas,"Ac Two Tier");
		 strcpy(b[n].trn,"Dhn Alappuzha Expess");
		 b[n].price=300;
		 b[n].code=41;
		 }
		 else if(a[40]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 6:
		 if(a[41]<=10)
		 {
		 a[41]--;
		 strcpy(b[n].clas,"Executive");
		 strcpy(b[n].trn,"Dhn Alappuzha Expess");
		 b[n].price=300;
		 b[n].code=42;
		 }
		 else if(a[41]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
       default :
		   clrscr();
		   cout<<"\n\t\t\t !!!Invalid choice!!!";
		   cout<<"\n\n\tPress ANY KEY to return (Booking page)...";
		   getch();
		   clrscr();
		   tbooking();
       }
       break;
  case 13352://Dhanbad Express.....
	 clrscr();
	 cout<<"\n\n\n\t\t";
	 line();
	 cout<<"\n\t\t\t  <-Class of Travel->";
	 cout<<"\n\t\t";
	 line();
	 cout<<"\n\n\t\t1.Second(sitting)";
	 cout<<"\n\t\t2.Sleeper";
	 cout<<"\n\t\t3.Ac Chair Car ";
	 cout<<"\n\t\t4.Ac Three Tier";
	 cout<<"\n\t\t5.Ac Two Tier";
	 cout<<"\n\t\t6.Executive";
	 cout<<"\n\n\n\tEnter yor choice:";
	 cin>>choice;
	 switch(choice)
	 {
	  case 1:
		 if(a[42]<=10)
		 {
		 a[42]--;
		 strcpy(b[n].clas,"Second (sitting)");
		 strcpy(b[n].trn,"Dhanbad Express");
		 b[n].price=10;
		 b[n].code=43;
		 }
		 else if(a[42]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 2:
		 if(a[43]<=10)
		 {
		 a[43]--;
		 strcpy(b[n].clas,"Sleeper");
		 strcpy(b[n].trn,"Dhanbad Express");
		 b[n].price=90;
		 b[n].code=44;
		 }
		 else if(a[43]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 3:
		 if(a[44]<=10)
		 {
		 a[44]--;
		 strcpy(b[n].clas,"Ac Chair Car");
		 strcpy(b[n].trn,"Dhanbad Express");
		 b[n].price=100;
		 b[n].code=45;
		 }
		 else if(a[44]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 4:
		 if(a[45]<=10)
		 {
		 a[45]--;
		 strcpy(b[n].clas,"Ac Three Tier");
		 strcpy(b[n].trn,"Dhanbad Express");
		 b[n].price=250;
		 b[n].code=46;
		 }
		 else if(a[45]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 5:
		 if(a[46]<=10)
		 {
		 a[46]--;
		 strcpy(b[n].clas,"Ac Two Tier");
		 strcpy(b[n].trn,"Dhanbad Express");
		 b[n].price=300;
		 b[n].code=47;
		 }
		 else if(a[46]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 6:
		 if(a[47]<=10)
		 {
		 a[47]--;
		 strcpy(b[n].clas,"Executive");
		 strcpy(b[n].trn,"Dhanbad Express");
		 b[n].price=300;
		 b[n].code=48;
		 }
		 else if(a[47]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;

	  default :
		   clrscr();
		   cout<<"\n\t\t\t !!!Invalid choice!!!";
		   cout<<"\n\n\tPress ANY KEY to return (Booking page)...";
		   getch();
		   clrscr();
		   tbooking();
       }
       break;
  case 18110://Jat Muri Rou Express.....
	 clrscr();
	 cout<<"\n\n\n\t\t";
	 line();
	 cout<<"\n\t\t\t  <-Class of Travel->";
	 cout<<"\n\t\t";
	 line();
	 cout<<"\n\n\t\t1.Second(sitting)";
	 cout<<"\n\t\t2.Sleeper";
	 cout<<"\n\t\t3.Ac Chair Car ";
	 cout<<"\n\t\t4.Ac Three Tier";
	 cout<<"\n\t\t5.Ac Two Tier";
	 cout<<"\n\t\t6.Executive";
	 cout<<"\n\n\n\tEnter yor choice:";
	 cin>>choice;
	 switch(choice)
	 {
	  case 1:
		 if(a[48]<=10)
		 {
		 a[48]--;
		 strcpy(b[n].clas,"Second (sitting)");
		 strcpy(b[n].trn,"Jat Muri Rou Express");
		 b[n].price=10;
		 b[n].code=49;
		 }
		 else if(a[48]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 2:
		 if(a[49]<=10)
		 {
		 a[49]--;
		 strcpy(b[n].clas,"Sleeper");
		 strcpy(b[n].trn,"Jat Muri Rou Express");
		 b[n].price=90;
		 b[n].code=50;
		 }
		 else if(a[49]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 3:
		 if(a[50]<=10)
		 {
		 a[50]--;
		 strcpy(b[n].clas,"Ac Chair Car");
		 strcpy(b[n].trn,"Jat Muri Rou Express");
		 b[n].price=100;
		 b[n].code=51;
		 }
		 else if(a[50]<1)
		 {
		 cout<<"\nNo seats are avaialble in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 4:
		 if(a[51]<=10)
		 {
		 a[51]--;
		 strcpy(b[n].clas,"Ac Three Tier");
		 strcpy(b[n].trn,"Jat Muri Rou Express");
		 b[n].price=250;
		 b[n].code=52;
		 }
		 else if(a[51]<1)
		 {
		 cout<<"\nNo seats are available in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 5:
		 if(a[52]<=10)
		 {
		 a[52]--;
		 strcpy(b[n].clas,"Ac Two Tier");
		 strcpy(b[n].trn,"Jat Muri Rou Express");
		 b[n].price=300;
		 b[n].code=53;
		 }
		 else if(a[52]<1)
		 {
		 cout<<"\nNo seats are available in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 6:
		 if(a[53]<=10)
		 {
		 a[53]--;
		 strcpy(b[n].clas,"Executive");
		 strcpy(b[n].trn,"Jat Muri Rou Express");
		 b[n].price=300;
		 b[n].code=54;
		 }
		 else if(a[53]<1)
		 {
		 cout<<"\nNo seats are available in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	default :
		   clrscr();
		   cout<<"\n\t\t\t !!!Invalid choice!!!";
		   cout<<"\n\n\tPress ANY KEY to return (Booking page)...";
		   getch();
		   clrscr();
		   tbooking();
	       }
	  break;
  case 18603://Rnc Bgp Express.....
	 clrscr();
	 cout<<"\n\n\n\t\t";
	 line();
	 cout<<"\n\t\t\t  <-Class of Travel->";
	 cout<<"\n\t\t";
	 line();
	 cout<<"\n\n\t\t1.Second(sitting)";
	 cout<<"\n\t\t2.Sleeper";
	 cout<<"\n\t\t3.Ac Chair Car ";
	 cout<<"\n\t\t4.Ac Three Tier";
	 cout<<"\n\t\t5.Ac Two Tier";
	 cout<<"\n\t\t6.Executive";
	 cout<<"\n\n\n\tEnter yor choice:";
	 cin>>choice;
	 switch(choice)
	 {
	  case 1:
		 if(a[54]<=10)
		 {
		 a[54]--;
		 strcpy(b[n].clas,"Second (sitting)");
		 strcpy(b[n].trn,"Rnc Bgp Express");
		 b[n].price=10;
		 b[n].code=55;
		 }

		 else if(a[54]<1)
		 {
		 cout<<"\nNo seats are available in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 2:
		 if(a[55]<=10)
		 {
		 a[55]--;
		 strcpy(b[n].clas,"Sleeper");
		 strcpy(b[n].trn,"Rnc Bgp Express");
		 b[n].price=90;
		 b[n].code=56;
		 }
		 else if(a[55]<1)
		 {
		 cout<<"\nNo seats are available in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 3:
		 if(a[56]<=10)
		 {
		 a[56]--;
		 strcpy(b[n].clas,"Ac Chair Car");
		 strcpy(b[n].trn,"Rnc Bgp Express");
		 b[n].price=100;
		 b[n].code=57;
		 }

		 else if(a[56]<1)
		 {
		 cout<<"\nNo seats are available in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 4:
		 if(a[57]<=10)
		 {
		 a[57]--;
		 strcpy(b[n].clas,"Ac Three Tier");
		 strcpy(b[n].trn,"Rnc Bgp Express");
		 b[n].price=250;
		 b[n].code=58;
		 }

		 else if(a[57]<1)
		 {
		 cout<<"\nNo seats are available in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 5:
		 if(a[58]<=10)
		 {
		 a[58]--;
		 strcpy(b[n].clas,"Ac Two Tier");
		 strcpy(b[n].trn,"Rnc Bgp Express");
		 b[n].price=300;
		 b[n].code=59;
		 }
		 else if(a[58]<1)
		 {
		 cout<<"\nNo seats are available in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	  case 6:
		 if(a[59]<=10)
		 {
		 a[59]--;
		 strcpy(b[n].clas,"Executive");
		 strcpy(b[n].trn,"Rnc Bgp Express");
		 b[n].price=300;
		 b[n].code=60;
		 }
		 else if(a[59]<1)
		 {
		 cout<<"\nNo seats are available in this class";
		 getch();
		 clrscr();
		 cout<<"\nPress ANY KEY to return main menu...";
		 menu();
		 }
		 break;
	default :  clrscr();
		   cout<<"\n\t\t\t !!!Invalid choice!!!";
		   cout<<"\n\n\tPress ANY KEY to return (Booking page)...";
		   getch();
		   clrscr();
		   tbooking();
	  }
	  break;
 default: clrscr();
	  cout<<"\n\n\n\t\t\tInvalid Train no.!!!\n\t\t     Please enter valid train no.";
	  cout<<"\n\n\t Press ANY KEY to return MAIN MENU....";
	  getch();
	  clrscr();
	  menu();
}
clrscr();
	 cout<<"\n\n\n\t\t";
	 line();
	 cout<<"\n\t\t\t  <-Enter passenger Details->";
	 cout<<"\n\t\t";
	 line();
	 cout<<"\n\t\tpassenger name:";
	 gets(b[n].name);
	 cout<<"\t\tAge:";
	 cin>>b[n].age;
	 cout<<"\t\tGender:";
	 gets(b[n].gen);
	 cout<<"\t\tPassengers Address:";
	 gets(b[n].adr);
	 cout<<"\t\tDate of Booking:";
	 gets(b[n].d);
	 cout<<"\t\tDate of Journey:";
	 gets(b[n].j);
	 cout<<"\n\t\tTicket Successfully booked.....";
	 cout<<"\n\t\tpress Any key to see your Ticket...";
	 getch();
	 clrscr();
	 cout<<"\n\n\n\t\t";
	 line();
	 cout<<"\n\t\t\t  <-Ticket Information->";
	 cout<<"\n\t\t";
	 line();
	b[n].tno=tn++;
	cout<<"\n\t\tTicket Number:"<<b[n].tno;
	cout<<"\n\t\tTrain Name:";
	puts(b[n].trn);
	cout<<"\t\tTrain no.:"<<b[n].trno;
	cout<<"\n\t\tClass of Travel:";
	puts(b[n].clas);
	cout<<"\t\tPassenger name:";
	puts(b[n].name);
	cout<<"\t\tAge:"<<b[n].age;
	cout<<"\n\t\tGender:";
	puts(b[n].gen);
	cout<<"\t\tAddress:";
	puts(b[n].adr);
	cout<<"\t\tDate of booking:"<<b[n].d;
	cout<<"\n\t\tDate of Journey:"<<b[n].j;
	cout<<"\n\t\tYou have to pay(Rs):"<<b[n].price;
	n++;
	cout<<"\n\n\t\tpress ANY KEY to return MAIN MENU.....";
	getch();
	clrscr();
}
//ticket cancellation function......
void cancel()
{
int sk;
char found='f';
cout<<"\n\n\n\t\t";
	 line();
	 cout<<"\n\t\t\t  <-Ticket Cancellation->";
	 cout<<"\n\t\t";
	 line();
	 cout<<"\n\t\tEnter your Ticket Number:";
	 cin>>sk;
	 for(int i=0;i<n;i++)
	  {
	    if(sk==b[i].tno)
	     {
	      found='t';
	      break;
	     }
	  }
	    if(found=='t')
	     {
	       seat(i);
	       sum=b[i].price-(b[i].price*10/100);
	       for(int j=i;j<n;j++)
		{
		b[j]=b[j+1];
		}
		n--;
		cout<<"\n\t\tTicket sucessfully  cancelled";
		cout<<"\n\n\t\tMoney which you get After charging""\n\t\t10% of total fare as Penality(Rs):"<<sum;
		cout<<"\n\n\t\tPress ANY KEY to return to Main Menu...";
	     }
	    else
		{
		 cout<<"\n\t\tInvalid ticket number";
		 cout<<"\n\t\tPress ANY KEY to return to Main Menu...";
		 }
		 getch();
		 clrscr();
}
///fuction for seat
void seat(int i)
{
 switch(b[i].code)
 {
 case 1:
	a[0]++;
	break;
 case 2:
	a[1]++;
	break;
 case 3:
	a[2]++;
	break;
 case 4:
	a[3]++;
	break;
 case 5:
	a[4]++;
	break;
 case 6:
	a[5]++;
	break;
 case 7:
	a[6]++;
	break;
 case 8:
	a[7]++;
	break;
 case 9:
	a[8]++;
	break;
 case 10:
	a[9]++;
	break;
 case 11:
	a[10]++;
	break;
 case 12:
	a[11]++;
	break;
 case 13:
	a[12]++;
	break;
 case 14:
	a[13]++;
	break;
 case 15:
	a[14]++;
	break;
 case 16:
	a[15]++;
	break;
 case 17:
	a[16]++;
	break;
 case 18:
	a[17]++;
	break;
 case 19:
	a[18]++;
	break;
 case 20:
	a[19]++;
	break;
 case 21:
	a[20]++;
	break;
 case 22:
	a[21]++;
	break;
 case 23:
	a[22]++;
	break;
 case 24:
	a[23]++;
	break;
 case 25:
	a[24]++;
	break;
 case 26:
	a[25]++;
	break;
 case 27:
	a[26]++;
	break;
 case 28:
	a[27]++;
	break;
 case 29:
	a[28]++;
	break;
 case 30:
	a[29]++;
	break;
 case 31:
	a[30]++;
	break;
 case 32:
	a[31]++;
	break;
 case 33:
	a[32]++;
	break;
 case 34:
	a[33]++;
	break;
 case 35:
	a[34]++;
	break;
 case 36:
	a[35]++;
	break;
 case 37:
	a[36]++;
	break;
 case 38:
	a[37]++;
	break;
 case 39:
	a[38]++;
	break;
 case 40:
	a[39]++;
	break;
 case 41:
	a[40]++;
	break;
 case 42:
	a[41]++;
	break;
 case 43:
	a[42]++;
	break;
 case 44:
	a[43]++;
	break;
 case 45:
	a[44]++;
	break;
 case 46:
	a[45]++;
	break;
 case 47:
	a[46]++;
	break;
 case 48:
	a[47]++;
	break;
 case 49:
	a[48]++;
	break;
 case 50:
	a[49]++;
	break;
 case 51:
	a[50]++;
	break;
 case 52:
	a[51]++;
	break;
 case 53:
	a[52]++;
	break;
 case 54:
	a[53]++;
	break;
 case 55:
	a[54]++;
	break;
 case 56:
	a[55]++;
	break;
 case 57:
	a[56]++;
	break;
 case 58:
	a[57]++;
	break;
 case 59:
	a[58]++;
	break;
 case 60:
	a[59]++;
	break;
 }
}
//function for rules and regulation
void rules()
{
 cout<<"\n\n\n\t\t";
 line();
 cout<<"\n\t\t\t  <-Rules And Regulations->";
 cout<<"\n\t\t";
 line();
 cout<<"\n\t\t1.General Enquiry Available.";
 cout<<"\n\t\t  a.Train Schedule of Trains.";
 cout<<"\n\t\t  b.Train Fare.";
 cout<<"\n\n\t\t2.E-booking Facility for E-tickets.";
 cout<<"\n\t\t  (E-tickets Can't be Cancelled at Counters)";
 cout<<"\n\n\t\t3.Online Cancellation Facility for E-tickets.";
 cout<<"\n\n\t\t4.Your booking will be confirmed online,after""\n\t\t  you complete the Transaction successfully.";
 cout<<"\n\n\t\t5.During Journey:passport/voter Id/Aadhar card""\n\t\t  /Ration card /Student Id card(Any of these)";
 cout<<"\n\n\t\t6.During Ticket Cancellation,10 % of total""\n\t\t  fare will be charge as penality.";
 cout<<"\n\n\t\tPress ANY KEY to return to MAIN MENU...";
 getch();
 clrscr();
}

//function for printing line
void line()
{
for(int i=0;i<45;i++)
cout<<"*";
}
//function for main menu..
void menu()
{
int choice;
do
{

 cout<<"\n\n\n\t\t";
 line();
 cout<<"\n\t\t  <-WELCOME TO ONLINE RAILWAY RESERVATION->";
 cout<<"\n\t\t";
 line();
 cout<<"\n\n\t\t1.Train Information";
 cout<<"\n\t\t2.Current Seat Availability";
 cout<<"\n\t\t3.Ticket Charges";
 cout<<"\n\t\t4.Ticket Booking";
 cout<<"\n\t\t5.Ticket Verification";
 cout<<"\n\t\t6.Ticket Cancellation";
 cout<<"\n\t\t7.Rules & Regulations";
 cout<<"\n\t\t8.Exit";
 cout<<"\n\n\tEnter Your choice:";
 cin>>choice;
clrscr();
switch(choice)
 {
  case 1: //calling train type information function..
	  tinform();
	  break;
  case 2://calling seat availability function..
	  savail();
	  break;
  case 3://calling ticket charges function..
	  tcharge();
	  break;
  case 4://calling ticket booking function..
	  tbooking();
	  break;
  case 5://calling verify function for confiming ticket..
	  verify();
	  break;
  case 6://calling ticket cancellation function ..
	  cancel();
	  break;
  case 7://calling rules and regulation function...
	  rules();
	  break;
  case 8://for coming out of the software..
	 cout<<"\n\n\t\t\tThank You for using our software..";
	 cout<<"\n\t\t\t\tUse it Again..\n\t\t(created by shivam,karn,kunal & ritik)\n\n\t\t\tPress ANY KEY to EXIT....";
	 getch();
	 exit(1);//function for quitting the software..
	 break;
  default:
	 cout<<"\n\n\n\t\t\tInvalid choice.!!!\n\t\tPlease enter valid choice from 1 to 8.";
	  getch();
	  clrscr();
	  menu();
 }
}
while(choice!=8);
}

//MAIN FUNCTION
void main()
{
textcolor(RED);
clrscr();
menu();
getch();
}
