#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;


void sort_by_area(triangle* tr, int n) {
	double cntarea[n];
    for(int i=0;i<n;i++){
        double x = (tr[i].a + tr[i].b + tr[i].c) / 2.0;

        cntarea[i] = sqrt(x * (x-tr[i].a) * (x-tr[i].b) * (x-tr[i].c));
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(cntarea[j] > cntarea[j+1]){
                struct triangle temp = tr[j];
                tr[j] = tr[j+1];
                tr[j+1] = temp;

                double temp2 = cntarea[j];
                cntarea[j] = cntarea[j+1];
                cntarea[j+1] = temp2;
            }
        }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
