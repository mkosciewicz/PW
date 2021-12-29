#include<stdio.h>
struct vector
{
    int x;
    int y;
    int z;
};
typedef struct vector vector;
int calculation_scalar(vector v1,vector v2)
{
    return v1.x*v2.x+v1.y*v2.y+v1.z*v2.z;
}
vector vector_calculation(vector v1,vector v2)
{
    vector v;
    v.x=v1.y*v2.z-v1.z*v2.y;//(4*7)-(6*6)=x |
    v.y=v1.z*v2.x-v1.x*v2.z;//(6*3)-(2*7)=y |-----> multiplying two vectors
    v.z=v1.x*v2.y-v1.y*v2.x;//(2*6)-(4*3)=z |
    return v;
}
int main()
{
    vector v1={2,4,6};
    vector v2={3,6,7};
    vector v;
    v=vector_calculation(v1,v2);
    printf("v1*v2= %d\n",calculation_scalar(v1,v2));
    printf("v1 x v2 = [%d, %d, %d]\n", v.x , v.y , v.z);
    return 0;
}
