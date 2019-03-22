/*
GlobalV.h
*/
#include "GlobalV.h"
#include <memory.h>

LLTimer::LLTimer(std::chrono::milliseconds):m_is_exit(false)
{
    m_th = thread([this](){
        while (m_is_exit)
        {
            
        }
    });
    
}

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

LLTank* LLGameMgr::TankFactory(LLTankType type)
{
    LLTank *tank = nullptr;
    switch (type)
    {
        case LLTankType::OurLeftTank:
            break;
        case LLTankType::OurRightTank:
            break;
        default:
            break;
    }
    return tank;
}
