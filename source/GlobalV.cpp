/*
GlobalV.h
*/
#include "GlobalV.h"

LLGameMgr LLGameMgr::instance = LLGameMgr();

LLGameMgr& LLGameMgr::GetInstance()
{
	return LLGameMgr::instance;
}

LLGameMgr::LLGameMgr()
{
}

LLGameMgr::~LLGameMgr() 
{
}