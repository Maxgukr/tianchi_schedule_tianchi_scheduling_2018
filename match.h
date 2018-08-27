#ifndef _MATCH_SA
#define _MATCH_SA


#include <cstdio>
#include <algorithm>
#include <cstring>
#include <deque>
#include <queue>
#include <vector>
#include <set>
#include <iterator>
#include <time.h>
#include <math.h>
#include <iostream>

#ifndef MAX_EDGE_NUM
#define MAX_EDGE_NUM 10000
#endif

#define MAX_N 8010
#define MAX_E 4000400
#define MAXINT 0x3f3f3f3f
#define INF 1e9

using namespace std;

extern vector<vector<int> > O;

class KM_Match
{

public:
	int nx, ny, cut;
	double *g[MAX_N];
	int  girl[MAX_N];
    int Lx[MAX_N], Ly[MAX_N];
    int  slack[MAX_N];      //Ϊ���Ż��õģ����ӵ���Ӧgirl���ɳ�ֵ��
    bool S[MAX_N], T[MAX_N];  
    double score;  

    void reset(int input_num, int _cut, double edge[MAX_N][MAX_N]);

	vector<int> KM();
};

#endif
