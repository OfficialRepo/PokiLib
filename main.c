
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>
#include <stdint.h>
#include "encrypt.h"

unsigned char* load_file(char const* path, size_t* plength) {
	unsigned char* buffer = 0;
	size_t length;
	FILE * f = fopen(path, "rb"); //was "rb"

	if (f) {
		fseek(f, 0, SEEK_END);
		length = ftell(f);
		fseek(f, 0, SEEK_SET);
		buffer = (unsigned char*) malloc(length);
		if (buffer)
		{
			fread(buffer, 1, length, f);
		}
		fclose(f);
		*plength = length;
	}
	return buffer;
}


void print_hex(const unsigned char *s, size_t l) {
	for (size_t i = 0; i<l; i++) {
		printf("%02x", (unsigned int)s[i]);
	}
	printf("\n");
}

void verify(const char* plain, const char* enc) {
	size_t input_size;
	unsigned char* input = load_file(plain, &input_size);
	size_t expected_output_size;
	unsigned char* expected_output = load_file(enc, &expected_output_size);
	unsigned char iv[32];

	// Steal the IV from the expected output to ensure the same result. Normally you could just use a random IV.
	memcpy(iv, expected_output, 32);

	size_t output_size;
	encrypt(input, input_size, iv, 32, NULL, &output_size);
	unsigned char* output = (unsigned char*)malloc(output_size);
	encrypt(input, input_size, iv, 32, output, &output_size);

	printf("%s: ", plain);
	if (output_size == expected_output_size && memcmp(output, expected_output, output_size) == 0) {
		printf("ok\n");
	} else {
		printf("not ok\n");
	}	
}

int main() {
	verify("../tests/dump0_unencrypted.bin", "../dumps/dump0_encrypted.bin");
	verify("../tests/dump1_unencrypted.bin", "../dumps/dump1_encrypted.bin");
	verify("../dumps/dump2_unencrypted.bin", "../dumps/dump2_encrypted.bin");
	verify("../dumps/dump3_unencrypted.bin", "../dumps/dump3_encrypted.bin");
	verify("../dumps/dump4_unencrypted.bin", "../dumps/dump4_encrypted.bin");
	verify("../dumps/dump5_unencrypted.bin", "../dumps/dump5_encrypted.bin");
	verify("../dumps/dump6_unencrypted.bin", "../dumps/dump6_encrypted.bin");
	verify("../dumps/dump7_unencrypted.bin", "../dumps/dump7_encrypted.bin");
	verify("../dumps/dump8_unencrypted.bin", "../dumps/dump8_encrypted.bin");
	verify("../dumps/dump9_unencrypted.bin", "../dumps/dump9_encrypted.bin");
}

