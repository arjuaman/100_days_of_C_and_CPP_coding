int greatest(int a,int b,int c){
    int great;
    great = (a>b)?(a>c?a:c):(b>c?b:c);
	return great;
}