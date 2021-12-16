
#define N1 3
#define N2 5
#define N3 7

int main(){
 int min_n = 0;
    if(N1 < N2 && N1 < N3) {
        min_n = N1;
	  } else if(N2 < N1 && N2 < N3) {
        min_n = N2;
	  } else {
        min_n = N3;
    }
return 0;
}
