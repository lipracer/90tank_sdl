/*
GlobalV.h
*/
#ifndef _GLOBAL_H_
#define _GLOBAL_H_

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

class LLGameMgr 
{
private:
	static LLGameMgr instance;
public:
	static LLGameMgr& GetInstance();
	LLGameMgr();
	~LLGameMgr();


};

#endif