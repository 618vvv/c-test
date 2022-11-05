#pragma once

const int Len = 40;
struct golf
{
	char fullname[Len];
	int handicap;
};
//function sets golf structure to provided name, handicap
//using values passed as arguments to the function
void setgolf(golf& g, const char* name, int hc);

//function solicits name and handicap from user
//and sets the member of g to the values entered
//returns 1 if name is enteren, 0 if name is empty string
int setgolf(golf& g);

//function resets handicap to new value
void handicap(golf& g, int hc);

//function displays contents of golf structure
void showgolf(const golf& g);

