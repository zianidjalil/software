#include <iostream>

using namespace std;

// add the tax code to calculate it with a function definiotions ;


int main()
{

    //total quantity
    int quantity;
    int choice;
    int quant_rooms= 0;
     int quant_pasta = 0;
    int quant_burg = 0;
    int quant_noodles= 0;
    int quant_chicken= 0;
    int quant_pizza = 0;
    // total sold
    int sold_rooms = 0;
    int sold_pasta = 0;
    int sold_burg = 0;
    int sold_noodles = 0;
    int sold_chicken = 0;
    int sold_pizza = 0;

    // total priuce
    int total_rooms = 0;
    int total_pasta = 0;
    int total_burg = 0;
    int total_noodles = 0;
    int total_chicken = 0;
    int total_pizza = 0;
   cout<<"\n\t Quantity of items we have";
   cout << "\n Rooms availible";
    cin >> quant_rooms;
    cout<< "\n quantity of pasta";
    cin >> quant_pasta;
    cout<< "\n quantity of noodles";
    cin >> quant_noodles;
    cout<< "\n quantity of burger";
    cin >> quant_burg;
    cout<< "\n quantity of chicken";
    cin >> quant_chicken;
    cout<< "\n quantity of pizza ";
    cin >> quant_pizza;



     m:
    cout<<"\n\t\t\t please select menue options ";
    cout<< "\n\n 1) rooms";
    cout<< "\n\n 2) psta";
    cout<< "\n\n 3) nooldes";
    cout<< "\n\n 4) burger";
    cout<< "\n\n 5) chicken";
    cout<< "\n\n 6) pizza";
    cout<< "\n\n\n 7) information regarding sales and collections";
    cout<< "\n\n 8) exit";
    cout<< "\n\n please enter your choice ";
    cin>>choice;





    switch(choice){
        case 1:
            cout<< "n\n\ Enter the number of rooms you want : ";
            cin >> quantity;
            if(quant_rooms-sold_rooms >=quantity){
                sold_rooms = sold_rooms + quantity;
                total_rooms = total_rooms+ quantity*120;
                cout << "n\n\t\t"<<quantity<< "rooms have been alloted to you";
            }
            else {
                cout << "\n\t Only "<< quant_rooms - sold_rooms << "Rooms remaining in hotel ";
                break;

            }

         case 2:
            cout<< "n\n\ Enter the quantity of pasta  : ";
            cin >> quantity;
            if(quant_pasta-sold_pasta >=quantity){
                sold_pasta = sold_pasta + quantity;
                total_pasta = total_pasta+ quantity*20;
                cout << "n\n\t\t"<<quantity<< "pasta is the order ";
            }
            else {
                cout << "\n\t Only "<< quant_pasta - sold_pasta << "pasta remaining in hotel ";
                break;

            }


             case 3:
            cout<< "n\n\ Enter the quantity of berguer  : ";
            cin >> quantity;
            if(quant_burg-sold_burg >=quantity){
                sold_burg = sold_burg + quantity;
                total_burg = total_burg+ quantity*15;
                cout << "n\n\t\t"<<quantity<< "burger is the order ";
            }
            else {
                cout << "\n\t Only "<< quant_burg  - sold_burg << "burgers  remaining in hotel ";
                break;

            }
            case 4:
            cout<< "n\n\ Enter the quantity of nooldes   : ";
            cin >> quantity;
            if(quant_noodles-sold_noodles >=quantity){
                sold_noodles = sold_noodles + quantity;
                total_noodles = total_noodles + quantity*12;
                cout << "n\n\t\t"<<quantity<< "noodles  is the order ";
            }
            else {
                cout << "\n\t Only "<< quant_noodles  - sold_noodles << "noodles   remaining in hotel ";
                break;

            }
            case 5:
            cout<< "n\n\ Enter the quantity of pizza  : ";
            cin >> quantity;
            if(quant_pizza-sold_pizza >=quantity){
                sold_pizza = sold_pizza + quantity;
                total_pizza = total_pizza+ quantity*20;
                cout << "n\n\t\t"<<quantity<< "pizzza is the order ";
            }
            else {
                cout << "\n\t Only "<< quant_pizza  - sold_pizza << "pizza  remaining in hotel ";
                break;

            }
            case 6:
            cout<< "n\n\ Enter the quantity of chikcen  : ";
            cin >> quantity;
            if(quant_chicken-sold_chicken >=quantity){
                sold_chicken = sold_chicken + quantity;
                total_chicken = total_chicken+ quantity*25;
                cout << "n\n\t\t"<<quantity<< "chicken is the order ";
            }
            else {
                cout << "\n\t Only "<< quant_chicken  - sold_chicken << "chicken  remaining in hotel ";
                break;

            }

            case 7:
            cout<< "n\n\ \t\t Details of sales and collection   : ";
            cin >> quantity;

                cout << "n\n\t\t number of rooms we have : "<<quant_rooms;
                cout << "n\n\t\t number of rooms we gave for rent  : "<<sold_rooms;
                cout<<"\n\n Remaing rooms "<< quant_rooms-sold_rooms;
                cout << "total rooms collection for the day   : "<< total_rooms;


                cout << "n\n\t\t number of noodles we have : "<<quant_noodles;
                cout << "n\n\t\t number of noodles we sold   : "<<sold_noodles;
                cout<<"\n\n Remaing noodles "<< quant_noodles-sold_noodles;
                cout << "total noodles collection for the day   : "<< total_noodles;

                 cout << "n\n\t\t number of chicken we have : "<<quant_chicken;
                cout << "n\n\t\t number of chicken  we sold: "<<sold_chicken;
                cout<<"\n\n Remaing chicken "<< quant_chicken-sold_chicken;
                cout << "total chiken collection for the day   : "<< total_chicken;

                 cout << "n\n\t\t number of pizza  we have : "<<quant_pizza;
                cout << "n\n\t\t number of pizza we sold   : "<<sold_pizza;
                cout<<"\n\n Remaing pizza "<< quant_pizza-sold_pizza;
                cout << "total pizza collection for the day   : "<< total_pizza;

                 cout << "n\n\t\t number of burgers we have : "<<quant_burg;
                cout << "n\n\t\t number of burgers we sold  : "<<sold_burg;
                cout<<"\n\n Remaing burgers "<< quant_burg-sold_burg;
                cout << "total buergers collection for the day   : "<< total_burg;

                 cout << "n\n\t\t number of pasta  we have : "<<quant_pasta;
                cout << "n\n\t\t number of sold pasta   : "<<sold_pasta;
                cout<<"\n\n Remaing pasta  "<< quant_pasta-sold_pasta;
                cout << "total pasta  collection for the day   : "<< total_pasta ;
                cout << "\\n\n total collection for the day "<< total_burg+total_chicken+total_noodles+total_pasta+total_pizza+total_rooms;
                break;


             case 8:
                exit(0);


                default:

                   cout<< "n\n\ Please select the nmbers mentioned above   : ";

            }




    }
















