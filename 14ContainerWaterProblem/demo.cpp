#include <iostream>
using namespace std;
int main(){

    int container[] = {1,8,6,2,5,4,8,3,7};
    int n = sizeof(container)/sizeof(int);
    
    int maxWater = 0;

    for(int i=0;i<n;i++){ // O(n^2)
        int width = 0;
        int height = 0;
        for(int j=i+1;j<n;j++){
            width=j-i;
            height = min(container[i],container[j]);
            int waterCapacity = width * height;
            maxWater = max(maxWater,waterCapacity) ;
        }
    }
    cout << "Maximum water = " << maxWater <<endl;

// Optimal solution with 2 pointer approach - O(n)

    int lp = 0, rp = n-1;
    int maxWater2 = 0;


    while(lp < rp){
        int width = rp - lp;
        int height = min(container[rp] , container[lp]);
        int area = width*height;
        maxWater2 = max(maxWater2,area);
        container[lp] < container[rp] ? lp++ : rp--;
    }

    cout << "Maximum water 2 = " << maxWater2 ;
    

    return 0;
}