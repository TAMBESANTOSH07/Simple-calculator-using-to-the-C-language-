
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define structures for tasks and projects
struct Task {
    char name[100];
    char description[255];
    int priority;
    // Add more fields as needed
};

struct Project {
    char name[100];
    char description[255];
    struct Task tasks[100];
    int taskCount;
    // Add more fields as needed
};

// Function to create a new task
struct Task createTask(char name[], char description[], int priority) {
    struct Task task;
    strcpy(task.name, name);
    strcpy(task.description, description);
    task.priority = priority;
    return task;
}

// Function to create a new project
struct Project createProject(char name[], char description[]) {
    struct Project project;
    strcpy(project.name, name);
    strcpy(project.description, description);
    project.taskCount = 0;
    return project;
}

int main() {
    // Initialize projects and tasks
    struct Project projects[10];
    int projectCount = 0;

    // Menu loop
    int choice;
    do {
        printf("Project Management Tool\n");
        printf("1. Create Project\n");
        printf("2. Create Task\n");
        printf("3. List Projects\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Create a new project
                // Add it to the projects array
                break;
            case 2:
                // Create a new task
                // Add it to a selected project's task list
                break;
            case 3:
                // List all projects and their tasks
                break;
            case 4:
                // Exit the program
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 4);

    return 0;
}
    