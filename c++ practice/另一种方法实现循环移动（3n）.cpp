#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
    vector<int>v(120); 
    int i, data, n, m;
    cin >> n >> m;
    for(i = 0; i < n; i++)
        cin >> v[i];
    for(i = 0; i < n - m; i++)       //将移动后不会溢出的一部分放入该vector中的后面 
        v[i+n] = v[i];
    for(i = n-m; i < n; i++)          //(i+m)%n算溢出了几位，所算出的就是对应的新位置，这样从v[0]到v[m-1]的排好了 
        v[(i+m)%n] = v[i];             
    for(i = m; i < n; i++)            //再从V[m]开始，将之前存储在后面的那一段调回来。 
        v[i] = v[i+n-m];
        
    for(i = 0; i < n; i++)     //输出 
        cout << v[i] << " ";
    return 0;
}//此程序完全可以用数组实现，不用vector 
