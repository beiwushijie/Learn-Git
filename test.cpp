#include <iostream>
#include <vector>
int main()
{

    int m = 0, n = 0; // m背包的容量，n是物品个数
    std::cin >> m >> n;
    // std::vector<int> weight(n, 0);
    // std::vector<int> value(n, 0);
    std::vector<std::pair<int, int>> v1;
    int s, q;
    // std::vector<std::vector<int>> goods_list(n, std::vector<int>(2, 0));
    for (int i = 0; i < n; i++)
    {

        std::cin >> s >> q;
        v1.push_back({s, q});

       
    }
    std::pair<int, double> p1 ;
    std::make_pair(m,n);
    std::sort(v1.begin(),v1.end());
    std::cout <<v1[1].first;
    // for (auto &&i : v1)
    // {
    //     std::cout << i.first << " " << i.second <<"\n";
    // }
    std::cout <<v1[1].first;
    std::cout <<v1[1].first;
}