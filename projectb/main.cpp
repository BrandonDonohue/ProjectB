#include <iostream>
#include "Graph.h"         // get access to our graphics library facilities
#include "GUI.h"
#include "Window.h"
#include "Main_window.h"
#include "Game_piece.h"
#include <FL/Fl_Button.H>
#include <FL/fl_draw.H>



using namespace Graph_lib;
using namespace std;



string player_initials; 
int wait =0;
Image qb(Point(0,0),"images/team/texas.jpg");






struct Lines_window : Graph_lib::Window {
    Lines_window(Point xy, int w, int h, const string& title);
  
	static void cb(Address, Address);
};

Lines_window::Lines_window(Point xy, int w, int h, const string& title)
    : Graph_lib::Window(xy,w,h,title){}
Lines_window win(Point(100,100),600,400,"Playing Johnny Football");



Game_piece d1(Point(50,0),50,50,"",Lines_window::cb);
Game_piece d2(Point(150,0),50,50,"",Lines_window::cb);
Game_piece d3(Point(250,0),50,50,"",Lines_window::cb);
Game_piece d4(Point(350,0),50,50,"",Lines_window::cb);
	

	
	
struct My_Button : public Button{
	int row, column;	//each My_Button knows its position
	My_Button(Point xy, int w, int h, const string& label, Callback cb,
			int r, int c)
				            : Button(xy,w,h,label,cb),
							row(r), column(c){}
	void attach(Graph_lib::Window& win)
	{
	    pw = new Fl_Button(loc.x, loc.y, width, height, label.c_str());
	    pw->callback(reinterpret_cast<Fl_Callback*>(do_it), this);
	    own = &win;
	}
	void set_fill_color(Color c){pw->color(Fl_Color(c.as_int()));}
};


void Lines_window::cb(Address, Address pb)  
{  
	cout << reference_to<My_Button>(pb).row << "  " << 
	reference_to<My_Button>(pb).column << '\n';
	
	int x_pos=reference_to<My_Button>(pb).row;
	int y_pos=reference_to<My_Button>(pb).column; 

	
	if(wait==0&&x_pos==7&&((x_pos+y_pos) % 2))
	{
		qb.move(y_pos*50,x_pos*50);
		win.attach(qb);
		win.redraw();
		wait=1;
	}

	if(wait==1&&((x_pos+y_pos) % 2))
	{
		qb.move(y_pos*50,x_pos*50);
		win.attach(qb);
		win.redraw();
		wait=2;
	}
	
	if(wait==2 && ((x_pos + y_pos) % 2))
	{	
		d1.move(0,50);
		d1.georgia.move(0,50);   //this works, but need more generic expression
		win.attach(d1);
		win.redraw();
		wait=3;
	}
	
	if(wait==3 && ((x_pos + y_pos) % 2))
	{
		qb.move(y_pos*50,x_pos*50);
		win.attach(qb);
		win.redraw();
		wait=1;
	}
}
	
	

	


//-------------------------------------------------------------------------------------Define Objects



	void Main_window::alabama_pressed(){Main_window::main_number=5; Main_window::detach(team_menu); Main_window::attach(name); Main_window::attach(startgame_button); Main_window::attach(title_football); Main_window::attach(yourname);
																win.attach(d1.alabama);win.attach(d2.alabama);win.attach(d3.alabama);win.attach(d4.alabama);
	}

	void Main_window::arkansas_pressed(){Main_window::main_number=5; Main_window::detach(team_menu); Main_window::attach(name);Main_window::attach(startgame_button); Main_window::attach(title_football); Main_window::attach(yourname);
																win.attach(d1.arkansas); win.attach(d2.arkansas); win.attach(d3.arkansas);win.attach(d4.arkansas);
	}
	
	void Main_window::auburn_pressed(){Main_window::main_number=5; Main_window::detach(team_menu); Main_window::attach(name); Main_window::attach(startgame_button); Main_window::attach(title_football); Main_window::attach(yourname);
															win.attach(d1.auburn); win.attach(d2.auburn); win.attach(d3.auburn); win.attach(d4.auburn);
	}
	
	void Main_window::florida_pressed(){ Main_window::main_number=5; Main_window::detach(team_menu); Main_window::attach(name); Main_window::attach(startgame_button); Main_window::attach(title_football); Main_window::attach(yourname);
															win.attach(d1.florida); win.attach(d2.florida); win.attach(d3.florida); win.attach(d4.florida);
	}
	
	void Main_window::georgia_pressed(){ Main_window::main_number=5; Main_window::detach(team_menu); Main_window::attach(name); Main_window::attach(startgame_button); Main_window::attach(title_football); Main_window::attach(yourname);
															win.attach(d1.georgia); win.attach(d2.georgia); win.attach(d3.georgia); win.attach(d4.georgia);
	}
	
	void Main_window::kentucky_pressed(){ Main_window::main_number=5; Main_window::detach(team_menu); Main_window::attach(name); Main_window::attach(startgame_button); Main_window::attach(title_football); Main_window::attach(yourname);
																win.attach(d1.kentucky); win.attach(d2.kentucky); win.attach(d3.kentucky); win.attach(d4.kentucky);
	}

	void Main_window::lsu_pressed(){ Main_window::main_number=5; Main_window::detach(team_menu); Main_window::attach(name); Main_window::attach(startgame_button);  Main_window::attach(title_football); Main_window::attach(yourname);
														win.attach(d1.lsu); win.attach(d2.lsu); win.attach(d3.lsu); win.attach(d4.lsu);
	}
	
	void Main_window::missstate_pressed(){ Main_window::main_number=5; Main_window::detach(team_menu); Main_window::attach(name); Main_window::attach(startgame_button);  Main_window::attach(title_football); Main_window::attach(yourname);
																win.attach(d1.missstate); win.attach(d2.missstate); win.attach(d3.missstate); win.attach(d4.missstate);
	}
	
	void Main_window::mizzou_pressed(){Main_window::main_number=5; Main_window::detach(team_menu); Main_window::attach(name); Main_window::attach(startgame_button);  Main_window::attach(title_football); Main_window::attach(yourname);
															win.attach(d1.mizzou); win.attach(d2.mizzou); win.attach(d3.mizzou); win.attach(d4.mizzou);
	}
	
	void Main_window::olemiss_pressed(){ Main_window::main_number=5; Main_window::detach(team_menu); Main_window::attach(name); Main_window::attach(startgame_button); Main_window::attach(title_football); Main_window::attach(yourname);
																win.attach(d1.olemiss); win.attach(d2.olemiss); win.attach(d3.olemiss); win.attach(d4.olemiss);
	}
	
	void Main_window::southcarolina_pressed(){ Main_window::main_number=5; Main_window::detach(team_menu); Main_window::attach(name); Main_window::attach(startgame_button);  Main_window::attach(title_football); Main_window::attach(yourname);
																		win.attach(d1.southcarolina); win.attach(d2.southcarolina); win.attach(d3.southcarolina); win.attach(d4.southcarolina);
	}
	
	void Main_window::tennessee_pressed(){ Main_window::main_number=5; Main_window::detach(team_menu); Main_window::attach(name); Main_window::attach(startgame_button);  Main_window::attach(title_football); Main_window::attach(yourname);
																	win.attach(d1.tennessee); win.attach(d2.tennessee); win.attach(d3.tennessee); win.attach(d4.tennessee);
	}
	
	void Main_window::vanderbilt_pressed(){ Main_window::main_number=5; Main_window::detach(team_menu); Main_window::attach(name); Main_window::attach(startgame_button);  Main_window::attach(title_football); Main_window::attach(yourname);
																	win.attach(d1.vanderbilt); win.attach(d2.vanderbilt); win.attach(d3.vanderbilt); win.attach(d4.vanderbilt);
	}

int main()
try {

	win.hide();
	Main_window win_main(Point(100,100),600,400,"Johnny Football");
	win_main.Fl_Widget::color(Fl_Color(64));
	win_main.wait_for_button();




//--- Play
	win.show();
	vector<vector<My_Button*> >board(8,vector<My_Button*>(8));
	for(int i = 0; i < 8; ++i){
		for(int j = 0; j < 8; ++j){
			board[i][j] = new My_Button(Point(50*j, 50*i),
						50, 50, "", Lines_window::cb,
						i, j);
			win.attach(*board[i][j]);
			if((i + j) % 2){
			    board[i][j]->set_fill_color(Color::dark_green);
			}
			else{
			    board[i][j]->set_fill_color(Color::green);
			}
		}
	}

	
	
	
	win.attach(d1);
	win.attach(d2);
	win.attach(d3);
	win.attach(d4);





	
	
	
	
	
	
	
	
	return gui_main();

	


}
catch(exception& e) {
    cerr << "exception: " << e.what() << '\n';
    return 1;
}
catch (...) {
    cerr << "Some exception\n";
    return 2;
}



