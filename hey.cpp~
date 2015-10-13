//# The-High-adventure-Travel
//We will implement an agency program
#include<iostream>
#include<string>

//Jesus Perez
//Michael Fletes
//Sandra Flores

using namespace std;

char menu();
int getUserInputP();
int getUserInputD();
void message();

double climbing(int people, int days, int instructees, int rentees);
double scuba(int people, int diving);
double skyDive(int people, int days, int lodging, char option);
double spelunk(int people, int days, int rentees); 
double getDiscount(double total, int people);

int main()
{
    char selection;
    char option;
    double total;
    int people, days;
    int instructees, diving, lodging, rentees;// variables to decide how many people will be doing what
                                           // depending on what activity they will be doing
    
    message();// function that will display a message to the user, (user interface)
    selection = menu();// checks what the user wants for the packages
    
    switch(selection)
    {
        case'a':  people = getUserInputP();// gets the number of people
                  days = getUserInputD();// gets the number of days
                  cout << "please enter how many people would like instuctors for rock climbing" << endl;
                  cin >> instructees;
                  
                  cout << climbing(people, days, instructees, rentees)<< " Total package cost"<<endl;
                  break;
                  
        
        case'b':  people = getUserInputP();
                  days = getUserInputD();
                  cout << "please enter how many people would like scuba lessons" << endl;
                  cin >> diving;
                  
                  cout << scuba(people, diving)<< " Will be your total cost for this package" << endl;
                 break;
        
        case'c':  people = getUserInputP();
                  days = getUserInputD();
                  cout << "please enter how many people will want lodging" << endl;
                  cin >> lodging;
                  cout << "What lodge do you want?" << endl;
                  cout <<" Enter  'w' or 'W' for wilderness lodge, else you will be put in the Luxury Inn"<<endl;
                  cin >> option;
                  cout << skyDive(people, days, lodging, option)<< " Will be your total cost for this package" << endl;
                  break;
        
        case'd':  people = getUserInputP();
                  days = getUserInputD();
                  cout << "please enter how many people would like to rent equipment" << endl;
                  cin >> rentees;
              
                  cout << spelunk(people, days, rentees)<< " Will be your total cost for this package" << endl;
                  break;
        default: cout <<" Sorry did not understand you request" << endl;
                  break;

        
        
    }
    return 0;
    
    
}

//***********************************************
char menu()
{
    char userInput;
    cout <<" What would you like to do? "<< endl;
    cout <<" Enter 'a' for climbing 'b' for scuba 'c' for skydiving 'd' for spelunk" << endl;
    cin >> userInput;
    
    
    return userInput;
}
int getUserInputP()
{
    int people;
    cout <<" How many people will be attending this trip" << endl;
    cin >>  people;
    return people;
    
}
int getUserInputD()
{
    int days;
    cout <<" How many days will you be attending ?" << endl;
    cin >> days;
    
    return days;
}
void message()
{
    cout <<" Hello and welcome to the agency" << endl;
    cout <<" happy to see that you want our service" << endl;
    return;
}
double climbing(int people, int days, int instructees, int rentees)
{
    double total = 0;
    double discount;
    int baseCharge = 350;
    int instruction = 100;
    int rentals = 40;
    total = total + (baseCharge * people);
    total = total + (instructees * instruction);
    total = total + ((days * rentals) * rentees); 
    discount = getDiscount(total, people);
    
    return discount;
}

//***********************************************
double scuba(int people, int diving)
{
    double total = 0;
    double discount;
    int baseCharge = 1000;
    int scubaInstruction = 100;
    total = (people * baseCharge);
    total = total + (scubaInstruction * diving);
    discount = getDiscount(total, people);
    
    
    
    return discount;
}

//***********************************************
double skyDive(int people, int days, int lodging, char option)
{
    double total = 0;
    double discount;
    int baseCharge =   700.0;
    int wildLodge = 65.0;
    int luxInn = 120.0;
    
    
    total += (baseCharge * people);
    
    if((option == 'W') || (option =='w'))
    {
        total += (wildLodge * people) * days;
    }
    else
    {
        total += (luxInn * people) * days;
    }
    discount = getDiscount(total, people);
    
    return discount;
}

//***********************************************
double spelunk(int people, int days, int rentees)
{
    double total = 0;
    double discount;
    int baseCharge = 700;
    int rentals = 40;
    total = people * baseCharge;
    total = total +((rentees * rentals) * days);
    discount= getDiscount(total, people);
    
    return discount;
}
//*************************************************
double getDiscount(double total, int people)
{
    double discountPercent = 0.10;
    double result = 0;
    double discount = 0;
    if(people >= 5)
    {
        discount = (total * discountPercent);
        result = total - discount;
        return result;
    }
    else
    {
        result = total;
    }
    return result;
}
