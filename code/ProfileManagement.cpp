#include "ProfileManagement.hpp"

string createUserPath (string username){
    return DIRECTORY + username + EXTENSION;
}

int doesUserExist (string userpath){
    ifstream checkUser (userpath);
    //if username is not found in the directory
    if (!checkUser)
        return 0;
    else
        return 1;

}

int followUser (string userpath, string follower){
    ofstream user;
    //use this function after checking doesUserExist()
    //opens file in append mode
    user.open(userpath, ios::app);

    // if file is open, write new info
    if (user.is_open()){
        user << follower << endl;
        user.close();
        return 1;
    }
    else{
        cout << "Error opening file." << endl;
        return 0;
    }
}

int signIn (string userpath){
    ofstream user;

    //opens existing user file or creates a new user if unknown username is given.
    user.open(userpath, ios::app);

    if (user.is_open()){
        user.close();
        return 1;
    }
    else {
        cout << "Error connecting to server." << endl;
        return 0;
    }

}