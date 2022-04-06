#include <stdio.h>

void removeKilled(int *array, int size, int killedPrisoner);

int main()
{
	int numPrisoners, m, i;

	scanf("%d", &numPrisoners);
	scanf("%d", &m);

	int prisoners[numPrisoners];
	int killed[numPrisoners];

	// generate array 1 to numPrisoners
	for (i = 0; i < numPrisoners; i++) {
		prisoners[i] = i + 1;
	}

	int *killerPtr = &prisoners[0];

	// printf("@@ &prisoners[0] %d\n", (int) &prisoners[0]);
	// printf("@@ &prisoners[%d] %d\n", numPrisoners - 1, (int) &prisoners[numPrisoners - 1]);

	// Select prisoner to be killed
	for (i = 0; i < numPrisoners; i++) {
		if(i==0){
			killerPtr = &prisoners[m-1];
		}
		else{
			int killed_index = killed[i - 1], counter = 0;
			while(1){
				if(killed_index == numPrisoners){
					killed_index = 0;
				}
				if(prisoners[killed_index]!=0){
					counter++;
				}
				if(counter==m){
					killerPtr = &prisoners[killed_index];
					break;
				}
				killed_index++;
			}
		}



		// append number of prisoner who is killed to array `killed`
		killed[i] = *killerPtr;
		// remove number killed prisoner from array `prisoners`
		removeKilled(&prisoners[0], numPrisoners, *killerPtr);

	}

	for (i = 0; i < numPrisoners; i++) {
		printf("%d ", killed[i]);
	}
}

void removeKilled(int *array, int size, int killedPrisoner)
{
	int i;
	for(i = 0; i < size; i++){
		if (array[i] == killedPrisoner){
			array[i] = 0;
			break;
		}
	}

}
