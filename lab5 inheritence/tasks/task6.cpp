#include<iostream>
#include<string>
#include<vector>
using namespace std;

/*

Identified objects/entities:

Company ("PakExports International")

Attributes:
Name
Location
ExportedContinents (list of continents where the company exports clothing)
Function:
exportClothing()

TransportationMethod

Attributes:
Type (Land, Sea, or Air)
Destinations (list of destinations for each transportation method)
Services (list of services provided for each transportation method)
Function:
shipClothing()

FacilityRental

Attributes:
FacilityType
AvailabilityStatus
RentalDuration
Function:
reserveFacility()

FittingRoomRental (inherits from FacilityRental)

Additional Attributes:
RoomSize (e.g., small, medium, or large)
NumberOfCustomers (number of customers the fitting room can accommodate)
Additional Function:
provideFittingExperience()
*/


class Company {
public:
    string name;
    string location;
    vector<string> exportedContinents;

    void exportClothing() {
        cout << "Exporting clothing to specified continents." << endl;
    }
};

class TransportationMethod {
public:
    string type;
    vector<string> destinations;
    vector<string> services;

    void shipClothing() {
        cout << "Shipping clothing using " << type << " transport to specified destinations." << endl;
    }
};

class FacilityRental {
public:
    string facilityType;
    string availabilityStatus;
    int rentalDuration;

    FacilityRental(string type, string status, int duration){
        facilityType=type; 
        availabilityStatus=status; 
        rentalDuration=duration;

    }

    void reserveFacility() {
        cout << "Facility reserved for " << rentalDuration << " days." << endl;
    }
};

class FittingRoomRental : public FacilityRental {
public:
    string roomSize;
    int numberOfCustomers;

    FittingRoomRental(string type, string status, int duration, string size, int customers): FacilityRental(type, status, duration){
        roomSize=size; 
        numberOfCustomers=customers; 
    }

    void provideFittingExperience() {
        cout << "Enjoy your fitting experience in a " << roomSize << " fitting room." << endl;
    }
};

int main() {
    // Example usage
    Company pakExports;

    pakExports.name = "PakExports International";
    pakExports.location = "Pakistan";
    pakExports.exportedContinents = {"Africa", "Asia", "Europe"};

    pakExports.exportClothing();

    TransportationMethod landTransport;
    landTransport.type = "Land";
    landTransport.destinations = {"South East Asia", "Middle East", "Far East", "Africa"};
    landTransport.services = {"Land transport services"};

    landTransport.shipClothing();

    FittingRoomRental fittingRoom("z","z",0,"z",0);
    fittingRoom.facilityType = "Fitting Room";
    fittingRoom.availabilityStatus = "Available";
    fittingRoom.rentalDuration = 3;
    fittingRoom.roomSize = "Medium";
    fittingRoom.numberOfCustomers = 2;

    fittingRoom.reserveFacility();
    fittingRoom.provideFittingExperience();

    return 0;
}