#include<stdio.h>

const int NoOfNode = 5;
const int INF = 100000;
int AdjMat[NoOfNode][NoOfNode] =	{
									{0, 3, 5, 6, 0},
									{3, 0, 2, 0, 2},
									{5, 2, 0, 3, 4},
									{6, 0, 3, 0, 2},
									{0, 2, 4, 2, 0},
									};

int ExtractMin(int *x, int *y){
	int min, pos, i;
	min = INF;
	for(i = 0; i < NoOfNode; i++)
		if(x[i] < min && y[i] == 0){
			min = x[i];
			pos = i;
		}
	
	return pos;
}

int AllVisit(int *x){
	int i;
	for(i = 0; i < NoOfNode; i++)
		if(x[i] == 0)
			return 0;
	return 1;
}

int MST(){
	int d[NoOfNode], used[NoOfNode];
	int i, u, v, sum;

	for(i = 0; i < NoOfNode; i++){
		d[i] = INF;
		used[i] = 0;
	}
	d[0] = 0;
	
	sum = 0;
	while(1){
		if(AllVisit(used) == 1)
			break;
		u = ExtractMin(d, used);
		used[u] = 1;
		sum = sum + d[u];
		for(v = 0; v < NoOfNode; v++)
			if(AdjMat[u][v] > 0)
				if(AdjMat[u][v] < d[v] && used[v] == 0)
					d[v] = AdjMat[u][v];

	}



	return sum;
}


int main(){
	printf("%d", MST());
	return 0;
}