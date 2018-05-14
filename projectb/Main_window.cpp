#include "Main_window.h"
#include "highscore.h"


using namespace Graph_lib;


//-----------------------------------------------------Main_window.cpp--------------------------------------------//



Main_window::Main_window(Point xy, int w, int h, const string& title)
    : Graph_lib::Window(xy,w,h,title),
	//images
	title_football(Point(25,10),"images/title_football.jpg"),
	johnny(Point(355,20),"images/johnny.jpg"),
	instru(Point(0,0),"images/instructions.jpg"),
	yourname(Point(10,150),"images/yourname.jpg"),
	numbers(Point(67,130),"images/numbers.jpg"),
	//buttons
	play_button(Point(100,120),150,50,"Play",cb_play),
	instructions_button(Point(100,200),150,50,"Instructions",cb_instructions),
	highscore_button(Point(100,280),150,50,"High Score",cb_highscore),
	mainmenu_button(Point(435,335),150,50,"Main Menu",cb_mainmenu),
	offense_button(Point(100,140),150,50,"Offense",cb_offense),
	defense_button(Point(100,210),150,50,"Defense",cb_defense),
	startgame_button(Point(100,210),150,50,"Start",cb_startgame),
	//in box
	name(Point(100,150),150,25,"Your Name:"),
	//menu
	team_menu(Point(100,120),150,20,Menu::vertical,"Team"),
	//out box high score
	high1(Point(100,130),150,25,"#1:"),
	high2(Point(100,175),150,25,"#2:"),
	high3(Point(100,220),150,25,"#3:"),
	high4(Point(100,265),150,25,"#4:"),
	high5(Point(100,310),150,25,"#5:")
	
	{
	//first window w/ images and buttons
	attach(title_football);
	attach(johnny);
	attach(play_button);
	attach(instructions_button);
	attach(highscore_button);
	attach(mainmenu_button);
	
	//attach menu items to menu
	team_menu.attach(new Button(Point(0,0),0,0,"Alabama",cb_alabama));
	team_menu.attach(new Button(Point(0,0),0,0,"Arkansas",cb_arkansas));
	team_menu.attach(new Button(Point(0,0),0,0,"Auburn",cb_auburn));
	team_menu.attach(new Button(Point(0,0),0,0,"Florida",cb_florida));
	team_menu.attach(new Button(Point(0,0),0,0,"Georgia",cb_georgia));
	team_menu.attach(new Button(Point(0,0),0,0,"Kentucky",cb_kentucky));
	team_menu.attach(new Button(Point(0,0),0,0,"LSU",cb_lsu));
	team_menu.attach(new Button(Point(0,0),0,0,"Miss State",cb_missstate));
	team_menu.attach(new Button(Point(0,0),0,0,"Mizzou",cb_mizzou));
	team_menu.attach(new Button(Point(0,0),0,0,"Ole Miss",cb_olemiss));
	team_menu.attach(new Button(Point(0,0),0,0,"South Carolina",cb_southcarolina));
	team_menu.attach(new Button(Point(0,0),0,0,"Tennessee",cb_tennessee));
	team_menu.attach(new Button(Point(0,0),0,0,"Vanderbilt",cb_vanderbilt));
	}
	


	int main_number=0;
	
	
//---------------------------------------------------------------------------------------------------Wait for button function
	bool Main_window::wait_for_button()
		{
			show();
			button_pushed = false;
		#if 1
			while (!button_pushed) Fl::wait();
			Fl::redraw();
		#else
			Fl::run();
		#endif
			return button_pushed;
		}
//---------------------------------------------------------------------------------------------------Wait for button function
	
	
	
	
	
	
	
	
	
	

//---------------------------------------------------------------------------------------------------Callback references
//Callback references to buttons.
	
//---Play Button
	void Main_window::cb_play(Address, Address pw) 
	{reference_to<Main_window>(pw).play();}
	
//---Instructions Button
	void Main_window::cb_instructions(Address, Address pw) 
	{reference_to<Main_window>(pw).instructions();}
	
//---High score Button
	void Main_window::cb_highscore(Address, Address pw) 
	{reference_to<Main_window>(pw).highscore();}

//---Main Menu Button
	void Main_window::cb_mainmenu(Address, Address pw) 
	{reference_to<Main_window>(pw).mainmenu();}
	
//---Offense Button
	void Main_window::cb_offense(Address, Address pw) 
	{reference_to<Main_window>(pw).offense();}
	
//---Defense Button
	void Main_window::cb_defense(Address, Address pw)	
	{reference_to<Main_window>(pw).defense();}
	
//---Start game Button
	void Main_window::cb_startgame(Address, Address pw) 
	{reference_to<Main_window>(pw).startgame();}


//Callback references to menu items.

//--Alabama Item
	void Main_window::cb_alabama(Address, Address pw)	
	{reference_to<Main_window>(pw).alabama_pressed();}
	
//--Arkansas Item
	void Main_window::cb_arkansas(Address, Address pw) 
	{reference_to<Main_window>(pw).arkansas_pressed();}

//--Auburn	
	void Main_window::cb_auburn(Address, Address pw) 
	{reference_to<Main_window>(pw).auburn_pressed();}

//--Florida Item
	void Main_window::cb_florida(Address, Address pw) 
	{reference_to<Main_window>(pw).florida_pressed();}

//--Georgia Item
	void Main_window::cb_georgia(Address, Address pw) 
	{reference_to<Main_window>(pw).georgia_pressed();}

//--Kentucky Item
	void Main_window::cb_kentucky(Address, Address pw) 
	{reference_to<Main_window>(pw).kentucky_pressed();}
	
//---LSU Item
	void Main_window::cb_lsu(Address, Address pw) 
	{reference_to<Main_window>(pw).lsu_pressed();}
	
//---Miss State Item
	void Main_window::cb_missstate(Address, Address pw) 
	{reference_to<Main_window>(pw).missstate_pressed();}

//--Mizzou Item
	void Main_window::cb_mizzou(Address, Address pw) 
	{reference_to<Main_window>(pw).mizzou_pressed();}
	
//---Ole Miss Item
	void Main_window::cb_olemiss(Address, Address pw) 
	{reference_to<Main_window>(pw).olemiss_pressed();}

//--South Carolina Item
	void Main_window::cb_southcarolina(Address, Address pw) 
	{reference_to<Main_window>(pw).southcarolina_pressed();}
	
//--Tennessee Item
	void Main_window::cb_tennessee(Address, Address pw) 
	{reference_to<Main_window>(pw).tennessee_pressed();}
	
//---Vanderbilt Item
	void Main_window::cb_vanderbilt(Address, Address pw) 
	{reference_to<Main_window>(pw).vanderbilt_pressed();}
//---------------------------------------------------------------------------------------------------Callback references

	
	

	


		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

//---------------------------------------------------------------------------------------------------Button Actions

//--- Play Button Action
	void Main_window::play()
	{	main_number=1;
		detach(play_button); detach(instructions_button); detach(highscore_button);
		attach(offense_button); attach(defense_button);
		cout<<main_number<<'\n';
	}
	

//--- Instructions Button Action
	void Main_window::instructions()
	{	main_number=2;
		detach(play_button); detach(instructions_button); detach(highscore_button);
		attach(high1);
		attach(instru);
		cout<<main_number<<'\n';
	}
	
//--- High Score Button Action
	void Main_window::highscore()
	{	main_number=3;
		detach(play_button); detach(instructions_button); detach(highscore_button);
		attach(high1); attach(high2); attach(high3); attach(high4); attach(high5);
		attach(numbers);
		

		string file="highscorelist.txt";
		ifstream ist(file.c_str());
		
		if (!ist) error("can't open input file ", file);
		vector<Highscore>list;

		string list_name;
		int list_score;

		while (ist>>list_name>>list_score)
			{
			list.push_back(Highscore(list_name,list_score));
			}
			ostringstream s1;
			s1<<list[0].name<<'-'<<list[0].score;
			ostringstream s2;
			s2<<list[1].name<<'-'<<list[1].score;
			ostringstream s3;
			s3<<list[2].name<<'-'<<list[2].score;
			ostringstream s4;
			s4<<list[3].name<<'-'<<list[3].score;
			ostringstream s5;
			s5<<list[4].name<<'-'<<list[4].score;
		
			high1.put(s1.str());
			high2.put(s2.str());
			high3.put(s3.str());
			high4.put(s4.str());
			high5.put(s5.str());
		
		cout<<main_number<<'\n';
	}
	//--- Offense Button Action
		void Main_window::offense()
	{	main_number=4;
		detach(offense_button); detach(defense_button);
		attach(team_menu);
		cout<<main_number<<'\n';
	}

//--- Defense Button Action
		void Main_window::defense()
	{	main_number=4;
		detach(offense_button); detach(defense_button);
		attach(team_menu);
		cout<<main_number<<'\n';
	}
	
//---Main Menu Button Action
		void Main_window::mainmenu()
	{	
//main page
		if(main_number==0) {cout<<main_number<<'\n';}
		
//play page
		else if(main_number==1)
		{	detach(offense_button); detach(defense_button);
			attach(play_button); attach(instructions_button); attach(highscore_button);
			main_number=0;cout<<main_number<<'\n';
		}

//instructions page
		else if(main_number==2)
		{	detach(instru); 
			detach(high1);
			attach(play_button); attach(instructions_button); attach(highscore_button);
			main_number=0; cout<<main_number<<'\n';
		}
		
//high score page
		else if(main_number==3)
		{	detach(high1); detach(high2); detach(high3); detach(high4); detach(high5);
			detach(numbers);
			attach(play_button); attach(instructions_button); attach(highscore_button);
			main_number=0; cout<<main_number<<'\n';
		}
		
//team page
		else if(main_number==4)		//if on team page
		{	detach(team_menu);
			attach(play_button); attach(instructions_button); attach(highscore_button);
			main_number=0; cout<<main_number<<'\n';
		}
		
//start game page
		else if(main_number==5)		
		{	detach(startgame_button); detach(name); detach(yourname);
			attach(play_button);	attach(instructions_button); attach(highscore_button);
			main_number=0; cout<<main_number<<'\n';
		}
	}

//--- Start Game Button Action
	void Main_window::startgame()
	{
		string initials=name.get_string();
		cout<<initials<<'\n';
		button_pushed = true;
		hide();
	}
//---------------------------------------------------------------------------------------------------Button Actions

	