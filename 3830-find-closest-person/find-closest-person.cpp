class Solution {
public:
    int findClosest(int x, int y, int z) {
        int a,b,c;
        if(z<x){
            a=x-z;
        }
        else{ a=z-x;}
        if(z<y){
            b=y-z;
        }
        else{b=z-y;}
        

        if(a==b)
            c= 0;
        if(a>b)
            c= 2;
        if(a<b)
            c= 1;

        return c;
    }
};