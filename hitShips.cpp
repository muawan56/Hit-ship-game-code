#include<iostream>

int main (){
    bool ships[4][4] = {
  { 0, 1, 1, 0 },
  { 0, 0, 0, 0 },
  { 0, 0, 1, 0 },
  { 0, 0, 1, 0 }
};

int hits=0, numberOfTurn=0;

    while(hits<4) {
        int row, column;
        std::cout<<"Enter row b/w 0 to 3: ";
        std::cin>>row;
        std::cout<<"Enter column b/w 0 to 3: ";
        std::cin>>column;

        if(ships[row][column]){
            hits++;
        std::cout<<"You hit a ship!"<<std::endl;
        std::cout <<"Remaining ships: "<< (4-hits)<<std::endl;
            ships[row][column]=0;


        } else {
            std::cout<<"You Miss!"<<std::endl;
        }
        numberOfTurn++;
    }
    std::cout<<"Number of turn(s): "<<numberOfTurn<<std::endl;
    std::cout<<"You win. Congrates!"<<std::endl;
    return 0;

}