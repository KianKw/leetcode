/*************************************************************************
# File Name: 01.c
# Author: Kian Kwok
# mail: kiankwok6@gmail.com
# Created Time: Tue Jan  7 13:55:00 2020
 ************************************************************************/

int subtractProductAndSum(int n){
    int sum = 0;
    int prd = 1;
    while (n) {
        prd *= n % 10;
        sum += n % 10;
        n = n / 10;
    }
    return (prd - sum);
}

