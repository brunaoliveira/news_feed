#include <iostream>
#include <fstream>
#include <string>
#define DIRECTORY "users/"
#define EXTENSION ".txt"
using namespace std;

string createUserPath (string username);
int doesUserExist (string userpath);
int followUser (string userpath, string follower);
int signIn (string userpath);