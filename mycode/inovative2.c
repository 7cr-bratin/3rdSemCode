

                                    // --------------------: PROJECT TO BUILD A CALENDER :---------------------
 


#include<stdio.h>
#include<stdlib.h>
 
int get_first_day(int year)
{
    int d;
    d = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;                //---------This algorithm to be remembered ---------
    return d;
}



int main()
{
    int year ,month ,monthDay ,days ,weekdays=0, startingDay;
    system("color 2F");

    /*0 = Black       8 = Gray     
    1 = Blue        9 = Light Blue
    2 = Green       A = Light Green
    3 = Aqua        B = Light Aqua                            //------: LEARN FROM THE ERRORS :-------
    4 = Red         C = Light Red
    5 = Purple      D = Light Purple
    6 = Yellow      E = Light Yellow
    7 = White       F = Bright White*/

    printf("Enter the desired year: ");
    scanf("%d",&year);

    char *months[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    int days_in_month[]={31,28,31,30,31,30,31,31,30,31,30,31};

    if((year%4==0 && year%100==0)||year%400==0)
        days_in_month[1]=29;

    startingDay = get_first_day(year);
    
    for(month=0;month<12;month++)
    {
        monthDay=days_in_month[month];
        printf("\n\n--------------------%s-------------------\n",months[month]);
        printf("\n    Sun   Mon   Tue   Wed   Thus   Fri   Sat\n ");

        for(weekdays=0 ; weekdays< startingDay; weekdays++)                            //-----------------: Point to be noted :--------------
             printf("      ");

        for(days=1;days<=monthDay;days++)
        {
            printf("%6d",days);

            if(++weekdays>6)
            {
                printf("\n");
                weekdays=0;
            }    
            startingDay = weekdays;                                                 //-------------: Point to be noted :-----------------
        }
    }
}