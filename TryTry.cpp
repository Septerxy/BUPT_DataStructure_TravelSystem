//void Dijskra(int startnode, int to, double G[][NumOfNode + 2], double* len, int* visit, int n, Node* l, string* OpOut)
//{
//	double cost[NumOfNode + 2][NumOfNode + 2], distance[NumOfNode + 2] = { INFINITY };
//	int pred[NumOfNode + 2];
//	int visited[NumOfNode + 2], count, mindistance, nextnode, i, j;
//	for (i = 1;i <= n + 1;i++)
//		for (j = 1;j <= n + 1;j++)
//			cost[i][j] = G[i][j];
//	FILE* fp = fopen("cost.txt", "w+");
//	for (i = 1;i <= n + 1;i++)
//	{
//		for (j = 1;j <= n + 1;j++)
//			fprintf(fp, "%lf ", cost[i][j]);
//		fprintf(fp, "\n");
//	}
//
//	for (i = 1;i <= n + 1;i++)
//	{
//		if (l[i].time > l[startnode].time)
//		{
//			if (cost[startnode][i] != INFINITY)
//				distance[i] = cost[startnode][i] * (l[i].time - l[startnode].time);
//		}
//		else
//		{
//			if (l[i].time == l[startnode].time)
//			{
//				if (l[i].loc == l[startnode].loc)
//					distance[i] = 0;
//			}
//		}
//		pred[i] = startnode;
//		visited[i] = 0;
//	}
//	FILE* fpp = fopen("distance.txt", "w+");
//	for (i = 1;i <= n + 1;i++)
//		fprintf(fpp, "%lf %c %lf %lf %lf\n", l[i].time, l[i].loc, cost[startnode][i], (l[i].time - l[startnode].time), distance[i]);
//
//	/*for (int q = 1;q <= n;q++)
//		cout << G[startnode][q] << " " << cost[startnode][q] << " " << distance[q] << endl;*/
//
//	distance[startnode] = 0;
//	visited[startnode] = 1;
//	count = 1;
//	while (count <= n + 1)
//	{
//		mindistance = INFINITY;
//		for (i = 1;i <= n + 1;i++)
//		{
//			if ((distance[i] < mindistance) && (!visited[i]) && (i != startnode))
//			{
//				mindistance = distance[i];
//				nextnode = i;
//			}
//		}
//		visited[nextnode] = 1;
//		for (i = 1;i <= n + 1;i++)
//		{
//			//double flag = l[i].time;
//			if (!visited[i])
//				if ((mindistance + cost[nextnode][i] * (l[nextnode].time - l[i].time) < distance[i]) && (l[nextnode].time > l[i].time))
//				{
//					if (cost[nextnode][i] != INFINITY)
//						distance[i] = mindistance + cost[nextnode][i] * (l[nextnode].time - l[i].time);
//					//flag = l[nextnode].time;
//					pred[i] = nextnode;
//				}
//		}
//		count++;
//	}
//	FILE* fppp = fopen("distanceFresh.txt", "w+");
//	for (i = 1;i <= n + 1;i++)
//		fprintf(fppp, "%d %lf %c %lf %lf %lf\n", i, l[i].time, l[i].loc, cost[startnode][i], (l[i].time - l[startnode].time), distance[i]);
//
//	/*cout << "改变后" << endl;
//	for (int q = 1;q <= n;q++)
//		cout << G[startnode][q] << " " << cost[startnode][q] << " " << distance[q] << endl;*/
//
//	for (i = 1;i <= n + 1;i++)
//		if (i != startnode)
//		{
//			if ((i == to))
//			{
//				printf("\nDistance of %d = %lf。\n", i, distance[i]);
//				printf("即从%lf %c前往%lf %c的最短距离为%lf。\n", l[startnode].time, l[startnode].loc, l[i].time, l[i].loc, distance[i]);
//				printf("\nPath = %lf %c", l[i].time, l[i].loc);
//				j = i;
//				do
//				{
//					j = pred[j];
//					printf(" <- %lf %c", l[j].time, l[j].loc);
//				} while (j != startnode);
//			}
//		}
//	printf("\n");
//
//}