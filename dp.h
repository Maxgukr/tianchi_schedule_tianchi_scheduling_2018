#ifndef DYNAMIC_PROG
#define DYNAMIC_PROG

#include "code.h"
#include <algorithm>
#include <string.h>

struct InstanceData {
    int ins_id , app_id;
    bool is_deployed;
    bool operator< ( const InstanceData &t ) const ;
    InstanceData(int id, bool deployed);
};

struct DP {
    vector<Machine> m_ins;          //������ʵ�� 
    vector<vector<InstanceData> > data;      //��������Ӧ��ʵ��
    
    map<int,int> ins_pos;           //ʵ��λ�� 
    map<int,int> disk_index;       //���̹���±� 
    vector<int> disk_spec;          //���̹��
    vector<int> ins_remain;         //ÿ�ֹ��ʣ��ʵ����
    map<int,set<int> > disk_ins_set;    //ÿ�ֹ��Ĵ��̵�ʵ�� 
    
    int f[2000];                //dp���� 
    int v[2000];
    int tr[2000];
    
    double u_score;
    
    DP() ;
    
    void init() ;
    
    void dynamic_programming() ;
    
    void dp_plan() ;
    
    void package_up( int m );
};



#endif
