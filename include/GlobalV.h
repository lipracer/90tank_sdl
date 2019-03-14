/*
GlobalV.h
*/
#ifndef _GLOBAL_H_
#define _GLOBAL_H_

enum class ConstValue : unsigned long
{
	MaxRow = 26,
	MaxCol = 26,
};

enum class MapElementType
{
	Empty = 0,
	Soil= 1,//土块
	Cement,//水泥
	Water,//水
	Grass,//草地
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

class LLGameMgr 
{
private:
	static LLGameMgr instance;
public:
	static LLGameMgr& GetInstance();
	LLGameMgr();
	~LLGameMgr();
private:
	MapElementType m_game_map[ConstValue::MaxRow][ConstValue::MaxCol];
	bool LoadMap(int pass);
};

#endif