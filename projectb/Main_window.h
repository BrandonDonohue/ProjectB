#ifndef MAIN_WINDOW_GUARD
#define MAIN_WINDOW_GUARD 1

#include "GUI.h" 
#include "Graph.h"
#include "Game_piece.h"

using namespace Graph_lib;

struct Main_window : Graph_lib::Window 
{
    Main_window(Point xy, int w, int h, const string& title);
	int main_number;
	bool wait_for_button(); 


	
private:

	bool button_pushed;
	
	
	Image title_football;
	Image johnny;
	Image instru;
	Image yourname;
	Image numbers;
	Button play_button;
	Button instructions_button;
	Button highscore_button;
	Button mainmenu_button;
	Button offense_button;
	Button defense_button;
	Button startgame_button;
	In_box name;
	Menu team_menu;
	Out_box high1;
	Out_box high2;
	Out_box high3;
	Out_box high4;
	Out_box high5;

	void play();
	void instructions();
	void highscore();
	void mainmenu();
	void offense();
	void defense();
	void startgame();

	
	static void cb_play(Address, Address window);
	static void cb_instructions(Address, Address window);
	static void cb_highscore(Address, Address window);
	static void cb_mainmenu(Address, Address window);
	static void cb_offense(Address, Address window);
	static void cb_defense(Address, Address window);
	static void cb_startgame(Address, Address window);

	
	static void cb_alabama(Address, Address window);
	static void cb_arkansas(Address, Address window);
	static void cb_auburn(Address, Address window);
	static void cb_florida(Address, Address window);
	static void cb_georgia(Address, Address window);
	static void cb_kentucky(Address, Address window);
	static void cb_lsu(Address, Address window);
	static void cb_missstate(Address, Address window);
	static void cb_mizzou(Address, Address window);
	static void cb_olemiss(Address, Address window);
	static void cb_southcarolina(Address, Address window);
	static void cb_tennessee(Address, Address window);
	static void cb_vanderbilt(Address, Address window);

	void alabama_pressed();
	void arkansas_pressed();
	void auburn_pressed();
	void florida_pressed();
	void georgia_pressed();
	void kentucky_pressed();
	void lsu_pressed();
	void missstate_pressed();
	void mizzou_pressed();
	void olemiss_pressed();
	void southcarolina_pressed();
	void tennessee_pressed();
	void vanderbilt_pressed();
	


};

#endif 
