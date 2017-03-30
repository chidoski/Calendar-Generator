// Libraries
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

//void functions
void Print_Month(string,int,int&); 
void Heading(string); 
void Get_Year(int&); 
void Get_Start_Day(int&); 
void Read_Month_Data(int&,string&);
ifstream infile; 

// Main function 
int main()
{
	 //Variables
	 string month; 
	 int year1 = 0; 
	 int num_days = 0; 
	 int lastDay = 4; 
	 Get_Year(year1); 
	 Get_Start_Day(lastDay);
	 infile.open("calendar.txt"); // open file
	 infile>>month>>num_days; // read from file
	 cout << setw (20) << "YEAR -- " << year1 << endl << endl;
		 while (infile) // while statement for printing and read months
		  {
			  Print_Month(month, num_days, lastDay);
			  Read_Month_Data(num_days, month);
		  }
 return 0;
}
//void statements
void Read_Month_Data(int & days, string & month) 
	{
	  infile>>month>>days;
	}
void Heading (string month) // print month & days
	{
	 cout << endl << endl;
	 cout << setw (22)<< month << endl << endl;
	 cout << setw (5) <<"  Sun|" <<" Mon|"<<" Tue|" <<" Wed|"<<" Thu|" <<" Fri|" <<" Sat|" << endl;
	}
void Print_Month(string mon,int num_days,int & lDay) 
	{
	 Heading(mon);
	 //Variables
	 int Week_Count = 1; 
	 int Day_Count = 1;
	 if(lDay != 7)
	{
		 while (lDay > 1)
		  {
		   cout << setw(5)<< "";
		   Week_Count++;
		   lDay--;
		  }
	 }
while (Day_Count <= num_days) // while for number of days within month
	 {
		  if (Week_Count % 8 == 0) // if-statement for weeks
		  {
		   Week_Count = 1;
		   cout << endl << endl;
		  }
	  cout << setw(5)<< Day_Count; // 
	  Week_Count++; // Adds one to the current value of the variable
	  Day_Count++;
	 }
	 lDay = Week_Count-1;
	 cout << endl;
	}
void Get_Year(int & year) // prompt for year
	{
	 cout << "Enter the year: " << endl;
	 cin >> year;
	 cout << endl;
	
	}
void Get_Start_Day(int & day) // prompt for beginning date
	{
		cout << "Enter the start date: 1 = Sun, 2 = Mon, 3 = Tues,"  "4 = Wed," << endl << " 5 = Thurs, 6 = Fri, 7 = Sat: " << endl;
	 cin >> day;
	}
/*
Random Output
Enter the year:
2012

Enter the start date: 1 = Sun, 2 = Mon, 3 = Tues,4 = Wed,
 5 = Thurs, 6 = Fri, 7 = Sat:
7
            YEAR -- 2012



               January

  Sun| Mon| Tue| Wed| Thu| Fri| Sat|
    1    2    3    4    5    6    7

    8    9   10   11   12   13   14

   15   16   17   18   19   20   21

   22   23   24   25   26   27   28

   29   30   31


              February

  Sun| Mon| Tue| Wed| Thu| Fri| Sat|
              1    2    3    4    5

    6    7    8    9   10   11   12

   13   14   15   16   17   18   19

   20   21   22   23   24   25   26

   27   28


                 March

  Sun| Mon| Tue| Wed| Thu| Fri| Sat|
         1    2    3    4    5    6

    7    8    9   10   11   12   13

   14   15   16   17   18   19   20

   21   22   23   24   25   26   27

   28   29   30   31


                 April

  Sun| Mon| Tue| Wed| Thu| Fri| Sat|
                   1    2    3    4

    5    6    7    8    9   10   11

   12   13   14   15   16   17   18

   19   20   21   22   23   24   25

   26   27   28   29   30


                   May

  Sun| Mon| Tue| Wed| Thu| Fri| Sat|
                        1    2    3

    4    5    6    7    8    9   10

   11   12   13   14   15   16   17

   18   19   20   21   22   23   24

   25   26   27   28   29   30   31


                  June

  Sun| Mon| Tue| Wed| Thu| Fri| Sat|
    1    2    3    4    5    6    7

    8    9   10   11   12   13   14

   15   16   17   18   19   20   21

   22   23   24   25   26   27   28

   29   30


                  July

  Sun| Mon| Tue| Wed| Thu| Fri| Sat|
         1    2    3    4    5    6

    7    8    9   10   11   12   13

   14   15   16   17   18   19   20

   21   22   23   24   25   26   27

   28   29   30   31


                August

  Sun| Mon| Tue| Wed| Thu| Fri| Sat|
                   1    2    3    4

    5    6    7    8    9   10   11

   12   13   14   15   16   17   18

   19   20   21   22   23   24   25

   26   27   28   29   30   31


             September

  Sun| Mon| Tue| Wed| Thu| Fri| Sat|
                             1    2

    3    4    5    6    7    8    9

   10   11   12   13   14   15   16

   17   18   19   20   21   22   23

   24   25   26   27   28   29   30


               October

  Sun| Mon| Tue| Wed| Thu| Fri| Sat|
    1    2    3    4    5    6    7

    8    9   10   11   12   13   14

   15   16   17   18   19   20   21

   22   23   24   25   26   27   28

   29   30   31


              November

  Sun| Mon| Tue| Wed| Thu| Fri| Sat|
              1    2    3    4    5

    6    7    8    9   10   11   12

   13   14   15   16   17   18   19

   20   21   22   23   24   25   26

   27   28   29   30


              December

  Sun| Mon| Tue| Wed| Thu| Fri| Sat|
                   1    2    3    4

    5    6    7    8    9   10   11

   12   13   14   15   16   17   18

   19   20   21   22   23   24   25

   26   27   28   29   30   31
Press any key to continue . . .*/