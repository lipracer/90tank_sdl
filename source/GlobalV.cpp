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
	memset(m_game_map, 0, sizeof(m_game_map));
}

LLGameMgr::~LLGameMgr() 
{
}