#include "Map.h"
#include "Room.h"

using namespace std; 

Map::Map()
{
    resetMap();
}

// resets player position, count values, and initializes values in position arrays to -1
void Map::resetMap() {
    playerPosition[0] = 0; 
    playerPosition[1] = 0;

    studyPosition[0] = -1;
    studyPosition[1] = -1;

    diningPosition[0] = -1;
    diningPosition[1] = -1;

    gymPosition[0] = -1;
    gymPosition[1] = -1;

    bedRoomPosition[0] = -1;
    bedRoomPosition[1] = -1;

    libraryPosition[0] = -1;
    libraryPosition[1] = -1;

    kitchenPosition[0] = -1;
    kitchenPosition[1] = -1;

    roundFacePosition[0] = -1;
    roundFacePosition[1] = -1;

    henryWireguardPosition[0] = -1;
    henryWireguardPosition[1] = -1;

    lucyKeeperPosition[0] = -1;
    lucyKeeperPosition[1] = -1;

    mindyHarperPosition[0] = -1;
    mindyHarperPosition[1] = -1;

    nickKaratosPosition[0] = -1;
    nickKaratosPosition[1] = -1;

    mrBillingsPosition[0] = -1;
    mrBillingsPosition[1] = -1;

    poolPosition[0] = -1;
    poolPosition[1] = -1;    


    best_buy_on_map = false;

    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < num_cols; j++) {
            mapData[i][j] = '-';
        }
    }
}

// return player's row position
int Map::getPlayerRowPosition() {
    return playerPosition[0];
}

// return player's column position
int Map::getPlayerColPosition() {
    return playerPosition[1];
}

// set player's row position to parameter row
void Map::setPlayerRowPosition(int row) {
    playerPosition[0] = row;
}

// set player's column position to parameter row
void Map::setPlayerColPosition(int col) {
    playerPosition[1] = col;
}


bool Map::spawnStudyRoom(int row, int col) {
    // out of map bounds
    if (!(row >= 0 && row < num_rows && col >= 0 && col < num_cols)) {
        return false;
    }

    // location must be blank to spawn
    if (mapData[row][col] != '-') {
        return false;
    }


    if (studyPosition[0] == -1 && studyPosition[1] == -1) {
        studyPosition[0] = row;
        studyPosition[1] = col;
        mapData[row][col] = 'S';
        best_buy_on_map = true;
        return true;
    }

    return false;
}



bool Map::spawnDiningRoom(int row, int col) {
    // out of map bounds
    if (!(row >= 0 && row < num_rows && col >= 0 && col < num_cols)) {
        return false;
    }

    // location must be blank to spawn
    if (mapData[row][col] != '-') {
        return false;
    }


    if (diningPosition[0] == -1 && diningPosition[1] == -1) {
        diningPosition[0] = row;
        diningPosition[1] = col;
        mapData[row][col] = 'D';
        best_buy_on_map = true;
        return true;
    }

    return false;
}



bool Map::spawnGymRoom(int row, int col) {
    // out of map bounds
    if (!(row >= 0 && row < num_rows && col >= 0 && col < num_cols)) {
        return false;
    }

    // location must be blank to spawn
    if (mapData[row][col] != '-') {
        return false;
    }


    if (gymPosition[0] == -1 && gymPosition[1] == -1) {
        gymPosition[0] = row;
        gymPosition[1] = col;
        mapData[row][col] = 'G';
        best_buy_on_map = true;
        return true;
    }

    return false;
}



bool Map::spawnBedRoom(int row, int col) {
    // out of map bounds
    if (!(row >= 0 && row < num_rows && col >= 0 && col < num_cols)) {
        return false;
    }

    // location must be blank to spawn
    if (mapData[row][col] != '-') {
        return false;
    }


    if (bedRoomPosition[0] == -1 && bedRoomPosition[1] == -1) {
        bedRoomPosition[0] = row;
        bedRoomPosition[1] = col;
        mapData[row][col] = 'B';
        best_buy_on_map = true;
        return true;
    }

    return false;
}



bool Map::spawnLibraryRoom(int row, int col) {
    // out of map bounds
    if (!(row >= 0 && row < num_rows && col >= 0 && col < num_cols)) {
        return false;
    }

    // location must be blank to spawn
    if (mapData[row][col] != '-') {
        return false;
    }


    if (libraryPosition[0] == -1 && libraryPosition[1] == -1) {
        libraryPosition[0] = row;
        libraryPosition[1] = col;
        mapData[row][col] = 'L';
        best_buy_on_map = true;
        return true;
    }

    return false;
}



bool Map::spawnKitchen(int row, int col) {
    // out of map bounds
    if (!(row >= 0 && row < num_rows && col >= 0 && col < num_cols)) {
        return false;
    }

    // location must be blank to spawn
    if (mapData[row][col] != '-') {
        return false;
    }


    if (kitchenPosition[0] == -1 && kitchenPosition[1] == -1) {
        kitchenPosition[0] = row;
        kitchenPosition[1] = col;
        mapData[row][col] = 'K';
        best_buy_on_map = true;
        return true;
    }

    return false;
}

// return true if x, y position has a best buy there
bool Map::isStudyLocation(){
    return studyPosition[0] == playerPosition[0] && studyPosition[1] == playerPosition[1];
}

bool Map::isDiningLocation(){
    return diningPosition[0] == playerPosition[0] && diningPosition[1] == playerPosition[1];
}
bool Map::isGymLocation(){
    return gymPosition[0] == playerPosition[0] && gymPosition[1] == playerPosition[1];
}
bool Map::isBedLocation(){
    return bedRoomPosition[0] == playerPosition[0] && bedRoomPosition[1] == playerPosition[1];
}
bool Map::isLibraryLocation(){
    return libraryPosition[0] == playerPosition[0] && libraryPosition[1] == playerPosition[1];
}
bool Map::iskitchenLocation(){
    return kitchenPosition[0] == playerPosition[0] && kitchenPosition[1] == playerPosition[1];
}
bool Map::isLordRoundFaceLocation(){
    return roundFacePosition[0] == playerPosition[0] && roundFacePosition[1] == playerPosition[1];
}
bool Map::isHenryWireguardLocation(){
    return henryWireguardPosition[0] == playerPosition[0] && henryWireguardPosition[1] == playerPosition[1];
}
bool Map::isLucyKeeperLocation(){
    return lucyKeeperPosition[0] == playerPosition[0] && lucyKeeperPosition[1] == playerPosition[1];
}
bool Map::isMindyHarperLocation(){
    return mindyHarperPosition[0] == playerPosition[0] && mindyHarperPosition[1] == playerPosition[1];
}
bool Map::isNickKaratosLocation(){
    return nickKaratosPosition[0] == playerPosition[0] && nickKaratosPosition[1] == playerPosition[1];
}
bool Map::isMrBillingsLocation(){
    return mrBillingsPosition[0] == playerPosition[0] && mrBillingsPosition[1] == playerPosition[1];
}
bool Map::isPoolLocation(){
    return poolPosition[0] == playerPosition[0] && poolPosition[1] == playerPosition[1];
}

bool Map::spawnLordRoundFace(int row, int col) {
    // out of map bounds
    if (!(row >= 0 && row < num_rows && col >= 0 && col < num_cols)) {
        return false;
    }

    // location must be blank to spawn
    if (mapData[row][col] != '-') {
        return false;
    }


    if (roundFacePosition[0] == -1 && roundFacePosition[1] == -1) {
        roundFacePosition[0] = row;
        roundFacePosition[1] = col;
        mapData[row][col] = '0';
        best_buy_on_map = true;
        return true;
    }

    return false;
}

bool Map::spawnHenryWireguard(int row, int col) {
    // out of map bounds
    if (!(row >= 0 && row < num_rows && col >= 0 && col < num_cols)) {
        return false;
    }

    // location must be blank to spawn
    if (mapData[row][col] != '-') {
        return false;
    }


    if (henryWireguardPosition[0] == -1 && henryWireguardPosition[1] == -1) {
        henryWireguardPosition[0] = row;
        henryWireguardPosition[1] = col;
        mapData[row][col] = '0';
        best_buy_on_map = true;
        return true;
    }

    return false;
}

bool Map::spawnLucyKeeper(int row, int col) {
    // out of map bounds
    if (!(row >= 0 && row < num_rows && col >= 0 && col < num_cols)) {
        return false;
    }

    // location must be blank to spawn
    if (mapData[row][col] != '-') {
        return false;
    }


    if (lucyKeeperPosition[0] == -1 && lucyKeeperPosition[1] == -1) {
        lucyKeeperPosition[0] = row;
        lucyKeeperPosition[1] = col;
        mapData[row][col] = '0';
        best_buy_on_map = true;
        return true;
    }

    return false;
}

bool Map::spawnMindyHarper(int row, int col) {
    // out of map bounds
    if (!(row >= 0 && row < num_rows && col >= 0 && col < num_cols)) {
        return false;
    }

    // location must be blank to spawn
    if (mapData[row][col] != '-') {
        return false;
    }


    if (mindyHarperPosition[0] == -1 && mindyHarperPosition[1] == -1) {
        mindyHarperPosition[0] = row;
        mindyHarperPosition[1] = col;
        mapData[row][col] = '0';
        best_buy_on_map = true;
        return true;
    }

    return false;
}

bool Map::spawnNickKaratos(int row, int col) {
    // out of map bounds
    if (!(row >= 0 && row < num_rows && col >= 0 && col < num_cols)) {
        return false;
    }

    // location must be blank to spawn
    if (mapData[row][col] != '-') {
        return false;
    }


    if (nickKaratosPosition[0] == -1 && nickKaratosPosition[1] == -1) {
        nickKaratosPosition[0] = row;
        nickKaratosPosition[1] = col;
        mapData[row][col] = '0';
        best_buy_on_map = true;
        return true;
    }

    return false;
}

bool Map::spawnMrBillings(int row, int col) {
    // out of map bounds
    if (!(row >= 0 && row < num_rows && col >= 0 && col < num_cols)) {
        return false;
    }

    // location must be blank to spawn
    if (mapData[row][col] != '-') {
        return false;
    }


    if (mrBillingsPosition[0] == -1 && mrBillingsPosition[1] == -1) {
        mrBillingsPosition[0] = row;
        mrBillingsPosition[1] = col;
        mapData[row][col] = '0';
        best_buy_on_map = true;
        return true;
    }

    return false;
}

bool Map::spawnPool(int row, int col) {
    // out of map bounds
    if (!(row >= 0 && row < num_rows && col >= 0 && col < num_cols)) {
        return false;
    }

    // location must be blank to spawn
    if (mapData[row][col] != '-') {
        return false;
    }


    if (poolPosition[0] == -1 && poolPosition[1] == -1) {
        poolPosition[0] = row;
        poolPosition[1] = col;
        mapData[row][col] = 'P';
        best_buy_on_map = true;
        return true;
    }

    return false;
}

/*
 * This function prints a menu of valid moves based on playerPosition
 * Parameters: none
 * Return: nothing (void)
 */
void Map::displayMoves(){
    if(!(playerPosition[0] == 0)){
        cout << "w (Up)" << endl;
    }
    if(!(playerPosition[0] == (num_rows - 1))){
        cout << "s (Down)" << endl; 
    }
    if(!(playerPosition[1] == 0)){
        cout << "a (Left)" << endl; 
    }
    if(!(playerPosition[1] == (num_cols - 1))){
        cout << "d (Right)" << endl; 
    }
}

/*
 * This function takes in user input
 * and updates playerPosition on the map.
 * Parameters: move (char) -- 'w' (up), 'a' (left), 's' (down), 'd' (right)
 * Return: (bool) if move is valid, then true, else false
 */
bool Map::executeMove(char move){
    // if user inputs w, move up if it is an allowed move
    if(!(playerPosition[0] == 0) && (tolower(move) == 'w')){
        playerPosition[0] -= 1;
        return true; 
    }
    // if user inputs s, move down if it is an allowed move
    else if(!(playerPosition[0] == (num_rows - 1))&& (tolower(move) == 's')){
        playerPosition[0] += 1;
        return true; 
    }
    // if user inputs a, move left if it is an allowed move
    else if(!(playerPosition[1] == 0)&& (tolower(move) == 'a')){
        playerPosition[1] -= 1;
        return true; 
    }
    // if user inputs d, move right if it is an allowed move
    else if(!(playerPosition[1] == (num_cols - 1))&& (tolower(move) == 'd')){
        playerPosition[1] += 1;
        return true; 
    }
    else{
        cout << "Invalid Move" << endl; 
        return false; 
    }
}

/*
 * This function prints a 2D map in the terminal.
 * Parameters: none
 * Return: nothing (void)
 */
void Map::displayMap() {
    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < num_cols; j++) {
            if (playerPosition[0] == i && playerPosition[1] == j) {
                cout << "x";
            } else if (mapData[i][j] == 'H') {  // don't show hacker on the map
                cout << "-";
            }
            else {
                cout << mapData[i][j];
            }
        }
        cout << endl;
    }
}

// returns true if there is already a Best Buy on the map
bool Map::isBestBuyOnMap() {
    return best_buy_on_map;
}
