#ifndef ORDER_DEPLOYER
#define ORDER_DEPLOYER

#include "code.h"
#include <algorithm>
#include <string.h>

struct AppData {
    int app_id;
    int a[10];
    AppData(int id);
    bool operator< ( const AppData &t ) const ;
};

struct Deployer:Code {
    
    vector<AppData> app_view;       //app��ͼ����������app 
    
    
    map<int,int> disk_index;       //���̹���±� 
    vector<int> sim_disk_spec;          //���̹��
    vector<int> ins_remain;         //ÿ�ֹ��ʣ��ʵ����
    vector<set<int> > disk_ins_set;    //ÿ�ֹ��Ĵ��̵�ʵ�� 
    
    vector<set<int> > app_ins_set;
    
    int f[2000];                //dp���� 
    
    map<int,int> imposible_apps;
    
    double u_score;
    
    void make_view (Machine &m); 
    
    bool able_to_deploy( int app ) ;
    
    Deployer(int _len) ;
    
    void update_imposible_apps( int t, int max_app);
    
    void init() ;
    
    int dynamic_programming(int space) ;
    
    void package_up();
    
    int get_next_ins( Machine &m ) ;
    
    bool set_ins( int ins, int m ,bool constant=false);
};



#endif
