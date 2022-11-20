//http://acm.zzuli.edu.cn/problem.php?cid=1853&pid=2
#include<vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

void read_vector(vector<double>& vec, int len) //读入一个向量
{
    double x;
    for (int i = 1; i <= len; i++) {
        cin >> x;
        vec.push_back(x);
    }
}

void read(vector<vector<double> >& in_paras, int len_in, int len_out)  //读入一层参数，入口长度为len_in，出口为len_out
{
    for (int i = 1; i <= len_out; i++) {
        vector<double> in_para;
        read_vector(in_para, len_in);
        in_paras.push_back(in_para);
    }
}

string type;
const double e = 2.718;
double activate(double x) //激活函数
{
    if (type == "Sigmoid") 
    {
        x = 1 / (1 + pow(e, -x));
    }
    else if (type == "ReLU")
    {
        x = max(0.0, x);
    }
    return x;
}
    double dot(vector<double> &in, vector<double> &in_para) //向量的点积
    {
        int len1 = in.size();
        auto b = in_para.begin();
        double sum = 0.0;
        for (auto i = in.begin(); i != in.end(); i++)
        {
            sum += (*i) * (*b);
            b++;
        }
        return sum;
    }

    vector<double> get(vector<double> &in, vector<vector<double> > &in_paras, vector<double> &bias) //对于输入向量，经过与参数层in_paras的运算，得到输出向量
    {
        vector<double> outs;
        int len_out = in_paras.size();
        for (int i = 0; i < len_out; i++) {
            double out = activate(dot(in, in_paras[i]) + bias[i]);
            outs.push_back(out);
        }
        return outs;
    }

    double solve()
    {
        int n, m, k;
        cin >> n >> m >> k;
        cin >> type;

        vector<double> in;
        read_vector(in, k);
        vector<vector<double> > in_paras[m + 5];

        read(in_paras[1], k, n);
        for (int i = 2; i <= m; i++)
            read(in_paras[i], n, n);
        read(in_paras[m + 1], n, 1);

        vector<double> bias[m + 5];
        for (int i = 1; i <= m; i++) read_vector(bias[i], n);
        read_vector(bias[m + 1], 1);

        for (int i = 1; i <= m + 1; i++) {
            in = get(in, in_paras[i], bias[i]);
        }
        return in[0];
    }
    int main() {
        vector<int> ans;
        double x = solve();
        double y = solve();
        double z = solve();
        if (y > x) swap(x, y);
        if (z > y) swap(z, y);
        if (y > x) swap(x, y);
        printf("%.2f %.2f %.2f\n", x, y, z);
    }
