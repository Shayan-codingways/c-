#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main() {
    int N;
    cin >> N;

    map<int, float> prices_map;
    unordered_map<int, float> prices_unordered_map;

    // Input initial prices
    for (int i = 0; i < N; ++i) {
        int id;
        float price;
        cin >> id >> price;
        prices_map[id] = price;
        prices_unordered_map[id] = price;
    }

    // Simulate price change
    int M_id;
    float new_price;
    cin >> M_id >> new_price;

    // Update price in both maps
    prices_map[M_id] = new_price;
    prices_unordered_map[M_id] = new_price;

    // Output prices sorted by product IDs using std::map
 cout << "Prices using std::map (sorted by product IDs):" << endl;
    for (const auto& it : prices_map) {
     cout << it.first << " " << it.second << endl;
    }

    // Output prices in any order using std::unordered_map
 cout << "Prices using std::unordered_map (in any order):" << endl;
    for (const auto& it : prices_unordered_map) {
     cout << it.first << " " << it.second << endl;
    }

    return 0;
}
