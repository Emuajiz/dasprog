#include <stdio.h>
#include <math.h>

double triangleArea(int Ax, int Ay, int Bx, int By, int Cx, int Cy)
{
    double tArea;
    tArea = (Ax * (By - Cy) + Bx * (Cy - Ay) + Cx * (Ay - By)) / 2.0;
    if(tArea < 0) tArea = -1 * tArea;
    return tArea;
}

int main()
{
    int Ax, Ay, Bx, By, Cx, Cy, n, tX, tY, price = 0;
    double tArea, tA, tB, tC;

    //hitung luas segitiga
    scanf("%d %d %d %d %d %d", &Ax, &Ay, &Bx, &By, &Cx, &Cy);
    tArea = triangleArea(Ax, Ay, Bx, By, Cx, Cy);


    //pohon
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d %d", &tX, &tY);
        tA = triangleArea(tX, tY, Bx, By, Cx, Cy);
        tB = triangleArea(Ax, Ay, tX, tY, Cx, Cy);
        tC = triangleArea(Ax, Ay, Bx, By, tX, tY);
        if(tA + tB + tC == tArea) price++;
    }
    printf("%.1lf\n%d\n", tArea, price);
    return 0;
}