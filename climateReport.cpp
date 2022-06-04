#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

using namespace std;
class india{
    protected:
         char name[15];
         int rain;
         int humidity;
         char soil[10];
         char kind[10];
};

class Delhi:public india
{
    

    public:

         void get(char*,char*,char*);
         void show()
         {
             
             cout<<"Name          : Delhi.";  
             cout<<"\nSoil colour : Red.";
             cout<<"\nRain        : Near30-50%";
             cout<<"\nHumidity    : Near20-40%";
             cout<<"\nsoilkind    : Normal\n";
         }
         Delhi(){
             show();
         }
};

void Delhi::get(char *n,char *a,char *g)      
{
     strcpy(name,n);
     strcpy(soil,a);
     strcpy(kind,g);
     cout<<"Enter rain:";
     cin>>rain;
     cout<<"Enter humidity:";
     cin>>humidity;

    cout<<"\n\nArea name : "<<name
         <<"\nSoil colour : "<<soil
         <<"\nSoil kind   : "<<kind
         <<"\nRain fall   : "<<rain
         <<"\nHumidity    : "<<humidity;

    if (rain<30 || humidity<20)                                         
        cout<<"\n\nThe area is near west delhi.";                         
    else if (rain>=30 && rain<35 || humidity>=20 && humidity<25)
        cout<<"\n\nThe area is near east delhi.";                         
    else if(rain>=35 && rain<40 || humidity>=25 && humidity<30)
        cout<<"\n\nThe area is near north delhi.";                         
    else if (rain>=40 && rain<45 || humidity>=30 && humidity<35)
        cout<<"\n\nThe area is near south delhi.";                       
    else if (rain>=45 && rain<50 || humidity>=35 && humidity<40)
        cout<<"\n\nThe area is near faridabad.";                      
    else if(rain>=50 || humidity>=40)
           cout<<"\n\nThe area is near greater noida.";                 
}

class Ahmedabad :public india  
{
   
    public:
         void get(char*,char*,char*);
         void show()
         {
             
             cout<<"Name          : Ahmedabad.";              
             cout<<"\nSoil colour : Gray";
             cout<<"\nRain        : Near 35-55%";
             cout<<"\nHumidity    : Near 40-55%";
             cout<<"\nsoilkind    : Normal\n";
         }
         Ahmedabad(){
             show();
         }
};

void Ahmedabad::get(char *n,char *a,char *g)                
{
    strcpy(name,n);
    strcpy(soil,a);
    strcpy(kind,g);
    cout<<"Enter rain: ";
    cin>>rain;
    cout<<"Enter humidity:";
    cin>>humidity;


    cout<<"\n\nArea name : "<<name
         <<"\nSoil colour : "<<soil
         <<"\nSoil kind   : "<<kind
         <<"\nRain fall   : "<<rain
         <<"\nHumidity    : "<<humidity;

    if (rain<35 || humidity<40)
        cout<<"\n\nThe area is near Rajkot.";             
    else if (rain>=35 && rain<40 || humidity>=40 && humidity<45)
        cout<<"\n\nThe area is near Jamnagar.";                        
    else if(rain>=40 && rain<45 || humidity>=45 && humidity<50)
        cout<<"\n\nThe area is near Ahmedabad.";                        
    else if(rain>=45 && rain<55 || humidity>=50 && humidity<55)
        cout<<"\n\nThe area is near Valsad.";                           
    else if (rain>=55 || humidity>=55)
        cout<<"\n\nThe area is near Kheda.";                
}

class Kannur : public india                       
{
   
    public:
         void get(char*,char*,char*);
         void show()
         {
             
             cout<<"Name          : Kannur.";           
             cout<<"\nSoil colour : Brown.";
             cout<<"\nRain        : Near 40-55%";
             cout<<"\nHumidity    : Near 55-65%";
             cout<<"\nsoilkind    : Salty\n";
         }
         Kannur(){
             show();
         }
};

void Kannur ::get(char *n,char *a,char *g)            
{
    strcpy(name,n);
    strcpy(soil,a);
    strcpy(kind,g);
    cout<<"Enter rain: ";
    cin>>rain;
    cout<<"Enter humidity:";
    cin>>humidity;


    cout<<"\n\nArea name : "<<name
         <<"\nSoil colour : "<<soil
         <<"\nSoil kind   : "<<kind
         <<"\nHumidity    : "<<humidity
         <<"\nRain fall   : "<<rain;
    if  (rain<40 || humidity<55)
        cout<<"\n\nThe area is near kozhikode.";                        
    else if (rain>=40 && rain<45 || humidity>=55 && humidity<60)
        cout<<"\n\nThe area is near Malappuram.";                       
    else if(rain>=45 && rain<50 || humidity>=60 && humidity<65)
        cout<<"\n\nThe area is near Kannur.";                    
    else if(rain>=50 || humidity>=65)
        cout<<"\n\nThe area is near Kollam.";         
}

class Amritsar : public india           
{
   
    public:
         void get(char*,char*,char*);
         void show()
         {
             
             cout<<"Name          : amritsar.";         
             cout<<"\nSoil colour : Black.";
             cout<<"\nRain        : Near 40-50%";
             cout<<"\nHumidity    : Near 65-75%";
             cout<<"\nsoilkind    : Salty\n";
         }
         Amritsar(){
             show();
         }
};

void Amritsar ::get(char *n,char *a,char *g)           
{
    strcpy(name,n);
    strcpy(soil,a);
    strcpy(kind,g);
    cout<<"Enter rain: ";
    cin>>rain;
    cout<<"Enter humidity:";
    cin>>humidity;

    cout<<"\n\nArea name : "<<name
         <<"\nSoil colour : "<<soil
         <<"\nSoil kind   : "<<kind
         <<"\nRain fall   : "<<rain
         <<"\nHumidity    : "<<humidity;

    if (rain<40 || humidity<65)
        cout<<"\n\nThe area is near Gurdaspur.";                            
    else if (rain>=40 && rain<45 || humidity>=65 && humidity<70)
        cout<<"\n\nThe area is near Amritsar.";                      
    else if(rain>=45 && rain<=50 || humidity>=70 && humidity<75)
        cout<<"\n\nThe area is near Tarn taran.";                          
    else if(rain>50 || humidity>=75)
        cout<<"\n\nThe area is near Jalandhar.";                     
}

class Thane: public india                      
{
   
    public:
         void get(char*,char*,char*);
         void show()
         {
            
             cout<<"Name          : Thane.";             
             cout<<"\nSoil colour : Orange.";
             cout<<"\nRain        : Near 70-80%";
             cout<<"\nHumidity    : Near 75-85%";
             cout<<"\nsoilkind    : Normal\n";
         }
         Thane(){
             show();
         }
};

void Thane ::get(char *n,char *a,char *g)            
{
    strcpy(name,n);
    strcpy(soil,a);
    strcpy(kind,g);
    cout<<"Enter rain: ";
    cin>>rain;
    cout<<"Enter humidity:";
    cin>>humidity;


    cout<<"\n\nArea name     : "<<name
        <<"\nSoil colour : "<<soil
        <<"\nSoil kind   : "<<kind
        <<"\nRain fall   : "<<rain
        <<"\nHumidity    : "<<humidity;

    if (rain<70 || humidity<75)
        cout<<"\n\nThe area is near Ahmadnagar.";                         
    else if (rain>=70 && rain<75 || humidity>=75 && humidity<80)
        cout<<"\n\nThe area is near Nashik.";                   
    else if(rain>=75 && rain<80 || humidity>=80 && humidity<85)
        cout<<"\n\nThe area is near Nagpur.";                      
    else if(rain>=80 || humidity>=85)
        cout<<"\n\nThe area is near Thane.";                        
}

class Cherrapunjee : public india                               
{
    public:
         void get(char*,char*,char*);
         void show()
         {
            
             cout<<"Name          : Cherrapunjee.";        
             cout<<"\nSoil colour : Green."; 
             cout<<"\nRain        : Near50-65%";
             cout<<"\nHumidity    : Near85-95%";
             cout<<"\nsoilkind    : Salty\n";
         }
         Cherrapunjee(){
             show();
         }
};

void Cherrapunjee ::get(char *n,char *a,char *g)           
{
    strcpy(name,n);
    strcpy(soil,a);
    strcpy(kind,g);
    cout<<"Enter rain: ";
    cin>>rain;
    cout<<"Enter humidity:";
    cin>>humidity;

    cout<<"\n\nArea name : "<<name
         <<"\nSoil colour : "<<soil
         <<"\nSoil kind   : "<<kind
         <<"\nRain fall   : "<<rain
         <<"\nHumidity    : "<<humidity;

    if (rain<50 || humidity<85)                              
        cout<<"\n\nThe area is near Shillong.";                          
    else if (rain>=50 && rain<55 || humidity>=85 && humidity<87)
        cout<<"\n\nThe area is near East khasi hills.";                       
    else if(rain>=55 && rain<60 || humidity>=87 && humidity<89)
        cout<<"\n\nThe area is near Cherrapunjee.";                   
    else if(rain>=60 && rain<65 || humidity>=89 && humidity<95)
        cout<<"\n\nThe area is near Garo hills.";                     
    else if(rain>60 || humidity>=95)
        cout<<"\n\nThe area is near Mawsynram.";                  
}


int main()
{
    
    int i,j,l;
    char a[20],n[20];
    char nor[]="normal";
    char sal[]="salty";

 
    while(1)
    {
    cout<<"**********CLIMATE REPORT**************\n"
        <<"###########    Made by Tushar-2K20/SE/146    ##############\n"
	     <<"\n1.See the climate report of some main city in India .\n"
         <<"2.Search an area.\n"
         <<"3.Exit.\n"
         <<"\t\nChoose a no.: ";
         cin>>i;

        if(i==1)
        {
    while(1)
        {
             cout<<"\t1.Delhi.\n"                    
             <<"\t2.Ahmedabad.\n"                    
             <<"\t3.Kannur.\n"                      
             <<"\t4.Amritsar.\n"                 
             <<"\t5.Thane.\n"                        
             <<"\t6.Cherrapunjee.\n"                  
             <<"\t7.Previous menu.\n\n"                  
             <<"\t\tChoose a number: ";
         cin>>j;
         if(j==1)
        {
                   Delhi d;
                   cout<<"press any key: \n";
                   getch();
        }
        else if(j==2)
        {
                    Ahmedabad r;
                   cout<<"press any key: \n";
                    getch();
        }
        else if(j==3)
        {
                    Kannur k;
                   cout<<"press any key: \n";
                    getch();
        }
        else if(j==4)
        {
                    Amritsar b;
                   cout<<"press any key: \n";
                    getch();
        }
         else if(j==5)
        {
                    Thane s;
                   cout<<"press any key: \n";
                    getch();
        }
         else if(j==6)
        {
                    Cherrapunjee c;
                   cout<<"press any key: \n";
                    getch();
        }
        if(j==7)
                    break;
        
        }                                                                               //End of 1st while.
        }                                                                              //End of 1st if.

        else if(i==2)
        {  
            cout<<"\n*******Area Should belong to that cities******\n";
            Delhi d;
            cout<<"****************************************\n";
           Ahmedabad r;
            cout<<"****************************************\n";
           Kannur k;
            cout<<"****************************************\n";
           Amritsar b;
            cout<<"****************************************\n";
           Thane s;
            cout<<"****************************************\n";
           Cherrapunjee c;
            cout<<"****************************************\n";
         

     cout<<"Enter name of the area: ";
     cin>>n;
     cout<<"Enter soil colour: ";
     cin>>a;
     if(stricmp(a,"red")==0)
         d.get(n,a,nor);  

     else if(stricmp(a,"gray")==0)
         r.get(n,a,nor);

     else if(stricmp(a,"brown")==0)
         k.get(n,a,sal);

     else if(stricmp(a,"black")==0)
         b.get(n,a,sal);

     else if(stricmp(a,"orange")==0)
         s.get(n,a,nor);

     else if(stricmp(a,"green")==0)
         c.get(n,a,sal);

     else
         cout<<"This area doesn't belong to India'.";

     getch();
        }

        else if (i==3)
    break;
       
    }

    return 0;
}