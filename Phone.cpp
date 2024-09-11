#include <iostream>


using namespace std;

class Phone{
    //Access Modifier: Private
    private:

    //Member Field: Variables
    string brand;
    string model;
    int releaseYear;
    int storage;
    int OSVersion;
    int price;
    bool hasWarranty;
    bool is5G;

    //Access Modifier: Public
    public:

    //Member Field: Constructors
    
    ///////////////////////////////
    //TODO:
    
    //Default Constructor
    Phone();

    //Parameterized Constructor
    //Add your parameterized constructor here:
    
    Phone(string brand, string model, int releaseYear, int storage, int price, bool warranty, bool is5G);
    
    ///////////////////////////////
    //Member Field: Methods

    void updateOS(){ OSVersion++; }
    void updateWarrantyStatus(){ hasWarranty = !hasWarranty; }

    //Getters
    string getBrand(){ return brand; }
    string getModel(){ return model; }
    int getReleaseYear(){ return releaseYear; }
    int getStorage(){ return storage; }
    int getOSVersion(){ return OSVersion; }
    int getPrice(){ return price; }
    bool getHasWarranty(){ return hasWarranty; }
    bool getIs5G(){ return is5G; }

    //Setters
    void setPrice(int newPrice){ price = newPrice; }


    void printInfo(){
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Release Year: " << releaseYear << endl;
        cout << "Storage: " << storage << "GB" << endl;
        cout << "OS Version: " << OSVersion << endl;
        cout << "Price: $" << price << endl;
        cout << "Warranty: " << (hasWarranty ? "Yes" : "No") << endl;
        cout << "5G: " << (is5G ? "Yes" : "No") << endl;
    }
};

Phone::Phone(){
    brand = "Apple";
model = "iPhone 16 Pro";
releaseYear = 2024;
storage = 256;
OSVersion = 1;
price = 999;
hasWarranty = true;
is5G = true;
}

Phone::Phone(string brand, string model, int releaseYear, int storage, int price, bool warranty, bool is5G) {
    this->brand = brand;
    this->model = model;
    this->releaseYear = releaseYear;
    this->storage = storage;
    this->OSVersion = 1;
    this->price = price;
    this->hasWarranty = warranty;
    this->is5G = is5G;
}

string getYoungest(Phone p1, Phone p2){
    
    if(p1.getReleaseYear() < p2.getReleaseYear())
    return p1.getBrand() + " " + p1.getModel();
    else if(p1.getReleaseYear() > p2.getReleaseYear())
    return p2.getBrand() + " " + p2.getModel();
    else
    return p1.getBrand() + " " + p1.getModel();
}

int main(){
/*Phone p1 = Phone();
p1.printInfo();

Phone p2 = Phone("Android", "S24 Ultra", 2024, 512, 999, true, true);
p2.printInfo();*/

Phone p1("Samsung", "Galaxy S21", 2021, 128, 799, true, true);
Phone p2("Google", "Pixel 5", 2020, 128, 699, true, true);
cout << getYoungest(p1, p2) << endl;

Phone p3("OnePlus", "8T", 2020, 256, 749, true, true);
Phone p4("Apple", "iPhone 12", 2020, 128, 799, true, true);
cout << getYoungest(p3, p4) << endl;

Phone p9("Xiaomi", "Mi 10", 2020, 128, 799, true, true);
Phone p10("Samsung", "Galaxy S10", 2019, 128, 899, true, false);
cout << getYoungest(p9, p10) << endl;
}