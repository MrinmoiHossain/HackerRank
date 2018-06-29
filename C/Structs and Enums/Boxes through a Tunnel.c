#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

struct box
{
	int length, width, height;
};

typedef struct box box;

int get_volume(box b) {
	return (b.length * b.width * b.height);
}

int is_lower_than_max_height(box b) {
	/**
	* Return 1 if the box's height is lower than MAX_HEIGHT and 0 otherwise
	*/
    if(b.height < MAX_HEIGHT)
        return 1;
    else
        return 0;
}

int main(void)
{
	int n;
	scanf("%d", &n);

	box *boxes = malloc(n * sizeof(box));
	for(int i = 0; i < n; i++){
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for(int i = 0; i < n; i++){
		if(is_lower_than_max_height(boxes[i])){
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}