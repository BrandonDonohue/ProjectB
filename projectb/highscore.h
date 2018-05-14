#include "std_lib_facilities_3.h"
#include <iostream>
#include <string>


class Highscore {

public:
	int score;
	string name;
	
	Highscore(string n) 
		: name(n), score(0){}
	Highscore(string n, int x) 
		: name(n), score(x){}
	
	Highscore() :name("none"), score(0){}
	
};

void swap_name(string& s1, string& s2)
{
	string temp=s1;
	s1=s2;
	s2=temp;
}

void swap_score(int& n1, int& n2)
{
	int temp=n1;
	n1=n2;
	n2=temp;
}





void order(string n, int s)
{
string file="highscorelist.txt";
string your_name=n;
int your_score=s;

ifstream ist(file.c_str());
if (!ist) error("can't open input file ", file);


vector<Highscore>list;

string list_name;
int list_score;


while (ist>>list_name>>list_score)
	{
	list.push_back(Highscore(list_name,list_score));
	}

	

Highscore high1(list[0]);
Highscore high2(list[1]);
Highscore high3(list[2]);
Highscore high4(list[3]);
Highscore high5(list[4]);
Highscore current(your_name,your_score);


if(current.score>high5.score)
	{
	swap_name(current.name,high5.name);
	swap_score(current.score,high5.score);
	current.name=" ";
	current.score=0;
	}
	
if(high5.score>high4.score)
	{
	swap_name(high5.name,high4.name);
	swap_score(high5.score,high4.score);
	}
	
if(high4.score>high3.score)
	{
	swap_name(high4.name,high3.name);
	swap_score(high4.score,high3.score);
	}
	
if(high3.score>high2.score)
	{
	swap_name(high3.name,high2.name);
	swap_score(high3.score,high2.score);
	}

if(high2.score>high1.score)
	{
	swap_name(high2.name,high1.name);
	swap_score(high2.score,high1.score);
	}
	
if(current.score<high5.score)
{
	current.name=" ";
	current.score=0;
}


//opens the output file
ofstream ost(file.c_str());
if(!ost) error("can't open output file ",file);

ost<<high1.name<<'\n'<<high1.score<<'\n';
ost<<high2.name<<'\n'<<high2.score<<'\n';
ost<<high3.name<<'\n'<<high3.score<<'\n';
ost<<high4.name<<'\n'<<high4.score<<'\n';
ost<<high5.name<<'\n'<<high5.score<<'\n';
}
