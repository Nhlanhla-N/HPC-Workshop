// INCLUDES
#include <stdio.h>
#include "code.h"
#include <stdlib.h>

// GLOBALS
#define MAX_LENGTH 256

//FUNCTIONS
// welcome message
void welcome_message()
{
    printf("Welcome!\n");
}
// get group name
void get_name(char* name)
{
    printf("Enter group name : ");
   fgets(name, MAX_LENGTH, stdin);
}

// 1. Function to create a folder using the name variable as its name
void create_folder(char* name)
{
	char command[256];
	snprintf(command, sizeof(command), "mkdir -p %s", name);
	system(command);
}

// 2. Function to create a file in the folder <folder_name> called group.txt where you insert the <group_name> as text
void create_file(char* folder_name, char* group_name)
{
    char filepath[512];
    snprintf(filepath, sizeof(filepath), "%s/group.txt", folder_name);
    
    FILE *file = fopen(filepath, "w");
    if (file != NULL) {
        fprintf(file, "%s\n", group_name);
        fclose(file);
    } else {
        perror("Error creating file");
    }
}
