/*
Global.h
*/
#include "GlobalF.h"
#include "GlobalV.h"
#include "LLApp.h"

int event_loop() 
{
	static LLApp app("xx", 100, 100);
	app.event_loop();
	return 0;
}