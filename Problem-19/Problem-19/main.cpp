#include <iostream>
#include <vector>

using namespace std;

typedef struct{
    int day, month, year;
}Date;

int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int daysL[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool isLeapYear(int year){
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? true : false;
}

int findPos(Date d){
    int dayOfYear = 0;
    for (int i = 0; i < d.month - 1; i++) {
        dayOfYear += days[i];
    }
    dayOfYear += d.day;//add the number of days in the current month to total days in year
    dayOfYear += (isLeapYear(d.year) && (d.month >= 3)) ? 1 : 0;//add an additional day if leap year and month is March or later
    return dayOfYear;
}

int daysDiff(Date start, Date end){
    int year = 0, diff = 0;
    int day1 = findPos(start), day2 = findPos(end);
    if (start.year == end.year) {
        diff = day2 - day1;
    } else {
        year = start.year;
        diff += (isLeapYear(year)) ? 366 - day1 : 365 - day1;//add the remaining days in the year to diff
        year++;//increment year
        for (int i = year; i < end.year; i++) {//loop from start year + 1 to end year
            diff += (isLeapYear(i)) ? 366 : 365;//add a year (366 or 365 days) to diff for each year between year + 1 and end year
        }
        diff += day2; //add days in second year
    }
    return diff;
}

int numSundays(Date start, Date end){
    int d = 0, sunday = 0, year = start.year;
    while (year <= end.year){
        for (int i = 0; i < 12; i++) {
            d++;
            if (d % 7 == 5) sunday++;
            d += (isLeapYear(year)) ? daysL[i] - 1 : days[i] - 1;
        }
        year++;
    }
    
    return sunday;
}

int main(){
    Date startDate = {1, 1, 1901}, endDate = {31, 12, 2000};
    
    cout << numSundays(startDate, endDate) << endl;
    
    
    return 0;
}