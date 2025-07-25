#include <iostream>

using namespace std;

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

    void getNumOfBlocks() {

    }

};

int main() {

}