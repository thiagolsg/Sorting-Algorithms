#include <stdio.h>
#include <stdlib.h>

//Complexity log(n)

int binarysearch(int *v,int n,int x){
    int e=-1;
    int d=n;
    int m;

    while(e<d-1){
        m=(e+d)/2;
        if(v[m]<x) e=m;
        else d=m;
    }  
return d;
}