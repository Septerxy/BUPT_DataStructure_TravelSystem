#define _CRT_SECURE_NOWARNINGS
#include <iostream>
#include "functions.h"
#include "definition.h"

using namespace std;

double len[NumOfNode + 2];  	//��ʾԴ�㵽i�����ľ��� 
int visit[NumOfNode + 2];  //�ڵ��Ƿ񱻷��� 
int n = NumOfNode + 1; //�����
Node NodeList[250]; //�洢��������
double Mar[NumOfNode + 2][NumOfNode + 2]; //�����ڽӾ���
double cost[NumOfNode + 2][NumOfNode + 2]; //���侭���������ڽӾ���
int path[NumOfNode + 2][NumOfNode + 2]; //�洢�м��������
string OutLoc[NumOfNode + 2][NumOfNode + 2]; //�洢·��������
int timepath[NumOfNode + 2][NumOfNode + 2][NumOfNode + 2]; //�洢���������н�������



int main()
{
	
	SystemInit(NodeList, Mar);
	//Examine(NodeList, Mar);
	while(1)
		GetIns(cost,NodeList, Mar, len, visit, n, path, OutLoc,timepath);
	system("pause");
	return 0;
}