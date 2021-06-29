#include <iostream>
using namespace std;
class time
{
    private:
        int seconds;
        int h,m,s;
    public:
        void gettime();
        void convertintoseconds();
        void displaytime();
};
void time::gettime()
{
    cout << "Enter time:" << endl;
    cout << "\tHours?   ";          
	cin >>h;
    cout << "\tMinutes? ";          
	cin >>m;
    cout << "\tSeconds? ";          
	cin >>s;
}
void time::convertintoseconds()
{
    seconds = h*3600 +m*60 +s;
} 
void time::displaytime()
{
    cout << "\nThe time is = " <<h<<"h :" <<m<<"m :" <<s<<"s." ;
    cout << "\nTime in total seconds: " << seconds;
} 
int main()
{
    time t; 
    t.gettime();
    t.convertintoseconds();
    t.displaytime();
    return 0;
}
