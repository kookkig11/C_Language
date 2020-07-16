	for (i = 0; i < n; i++){
		for (int j = i+1; j < n; j++){
			if (arrStudent[i] == arrStudent[j]){
				x = 1;
			}
		}
		if (x == 0){
			arrNew[m++] = arrStudent[i];
		}
	}
	for (i = 0; i < m; i++)
		printf("%s", arrNew[i]);



for (i = 0; i < n; i++){
		for (j = i+1; j < n; j++){
			if (arrStudent[i] == arrStudent[j]){
				arrStudent[j] = '0';
				arrGrade[i] = (arrGrade[i] + arrGrade[j])/2;
				arrGrade[j] = 0;
			}
		}
	}