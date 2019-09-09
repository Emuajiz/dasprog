#include <stdio.h>

double triangleArea(int Ax, int Ay, int Bx, int By, int Cx, int Cy)
{
    double tArea;
    tArea = (Ax * (By - Cy) + Bx * (Cy - Ay) + Cx * (Ay - By)) / 2.0;
    if (tArea < 0)
        tArea = -1 * tArea;
    return tArea;
}

int main()
{
    int i, j, n, q, points[2];
    long double polygonArea = 0;
    long double pointArea = 0;
    // baca sudut sama banyak soalan
    scanf("%d %d", &n, &q);
    int polygon[n][2];
    for(i = 0; i<n; i++)
    {
        // baca koordinat tiap sudut
        scanf("%d %d", &polygon[i][0], &polygon[i][1]);
    }
    
    //  hitung luas polygonnya
    for(i = 1; i<n-1; i++)
    {
        polygonArea += triangleArea(polygon[0][0],polygon[0][1],polygon[i][0],polygon[i][1],polygon[i+1][0],polygon[i+1][1]);
    }

    for(i = 0; i<q; i++)
    {
        //baca titik nya
        scanf("%d %d", &points[0], &points[1]);
        // cek titiknya
        pointArea = 0;
        for(j = 0; j<n; j++)
        {
            pointArea += triangleArea(points[0],points[1],polygon[j%n][0],polygon[j%n][1],polygon[(j+1)%n][0],polygon[(j+1)%n][1]);
        }

        if(pointArea == polygonArea)
        {
            printf("D\n");
        } else {
            printf("F\n");
        }
    }
    // printf("%lf\n", polygonArea);
}