#include <iostream>
using namespace std ;

struct part
{
    string partname ;
    int partnum ;
    double price ;
    int qty ;
};
part inventory [1];

void inputdata (part arr[],int size )
{
for (int i=0 ;i<size ; i++ )
    {cin>>
        inventory[i].partname>>
        inventory[i].partnum>>
        inventory[i].price>>
        inventory[i].qty;
        }
};

void outputdata (part arr[],int size)
    { 
for (int j=0 ;j<size ; j++ )
    {cout<<
            inventory[j].partname<<endl<<
            inventory[j].partnum<<endl<<
            inventory[j].price<<endl<<
            inventory[j].qty;
        }
    };
    int main ()
    { 
        inputdata(inventory,1);
        outputdata (inventory,1);
        return 0 ;
    }



