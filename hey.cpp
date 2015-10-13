

















































































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
                  
                  climbing(people, days, instructees, rentees);
                  break;
                  
        
        case'b':  people = getUserInputP();
                  days = getUserInputD();
                  cout << "please enter how many people would like scuba lessons" << endl;
                  cin >> diving;
                  
                  scuba(people, diving);
                 break;
        
        case'c':  people = getUserInputP();
                  days = getUserInputD();
                  cout << "please enter how many people will want lodging" << endl;
                  cin >> lodging;
                  cout << "What lodge do you want?" << endl;
                  cin >> option;
                  
                  skyDive(people, days, lodging, option);
                  break;
        
        case'd':  people = getUserInputP();
                  days = getUserInputD();
                  cout << "please enter how many people would like to rent equipment" << endl;
                  cin >> rentees;
              
                  spelunk(people, days, rentees);
                  break;
        default: cout <<" Sorry did not understand you request" << endl;
                  break;

        
        
    }
    return 0;
    
    
}

