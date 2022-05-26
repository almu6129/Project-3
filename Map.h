#ifndef MAP_H
#define MAP_H

#include <fstream>
#include <iostream>
#include <ctype.h>

using namespace std; 

class Map
{
     private:
          static const int num_rows = 15;
          static const int num_cols = 30;


          int playerPosition[2];
          int studyPosition[2];
          int diningPosition[2];
          int gymPosition[2];
          int bedRoomPosition[2];
          int libraryPosition[2];
          int kitchenPosition[2];
          int roundFacePosition[2];
          int henryWireguardPosition[2];
          int lucyKeeperPosition[2];
          int mindyHarperPosition[2];
          int nickKaratosPosition[2];
          int mrBillingsPosition[2];
          int poolPosition[2];
          char mapData[num_rows][num_cols];

          bool best_buy_on_map;

     public :
          Map();

          void resetMap();

          // getters
          int getPlayerRowPosition();
          int getPlayerColPosition();

          // setters
          void setPlayerRowPosition(int);
          void setPlayerColPosition(int);

          bool spawnStudyRoom(int, int);
          bool spawnDiningRoom(int, int);
          bool spawnGymRoom(int, int);
          bool spawnBedRoom(int, int);
          bool spawnLibraryRoom(int, int);
          bool spawnLordRoundFace(int row, int col);
          bool spawnHenryWireguard(int row, int col);
          bool spawnLucyKeeper(int row, int col);
          bool spawnMindyHarper(int row, int col);
          bool spawnNickKaratos(int row, int col);
          bool spawnMrBillings(int row, int col);
          bool spawnKitchen(int, int);
          bool spawnPool(int row, int col);
  

          void displayMap();
          void displayMoves();  
          bool executeMove(char);

          bool isStudyLocation();
          bool isDiningLocation();
          bool isGymLocation();
          bool isBedLocation();
          bool isLibraryLocation();
          bool iskitchenLocation();
          bool isLordRoundFaceLocation();
          bool isHenryWireguardLocation();
          bool isLucyKeeperLocation();
          bool isMindyHarperLocation();
          bool isNickKaratosLocation();
          bool isMrBillingsLocation();
          bool isPoolLocation();


          bool isBestBuyOnMap();
};
 
#endif