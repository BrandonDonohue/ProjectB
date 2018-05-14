#ifndef GAME_PIECE_GUARD
#define GAME_PIECE_GUARD 1

#include "GUI.h" 
#include "Graph.h"
#include <FL/Fl_Button.H>
#include <FL/fl_draw.H>

using namespace Graph_lib;


struct Game_piece : public Button{
	int x;
	int y;
	
	Image alabama;
	Image arkansas;
	Image auburn;
	Image florida;
	Image georgia;
	Image kentucky;
	Image lsu;
	Image missstate;
	Image mizzou;
	Image olemiss;
	Image southcarolina;
	Image tennessee;
	Image texas;
	Image vanderbilt;

	Game_piece(Point xy, int w, int h, const string& label, Callback cb)
				            : Button(xy,w,h,label,cb),
							alabama(xy,"images/team/alabama.jpg"),
							arkansas(xy,"images/team/arkansas.jpg"),
							auburn(xy,"images/team/auburn.jpg"),
							florida(xy,"images/team/florida.jpg"),
							georgia(xy,"images/team/georgia.jpg"),
							kentucky(xy,"images/team/kentucky.jpg"),
							lsu(xy,"images/team/lsu.jpg"),
							missstate(xy,"images/team/missstate.jpg"),
							mizzou(xy,"images/team/mizzou.jpg"),
							olemiss(xy,"images/team/olemiss.jpg"),
							southcarolina(xy,"images/team/southcarolina.jpg"),
							tennessee(xy,"images/team/tennessee.jpg"),
							texas(xy,"images/team/texas.jpg"),
							vanderbilt(xy,"images/team/vanderbilt.jpg")
							{
							}
							
	
void attach(Graph_lib::Window& win)
	{
	    pw = new Fl_Button(loc.x, loc.y, width, height, label.c_str());
	    pw->callback(reinterpret_cast<Fl_Callback*>(do_it), this);
	    own = &win;
	}
	void set_fill_color(Color c){pw->color(Fl_Color(c.as_int()));}
};

#endif 
