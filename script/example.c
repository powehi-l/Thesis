int a = 0;

void thread1(){
	int i = 0;
	while(i < 100){
		scanf("%d", &a);
		if(a > 0 && i > 100){
			a = a + 1;
		}
	}
}

void thread2(){
	int j = 0;
	while(j < 100){
		scanf("%d", &a);
		if(a < 0 && j > 100){
			a = a - 1;
		}
	}
}