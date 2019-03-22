/*
GlobalV.h
*/
#ifndef _GLOBAL_H_
#define _GLOBAL_H_

#include "LLTank.h"
#include <thread>
#include <chrono>


#define	MaxRow  26
#define	MaxCol  26

using namespace std;

enum class LLMapElementType
{
	Empty = 0,
	Soil= 1,//土块
	Cement,//水泥
	Water,//水
	Grass,//草地
};

enum class LLTankType : int
{
    OurLeftTank = 1,
    OurRightTank,
    EnemyNormalTank,
};

struct LLPoint 
{
	int x;
	int y;
};

struct LLRect
{
	int x;
	int y;
	int width;
	int height;
};

struct LLCoordinate
{
	int x;
	int y;
};
    
class LLTimer
{
public:
    LLTimer() = delete;
    LLTimer& operator=(LLTimer&) = delete;
    LLTimer(LLTimer&) = delete;
    LLTimer(std::chrono::milliseconds);
    ~LLTimer();
    void StartTimer();
    void KillTimer();
public:
    std::thread m_th;
private:
    bool m_is_exit;
};

class LLGameMgr 
{
private:
	static LLGameMgr instance;
public:
	static LLGameMgr& GetInstance();
	LLGameMgr();
	~LLGameMgr();
private:
	LLMapElementType m_game_map[MaxRow][MaxCol];
	bool LoadMap(int pass);
    
    LLTank* TankFactory(LLTankType type);
};

#endif
