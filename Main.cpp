#include<bits/stdc++.h> // STL Headerfile contains most functions
#include<vector>
#include<fstream> 
#include<string>
using namespace std;
static int count_orders;
class Restaurant // Restaurant class created
{
    vector<string> dish_names; //Vectors for bill generation
    vector<int> quantity; 
    vector<int> costs;
    int choice_menu,exit;
    string menu_items[7]={"Pizza","Burger","Sandwich","Rolls","Beverages","Desserts","Soups"}; //Array
    string name;
    int final_cost;
    char email_address[20];
    public:
    Restaurant()
    {
    cout<<"\t\t\t----------Flavourozo-----------\n\n";
    cout<<"\t\t\t    Welcome to our Restro"<<endl;
    cout<<"\t\t*******  Big City Variety, Small Town Price  *******"<<endl;
    cout<<"Hello, What would you like to order?\n\n";
    menu();
    }
    void menu()
    {
    count_orders=0;
    cout<<"\t\t\t\t--------Menu--------\n\n";
    for(int i=0; i<(sizeof(menu_items)/sizeof(menu_items[0]));i++)
    {
        cout<<i+1<<") "<<menu_items[i]<<endl;
    }
    cout<<"\nPlease Enter your Choice: ";
	cin>>choice_menu;
    choice_menu;
    select_menu();
    }
    void select_menu()
    {
        switch(choice_menu)
        {
            case 1:
                Pizza();
                break;
            case 2:
                Burger();
                break;
            case 3:
                sandwich();
                break;
            case 4:
                Rolls();
                break;
            case 5:
                Beverage();
                break;
            case 6:
                Desserts();
                break;
            case 7:
                Soups();
                break;
            default:
                cout<<"\nPlease select from the options available.";
                cout<<"\nPress 1 to try again.\nPress 2 to Exit";
                cin>>exit;
                if(exit==1)
                    Restaurant();
                else
                    return;
        }

    }
    void Soups()
    {
        int select_Soups,select_Soups_size,Soups_num;
        string Soups[]={"Tomato Soup","Veg Manchao","Hot-n-Sour Soup","Sweet Corn Veg Soup","TummYum Soup","Lemon Coriender Soup"};
        int Soups_cost[]={90,110,110,120,120,130};
        for(int i=0; i<(sizeof(Soups_cost)/sizeof(Soups_cost[0]));i++)
        {
            cout<<"\n"<<left<<i+1<<".  "<<setw(50)<<Soups[i]<<setw(70)<<Soups_cost[i];
        }   
        cout<<"\n\nSelect your Soup from Above : ";
        cin>>select_Soups;
        cout<<"\nSelect size for Soup : \n1. Small\n2. Medium\n3. Large \n";
        cout<<"\nPlease select from the options available. : ";
        cin>>select_Soups_size;
        cout<<"\nYour Soups is : "<<Soups[select_Soups-1]<<endl;
        cout<<"\nEnter the number of Bowl : ";
        cin>>Soups_num;
        cout<<"Final Cost After Selection of Size : "<<size_all(select_Soups_size,Soups_cost[select_Soups-1])*Soups_num;
        dish_names.push_back(Soups[select_Soups-1]);
        costs.push_back(size_all(select_Soups_size,Soups_cost[select_Soups-1])*Soups_num);
        quantity.push_back(Soups_num);
        ++count_orders;
        repeat();

    }
    void Desserts()
    {
        int select_Desserts,select_Desserts_size,Desserts_num;
        string Desserts[]={"Chocolate Ice-Cream","Butter-Scotch Ice-Cream","Vanilla  Ice-Cream","Pastry","Custard","Gulab Jamun with Ice-Cream"};
        int Desserts_cost[]={60,70,60,100,70,100};
        for(int i=0; i<(sizeof(Desserts_cost)/sizeof(Desserts_cost[0]));i++)
        {
            cout<<"\n"<<left<<i+1<<".  "<<setw(50)<<Desserts[i]<<setw(70)<<Desserts_cost[i];
        }   
        cout<<"\n\nSelect your Desserts from Above : ";
        cin>>select_Desserts;
        cout<<"\nYour Desserts is : "<<Desserts[select_Desserts-1]<<endl;
        cout<<"\nEnter the number of Desserts : ";
        cin>>Desserts_num;
        cout<<"Final Cost After Selection of Size : "<<Desserts_cost[select_Desserts-1]*Desserts_num;
        dish_names.push_back(Desserts[select_Desserts-1]);
        costs.push_back(Desserts_cost[select_Desserts-1]*Desserts_num);
        quantity.push_back(Desserts_num);
        ++count_orders;
        repeat();

    }
    void Beverage()
    {
        int select_Beverage,select_Beverage_size,Beverage_num;
        string Beverage[]={"Cold Drink 750ml","Cold Coffe With Ice-Cream","Mint Mojito","Pink Tango","Butter Scotch Shake","Juice"};
        int Beverage_cost[]={60,120,150,150,120,100};
        for(int i=0; i<(sizeof(Beverage_cost)/sizeof(Beverage_cost[0]));i++)
        {
            cout<<"\n"<<left<<i+1<<".  "<<setw(50)<<Beverage[i]<<setw(70)<<Beverage_cost[i];
        }   
        cout<<"\n\nSelect your Beverage from Above : ";
        cin>>select_Beverage;
        cout<<"\nYour Beverage is : "<<Beverage[select_Beverage-1]<<endl;
        cout<<"\nEnter the number of Beverages : ";
        cin>>Beverage_num;
        cout<<"Final Cost After Selection of Size : "<<Beverage_cost[select_Beverage-1]*Beverage_num;
        dish_names.push_back(Beverage[select_Beverage-1]);
        costs.push_back(Beverage_cost[select_Beverage-1]*Beverage_num);
        quantity.push_back(Beverage_num);
        ++count_orders;
        repeat();

    }
    void Rolls()
    {
        int select_Roll,select_Roll_size,Roll_num;
        string Roll[]={"Masala Roll","Double Cheese Roll","Peri Peri Roll","Flavourozo Special Roll","Double Cheese Marghrita Roll"};
        int Roll_cost[]={50,80,70,100,120};
        for(int i=0; i<(sizeof(Roll_cost)/sizeof(Roll_cost[0]));i++)
        {
            cout<<"\n"<<left<<i+1<<".  "<<setw(50)<<Roll[i]<<setw(70)<<Roll_cost[i];
        }   
        cout<<"\n\nSelect your Roll from Above : ";
        cin>>select_Roll;
        cout<<"\nYour Roll is : "<<Roll[select_Roll-1]<<endl;
        cout<<"\nEnter the number of Rolls : ";
        cin>>Roll_num;
        cout<<"Final Cost After Selection of Size : "<<Roll_cost[select_Roll-1]*Roll_num;
        dish_names.push_back(Roll[select_Roll-1]);
        costs.push_back(Roll_cost[select_Roll-1]*Roll_num);
        quantity.push_back(Roll_num);
        ++count_orders;
        repeat();

    }
    void sandwich()
    {
        int select_sandwich,select_sandwich_size,sandwich_num;
        string sandwich[]={"Masala Sandwich","Double Cheese Sandwich","Peri Peri Sandwich","Flavourozo Special Sandwich","Double Cheese Marghrita Sandwich"};
        int sandwich_cost[]={50,80,70,100,120};
        for(int i=0; i<(sizeof(sandwich_cost)/sizeof(sandwich_cost[0]));i++)
        {
            cout<<"\n"<<left<<i+1<<".  "<<setw(50)<<sandwich[i]<<setw(70)<<sandwich_cost[i];
        }   
        cout<<"\n\nSelect your Sandwich from Above : ";
        cin>>select_sandwich;
        cout<<"\nYour Sandwich is : "<<sandwich[select_sandwich-1]<<endl;
        cout<<"\nEnter the number of Sandwiches : ";
        cin>>sandwich_num;
        cout<<"Final Cost After Selection of Size : "<<sandwich_cost[select_sandwich-1]*sandwich_num;
        dish_names.push_back(sandwich[select_sandwich-1]);
        costs.push_back(sandwich_cost[select_sandwich-1]*sandwich_num);
        quantity.push_back(sandwich_num);
        ++count_orders;
        repeat();

    }
    void Burger()
    {
        int select_burger,burger_num;
        string burger[]={"Masala Mayo Burger","Cheese Burger","Double Cheese Burger","Flavourozo Special Burger","Test Burger"};
        int burger_cost[]={30,50,70,90,100};
        for(int i=0; i<(sizeof(burger_cost)/sizeof(burger_cost[0]));i++)
        {
            cout<<"\n"<<i+1<<" "<<burger[i]<<"\t"<<burger_cost[i];
        }   
        cout<<"\nSelect your Burger from Above : ";
        cin>>select_burger;
        cout<<"\nYour Burger is : "<<burger[select_burger-1]<<endl;
        cout<<"\nEnter the number of Burgers : ";
        cin>>burger_num;
        cout<<"Final Cost After Selection : "<<burger_cost[select_burger-1]*burger_num;
        dish_names.push_back(burger[select_burger-1]);
        costs.push_back(burger_cost[select_burger-1]*burger_num);
        quantity.push_back(burger_num);
        ++count_orders;
        repeat();

    }
    void Pizza()
    {
        int select_pizza,select_pizza_size,pizza_num;
        string Pizza[]={"Marghreeta Pizza","Double Cheese Pizza","Peri Peri Pizza","Flavourozo Special Pizza","Double Cheese Marghrita 12inch"};
        int Pizza_cost[]={200,250,300,400,600};
        for(int i=0; i<(sizeof(Pizza_cost)/sizeof(Pizza_cost[0]));i++)
        {
            cout<<"\n"<<left<<i+1<<".  "<<setw(50)<<Pizza[i]<<setw(70)<<Pizza_cost[i];
        }   
        cout<<"\nSelect your Pizza from Above : ";
        cin>>select_pizza;
        cout<<"\nSelect size for Pizza : \n1. Small\n2. Medium\n3. Large \n";
        cout<<"\nPlease select from the options available. : ";
        cin>>select_pizza_size;
        cout<<"\nYour Pizza is : "<<Pizza[select_pizza-1]<<endl;
        cout<<"\nEnter the number of Pizzas : ";
        cin>>pizza_num;
        cout<<"Final Cost After Selection of Size : "<<size_all(select_pizza_size,Pizza_cost[select_pizza-1])*pizza_num;
        dish_names.push_back(Pizza[select_pizza-1]);
        costs.push_back(size_all(select_pizza_size,Pizza_cost[select_pizza-1])*pizza_num);
        quantity.push_back(pizza_num);
        ++count_orders;
        repeat();

    }
    int size_all(int size,int cost)
    {
        if(size==1)
        {
        cost-=50;
        return cost;
        }
        else if(size==2)
        {
        return cost;
        }
        else if(size==3)
        {
        cost+=100;
        return cost;
        }
        else
        {
            return 0;
        }
    }
    string filename(string email_address)
    {
        int random_;
        string fname;
        srand(time(0));
        random_=rand();
        fname=email_address;
        stringstream ss;
        ss << random_;
        string str = ss.str();
        fname.append(str);
        return fname;
    }
    void Bill()
    {
        cout<<"\n\nPlease Enter Your Name : ";
        cin>>name;
        cout<<"\n\nPlease Enter Your Email Address : ";
        cin>>email_address;
        time_t tmNow;
        tmNow = time(NULL);
        struct tm t = *localtime(&tmNow);
        if(t.tm_hour>12)
        {
            t.tm_hour-=12;
            t.tm_hour=abs(t.tm_hour);
        }
        final_cost=0;

        cout<<"\n*************************************************************************************";
        cout<<"\n------------------------------------------Bill---------------------------------------";
        cout<<"\n---------------------------------------Flavourozo------------------------------------\n\n";
        cout<<"Coustomer Name : "<<name<<endl;
        cout<<"Email Address : "<<email_address<<endl;
        cout<<"Date and Time : "<<t.tm_hour<<":"<<t.tm_min<<"  "<<t.tm_mday<<"-"<<t.tm_mon+1<<"-"<<t.tm_year+1900;

        cout<<left<<"\n"<<setw(50)<<"Items"<<setw(30)<<"Quantity"<<setw(20)<<"Price"<<endl;
        for(int i=0;i<dish_names.size(); i++)
        {
            cout<<"\n"<<left<<setw(50)<<dish_names[i]<<setw(30)<<quantity[i]<<setw(20)<<costs[i];
            final_cost+=costs[i];
        }
        final_cost=discount();
        cout<<"\n"<<setw(50)<<"Final Bill after Discount : "<<setw(50)<<final_cost<<endl<<endl;
    }
    int discount()
    {
        if(final_cost>=500)
        {
            cout<<"\n\n"<<setw(50)<<"Final Bill: "<<setw(50)<<final_cost<<endl<<endl;
            cout<<"\n"<<setw(50)<<"Discount : "<<setw(50)<<"15% "<<endl<<endl;
            
            final_cost-=(final_cost/100)*15;

            return final_cost;
        }
        else if(final_cost>=1000)
        {
            cout<<"\n\n"<<setw(50)<<"Final Bill: "<<setw(50)<<final_cost<<endl<<endl;
            cout<<"\n"<<setw(50)<<"Discount : "<<setw(50)<<"20% "<<endl<<endl;
            final_cost-=(final_cost/100)*20;
            return final_cost;
        }
        else if(final_cost>=1500)
        {
            cout<<"\n\n"<<setw(50)<<"Final Bill: "<<setw(50)<<final_cost<<endl<<endl;
            cout<<"\n"<<setw(50)<<"Discount : "<<setw(50)<<"25% "<<endl<<endl;
            final_cost-=(final_cost/100)*25;
            return final_cost;
        }
        else if(final_cost>2000)
        {
            cout<<"\n\n"<<setw(50)<<"Final Bill: "<<setw(50)<<final_cost<<endl<<endl;
            cout<<"\n"<<setw(50)<<"Discount : "<<setw(50)<<"30% "<<endl<<endl;
            final_cost-=(final_cost/100)*30;
            return final_cost;
        }
        return final_cost;
    }
    void billmake()
    {
        time_t tmNow;
        tmNow = time(NULL);
        struct tm t = *localtime(&tmNow);
        if(t.tm_hour>12)
        {
            t.tm_hour-=12;
            t.tm_hour=abs(t.tm_hour);
        }
        ofstream ofile(filename(email_address),ios::app);
        ofile<<"\n*************************************************************************************";
        ofile<<"\n------------------------------------------Bill---------------------------------------";
        ofile<<"\n---------------------------------------Flavourozo------------------------------------\n\n";
        ofile<<"Coustomer Name : "<<name<<endl;
        ofile<<"Email Address : "<<email_address<<endl;
        ofile<<"Date and Time : "<<t.tm_hour<<":"<<t.tm_min<<"  "<<t.tm_mday<<"-"<<t.tm_mon+1<<"-"<<t.tm_year+1900;
        ofile<<left<<"\n"<<setw(50)<<"Items"<<setw(30)<<"Quantity"<<setw(20)<<"Price"<<endl;
        for(int i=0;i<dish_names.size(); i++)
        {
            ofile<<"\n"<<left<<setw(50)<<dish_names[i]<<setw(30)<<quantity[i]<<setw(20)<<costs[i];
        }
        ofile<<"\n\n"<<setw(50)<<"Final Bill: "<<setw(50)<<final_cost<<endl<<endl;

    }
    void repeat()
    {
        char ch;
        cout<<"\nWould you like to order anything else? Y / N : ";
        cin>>ch;
			if(ch=='Y' || ch=='y')
            {
                menu();
            }
            else if(ch=='N' || ch=='n')
            {
                return;
            }
    }
};
int main()
{
    char temp;
    Restaurant a1;
    a1.Bill();
    a1.billmake();
    cin>>temp;
    return 0;
}