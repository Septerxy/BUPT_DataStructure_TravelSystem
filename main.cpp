#define _CRT_SECURE_NOWARNINGS
#include <iostream>
#include "functions.h"
#include "definition.h"

using namespace std;

double len[NumOfNode + 2];  	//表示源点到i这个点的距离 
int visit[NumOfNode + 2];  //节点是否被访问 
int n = NumOfNode + 1; //结点数
Node NodeList[250]; //存储结点的数组
double Mar[NumOfNode + 2][NumOfNode + 2]; //结点的邻接矩阵
double cost[NumOfNode + 2][NumOfNode + 2]; //结点间经过处理后的邻接矩阵
int path[NumOfNode + 2][NumOfNode + 2]; //存储中间结点的数组
string OutLoc[NumOfNode + 2][NumOfNode + 2]; //存储路径的数组
int timepath[NumOfNode + 2][NumOfNode + 2][NumOfNode + 2]; //存储经过的所有结点的数组



int main()
{
	
	SystemInit(NodeList, Mar);
	//Examine(NodeList, Mar);
	while(1)
		GetIns(cost,NodeList, Mar, len, visit, n, path, OutLoc,timepath);
	system("pause");
	return 0;
}