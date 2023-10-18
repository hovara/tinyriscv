#include <stdint.h>

int main(){
	uint8_t* ptr = 0x800000F8;
	
	for(int i = 0; i < 16; i++){
		*ptr = i;
		ptr++;
	}
}