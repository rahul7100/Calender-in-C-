#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
void main()
{
   clrscr();
    cout<<"\t    ----------------------***CALENDER***-----------------------  ";

     cout<<"\n-------------------------------------------------------------------------------\n";
  {
   char myline[100];
   ifstream file("intro.txt");
   while(file)
   {
	file.getline(myline,80,'_');
	if(file.eof()) break;
	cout<<myline;
   }
  }
	cout<<"\n-------------------------------------------------------------------------------\n";
  int i,j,month,months,year;int vas;int f,c,d,date=1;
   cout<<"\nEnter Month  =";cin>>months;
   if(months==3) month=1;  if(months==4) month=2; if(months==5) month=3;
   if(months==6) month=4;  if(months==7) month=5; if(months==8) month=6;
   if(months==9) month=7;  if(months==10) month=8; if(months==11) month=9;
   if(months==12) month=10;  if(months==1) month=11; if(months==2) month=12;
   cout<<"\nEnter Year=";cin>>year;
   c=year/100;
   d=year%100;
	if(month==11||month==12)d=d-1;
	if(month==1)   cout<<"\n--------------------------------------MARCH-----------------------------------";
      else if(month==2)cout<<"\n--------------------------------------APRIL-----------------------------------";
      else if(month==3)cout<<"\n---------------------------------------MAY------------------------------------";
      else if(month==4)cout<<"\n--------------------------------------JUNE------------------------------------";
      else if(month==5)cout<<"\n--------------------------------------JULY------------------------------------";
      else if(month==6)cout<<"\n--------------------------------------AUGUST----------------------------------";
      else if(month==7)cout<<"\n-------------------------------------SEPTEMBER--------------------------------";
      else if(month==8)cout<<"\n--------------------------------------OCTOBER---------------------------------";
      else if(month==9)cout<<"\n-------------------------------------NOVEMBER---------------------------------";
     else if(month==10)cout<<"\n-------------------------------------DECEMBER---------------------------------";
     else if(month==11)cout<<"\n--------------------------------------JANUARY---------------------------------";
     else if(month==12)cout<<"\n--------------------------------------FEBUARY---------------------------------";
      cout<<"\n---------------------------------------"<<year<<"-----------------------------------";
      cout<<"\n==============================================================================";
  cout<<"\nSUN\tMON\tTUES\tWED\tTHURS\tFRI\tSAT\n";
  f=date+((13*month-1)/5)+d+(d/4)+(c/4)-(2*c);
  f=f%7; if(f<0)f=f+7;
    if(f==1)cout<<"\t";
    else if(f==2)cout<<"\t\t";
    else if(f==3)cout<<"\t\t\t";
    else if(f==4)cout<<"\t\t\t\t";
    else if(f==4)cout<<"\t\t\t\t\t";
    else if(f==5)cout<<"\t\t\t\t\t";
    else if(f==6)cout<<"\t\t\t\t\t\t";
    else if(f==7)cout<<"\t\t\t\t\t\t\t\t";
		 for(j=1,i=f+1;j<32;++j,++i)
		      {
		      cout<<j<<"\t";
		      if(i%7==0)cout<<"\n";
		      if(month==12)
		      {
		      if((d+1)%4==0)
			  {
			  if(j==29)break;
			  }
			  else
			  {
			     if(j==28)break;
			  }
		      }

		     }
     cout<<"\n===============================================================================";
     cout<<"\t\t   ----------------------****THANKYOU***-----------------------";
     cout<<"\t\t\t\t\t\t*****************";
     cout<<"\t\t\t\t\t\t\t\t     *******     ";
     cout<<"\t\t\t\t\t\t\t\t       ***       ";
      cout<<"\t\t\t\t\t\t\t\t        *       ";

  }

