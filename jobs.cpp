#include "jobs.h"


namespace global{
vector<Jobs> job_res;

map<string,int> str_to_job_id;

//������CPUռ��*���� 
double total_jobs_cpu;
}

bool Jobs_cmp(const Jobs& a, const Jobs& b) {
    return a.name < b.name;
}


