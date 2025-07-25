#include <iostream>

using namespace std;

//TO DO: REFRACTOR THIS TO LE LIBRARY

class City {
private:
    string cityName;
    int numOfBlocks;
    float hectares;
    int population;
    int populationPerBlock;
    int density;

public:

    City() {

    }
    City(string cityName, int numOfBlocks, float hectares) : cityName(cityName), numOfBlocks(numOfBlocks), hectares(hectares) {
        cout << cityName << " has " << numOfBlocks << " blocks" << endl;
    }

    //Screw it, gonna do some setters and getters
    void getNumOfBlocks() {
        cout << "Give the number of blocks: ";
        cin >> numOfBlocks;
    }

};

int main() {

}