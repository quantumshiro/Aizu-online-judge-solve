#include <iostream>
#include <string>

int main(){
    while(true){
        std::string g;
        std::cin >> g;
        if(g == "#")
            break;

        int year, month, date;
        std::cin >> year >> month >> date;
        if(year < 31 or (year == 31 and month < 5)){
            std::cout << g << " " << year << " " << month << " " << date << std::endl;
        }
        else{
            std::cout << "? " << year - 30 << " " << month << " " << date << std::endl;
        }
    }
    return 0;
}