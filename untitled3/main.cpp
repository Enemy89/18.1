#include <iostream>
#include <vector>

void swapvec(std::vector <int>& a, int (*pb)[4]) {
    int tmp[4];

    for (int i=0; i<4; ++i) {
        tmp[i]= *( *pb + i);
    }

    for (int i=0; i<4; ++i) {
        *(*pb + i) = a[i];
        a[i]=tmp[i];
    }
}

int main() {
    std::vector<int> a = {1,2,3,4};
    int b[4] = {2,4,6,8};
    int (*pb)[4] = &b;

    swapvec(a,pb);

    for(int i = 0; i < 4; ++i)
        std::cout << a[i];
    std::cout << std::endl;
    for(int i = 0; i < 4; ++i)
        std::cout << b[i];
}
