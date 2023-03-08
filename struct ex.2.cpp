#include <iostream>
using namespace std ;

struct timetype
    {
        int hr;
        double min;
        int sec;
    } ;

struct  tourtype
    {
        string cityname;
        int distance;
        timetype traveltime;
    };


void disblay (tourtype t)
{
    cout<<t.cityname<<endl;
    cout<<t.distance<<endl;
    cout<<t.traveltime.hr<<endl;
    cout<<t.traveltime.min<<endl;
    cout<<t.traveltime.sec<<endl;
};

void ref__input(tourtype&tour){
    cout<<"enter city name "<<endl;
    cin>>tour.cityname;
    cout<<"enter distination"<<endl;
    cin>>tour.distance;
    cout<<"enter traveltime in hours"<<endl;
    cin>>tour.traveltime.hr;
    cout<<"enter traveltime in minutes"<<endl;
    cin>>tour.traveltime.min;
    cout<<"enter traveltime in seconds"<<endl;
    cin>>tour.traveltime.sec;
};


tourtype input (){
    tourtype t;
     cout<<"enter city name "<<endl;
    cin>>t.cityname;
    cout<<"enter distination"<<endl;
    cin>>t.distance;
    cout<<"enter traveltime in hours"<<endl;
    cin>>t.traveltime.hr;
    cout<<"enter traveltime in minutes"<<endl;
    cin>>t.traveltime.min;
    cout<<"enter traveltime in seconds"<<endl;
    cin>>t.traveltime.sec;
return (t);
};


int main ()
{
    tourtype distination;

    distination.cityname= "chigago";
    distination.distance=550;
    distination.traveltime.hr=9;
    distination.traveltime.min=30;
    distination.traveltime.sec=30;
    disblay (distination);
    tourtype d=input();
    disblay(d);
    tourtype dest;
    ref__input(dest);
    disblay(dest);
    return 0;

}