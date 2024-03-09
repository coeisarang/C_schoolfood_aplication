#include <stdio.h>
#include <Windows.h>

int main() {
	char sq1[3] = "бр";
	char sq2[3] = "бс";

	for (int i = 0; i < 20; i++) {
		for (int j = 1; j < 20; j++) {
			if (j ==i ) {
				printf("%s", sq2);

			}
			else {
				printf("%s", sq1);

			}
			
		}
		Sleep(100);
		system("cls");
		if (i == 19) {
			i = 0;
		}
	}
	printf("\n");



	
	return 0;

}