/*
Global.h
*/
#include "GlobalF.h"
#include "GlobalV.h"
#include "SDL.h"

int event_loop() 
{
	LLGameMgr::GetInstance();
	return 0;
}