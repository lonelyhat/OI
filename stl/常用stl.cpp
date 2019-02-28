#include<iostream>
#include<string>
#include<queue>
#include<vector>
#include<deque>
#include<set>
#include<map>
#include<stack>
#include<algorithm>
using namespace std;
void easy_programming()
{   
    //vector
    vector<int>v;
    v.reserver(n);//扩大容量为n 
    v.clear();//清空容器 
    v.erase(pos);//删除位置为pos的元素 
    v.erase(begin,end);//删除区间[begin,end)的所有元素 
    v[i];//访问第i个元素，用法与数组相同 
    v.front();//返回第一个元素 
    v.back();//返回最后一个元素 
    v.push_back(e);//在尾部添加元素e 
    v.pop_back();//移除最后一个元素 

    //queue
    queue<int>q;
    q.clear();//清空容器 
    q.erase(pos);//删除位置为pos的元素 
    q.erase(begin,end);//删除区间[begin,end)的元素 
    q.push(a);//将元素a加入队列 
    q.front();//返回队头元素的值 
    q.back();//返回队尾元素的值 
    q.size();//返回队列中的元素个数 
    q.empty();//返回队列是否为空
    q.pop();//先进先出

    //priority queue
    priority_queue< int,vector<int>,less<int> >q; //less ->定义type类型大根堆，greater ->定义type类型小根堆
    q.clear();//清空容器 
    q.push(a);//将元素a加入堆
    q.top();//取出堆顶元素 
    q.pop();//弹出堆顶元素 
    q.empty();//返回堆是否为空 
    q.size();// 返回堆中元素个数 

    //双向队列
    deque<int>d; 
    d[i];//访问第i元素，用法与数组相同
    d.clear();//清空容器 
    d.front();//返回第一个元素 
    d.back();//返回最后一个元素 
    d.pop_back();//弹出尾元素 
    d.pop_front();//弹出首元素 
    d.push_back();//加入尾元素 
    d.push_front();//加入首元素

    //set 集合不允许重复的元素存在，而multiset允许重复的元素存在。其所有常用用法均与set相同。
    set<int>s;
    s.count(t);//返回集合中元素t的个数 
    s.empty();//返回集合是否为空 
    s.size();//返回集合中元素的个数 
    s.insert(t);//插入元素t 
    s.insert(begin,end);//插入区间[begin,end)中的所有值 
    s.erase(pos);//删除位置为pos的元素 
    s.erase(begin,end);//删除区间[begin,end)的所有元素

    //map 类似于python中的字典
    map<int,int>m;
    m[n];//访问map中键为n的元素，与数组相同 
    m.count(n);//返回map中键为n的元素个数 
    m.find(n);//返回指向键为n的迭代器，如果不存在，返回m.end() 
    m.empty();//返回map是否为空 
    m.size();//返回map中的元素个数 
    m.erase(e);//删除键为e的元素 
    m.insert(make_pair(key,value));//在map中加入键为key，值为value的元素 
    
    //stack
    stack<int>s;
    s.size();//返回栈中元素个数 
    s.empty();//返回栈是否为空 
    s.clear();//清空栈 
    s.top();//返回栈顶值,即最后一个
    s.pop();//栈顶出栈
    s.push(a);//将元素a加入队列
    
    //sort
    sort(begin,end,compare) //(对区间[begin,end)进行排序，若不传入参数compare，使用默认的operator <进行排序，即升序，从小到大) 
    upper_bound(begin,end,value)//(返回有序区间[begin,end)中第一个大于value的元素位置，注意返回的时地址，如需使用要在调用后加上“-数组名”)
    lower_bound(begin,end,value)//(返回有序区间[begin,end)中第一个大于等于value的元素位置，注意返回的时地址，如需使用要在调用后加上“-数组名”)  
    binary_search(begin,end,value)//(返回有序区间[begin,end)中是否存在value，不指明位置) 
}

