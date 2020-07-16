#include <stdio.h>
int main(){
 	int n, count = 1, find;
	char first, conti, queue[10]; //conti=continue
	scanf("%d", &n);
	//make keep name people
	char keep, keep2;
	//A is first people from ex.
	queue[0] = 'A';
	//input queue
	for (int i = 0; i < n-1; i++){
		//loop input
		scanf(" %c %c", &conti, &first);

		//loop check
		for (int j = 0; j < count; j++){
			if (queue[j] == first){ //first save in array(done), no matter to check continue
				if (count-1 == j){
					keep = queue[j+1]; //keep people before check first
					queue[j+1] = conti; //Now index is first, continue will be next people
					count++;
				}
				else{
					keep = queue[j+1];
					queue[j+1] = conti;
					
					int check = 0;
					int count2 = count; //make count2 for can use count in loop(i) again
					for (int k = 0; k < count2-j-1; k++){
						if (check%2 == 0){ //even will keep people index after A,(continue A)
							keep2 = queue[k+(j+1)+1]; //so make keep2
							queue[k+(j+1)+1] = keep;
							count++;
						}
						else{
							keep = queue[k+(j+1)+1];
							queue[k+(j+1)+1] = keep2;
							count++;
						}
						check++;
					}
				}
				break;
			}
		}
	}

	//input find people
	scanf("%d", &find);
	printf("%c", queue[find-1]);
	return 0;
}