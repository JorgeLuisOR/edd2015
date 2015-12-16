int ackermann(int m, int n)
{
    if (m == 0)
        return n + 1;
    else if (n == 0)
        return ackermann(m - 1, 1);
    else
        return ackermann(m - 1, ackermann(m, n - 1));
}

int main(){
	int n,m,res;
	
	printf("Ingrese n \n");
	scanf("%d",&n);
	printf("Ingrese m \n");
	scanf("%d",&m);
	
	res=ackermann(n,m);
	
		printf("Resultado %d\n,res");
	
	return 0;
}
