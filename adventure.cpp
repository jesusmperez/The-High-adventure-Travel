
















































































//***********************************************
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
    
    if(option = 'W')
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
double climbing(int people, int days, int instructees, int rentees);
double scuba(int people, int diving);
double skyDive(int people, int days, int lodging, char option);
double spelunk(int people, int days, int rentees); 
double getDiscount(double total, int people);
