#include<bits/stdc++.h>
#define fr(x) for(int i = 0; i<x; i++)
using namespace std;

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num_shows;
    cin >> num_shows;

    vector<int> people(num_shows);
    vector<float> rating(num_shows);

    int sum_peps = 0;
    float weighted_sum = 0.0;

    for (int i = 0; i < num_shows; i++) {
        cin >> people[i] >> rating[i];
        sum_peps += people[i];
        weighted_sum += people[i] * rating[i];
    }

    float res = weighted_sum / sum_peps;
    cout << res << endl;

    return 0;
}

