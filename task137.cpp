/*
Design a parking system for a parking lot. The parking lot has three kinds of parking spaces: big, medium, and small, with a fixed number of slots for each size.

Implement the ParkingSystem class:

    ParkingSystem(int big, int medium, int small) Initializes object of the ParkingSystem class. The number of slots for each parking space are given as part of the constructor.
    bool addCar(int carType) Checks whether there is a parking space of carType for the car that wants to get into the parking lot. carType can be of three kinds: big, medium, or small, which are represented by 1, 2, and 3 respectively. A car can only park in a parking space of its carType. If there is no space available, return false, else park the car in that size space and return true.
*/

class ParkingSystem {
public:
    int big = 0, medium = 0, small = 0;

    ParkingSystem(int a, int b, int c) {
        big = a;
        medium = b;
        small = c;
    }
    
    bool addCar(int carType) {
        int* parkingTypePtr;
        
        if (carType == 1) parkingTypePtr = &big;
        else if (carType == 2) parkingTypePtr = &medium;
        else parkingTypePtr = &small;

        int& parkingType = *parkingTypePtr;
        if (parkingType > 0 ) {
            parkingType--;
            return true;
        }

        return false;
    }
};
