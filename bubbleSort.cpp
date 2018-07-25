#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int bubbleSort(vector <int> &vec){
    int counter = 0;
    for(int i = 0; i < vec.size(); i++){
        for(int j = 0; j < vec.size() -1; j++){
            if(vec[j] > vec[j + 1]){
                counter++;
                swap(vec[j], vec[j+1]);
            }
        }
    }
    return counter;
} 

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
    	cin >> a[a_i];
    }
    int numSwaps = bubbleSort(a);
    printf("Array is sorted in %d swaps.\n", numSwaps);
    printf("First Element: %d\n", a[0]);
    printf("Last Element: %d\n", a[a.size() -1]);
    return 0;
}