#include <iostream>
using namespace std;
struct movie
{
    string name, director, producer;
    int year_released, copies_in_stock;
};
movie set_data();
void print_data(movie movie);
int main()
{
    movie movie1, movie2;
    movie1.name = "summer vication";
    movie1.director = "Tom Blair";
    movie1.producer = "Rajiv Merchant";
    movie1.year_released = 2005;
    movie1.copies_in_stock = 34;
    print_data(movie1);
    cout << endl;
    movie2 = set_data();
    print_data(movie2);
    return 0;
};
movie set_data()
{
    movie movie;
    cout << "plz,enter movie name:\t";
    cin >> movie.name;
    cout << endl;
    cout << "plz,enter movie director:\t";
    cin >> movie.director;
    cout << endl;
    cout << "plz,enter movie producer:\t";
    cin >> movie.producer;
    cout << endl;
    cout << "plz,enter year of release:\t";
    cin >> movie.year_released;
    cout << endl;
    cout << "plz,enter number of copies in the stock:\t";
    cin >> movie.copies_in_stock;
    cout << endl;
    return movie;
};
void print_data(movie movie)
{
    cout << "movie name :: " << movie.name << endl;
    cout << "movie director :: " << movie.director << endl;
    cout << "movie producer :: " << movie.producer << endl;
    cout << "released :: " << movie.year_released << endl;
    cout << "number of copies in stock :: " << movie.copies_in_stock << endl;
};